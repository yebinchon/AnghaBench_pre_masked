
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct net_device {int name; } ;
struct dvb_net_priv {scalar_t__ feedtype; int multi_num; int mutex; TYPE_2__* tsfeed; TYPE_1__* demux; TYPE_5__* secfeed; int ** multi_secfilter; int * secfilter; } ;
struct TYPE_11__ {int (* release_filter ) (TYPE_5__*,int *) ;int (* stop_filtering ) (TYPE_5__*) ;scalar_t__ is_filtering; } ;
struct TYPE_10__ {int (* stop_filtering ) (TYPE_2__*) ;scalar_t__ is_filtering; } ;
struct TYPE_9__ {int (* release_ts_feed ) (TYPE_1__*,TYPE_2__*) ;int (* release_section_feed ) (TYPE_1__*,TYPE_5__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 struct dvb_net_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_3)
{
 struct dvb_net_priv *VAR_4 = FUNC_3(VAR_3);
 int VAR_5, VAR_6 = 0;

 FUNC_0(&VAR_4->mutex);
 if (VAR_4->feedtype == VAR_0) {
  if (VAR_4->secfeed) {
   if (VAR_4->secfeed->is_filtering) {
    FUNC_2(VAR_3, "stop secfeed\n");
    VAR_4->secfeed->stop_filtering(VAR_4->secfeed);
   }

   if (VAR_4->secfilter) {
    FUNC_2(VAR_3, "release secfilter\n");
    VAR_4->secfeed->release_filter(VAR_4->secfeed,
             VAR_4->secfilter);
    VAR_4->secfilter=((void*)0);
   }

   for (VAR_5=0; VAR_5<VAR_4->multi_num; VAR_5++) {
    if (VAR_4->multi_secfilter[VAR_5]) {
     FUNC_2(VAR_3, "release multi_filter[%d]\n",
         VAR_5);
     VAR_4->secfeed->release_filter(VAR_4->secfeed,
              VAR_4->multi_secfilter[VAR_5]);
     VAR_4->multi_secfilter[VAR_5] = ((void*)0);
    }
   }

   VAR_4->demux->release_section_feed(VAR_4->demux, VAR_4->secfeed);
   VAR_4->secfeed = ((void*)0);
  } else
   FUNC_4("%s: no feed to stop\n", VAR_3->name);
 } else if (VAR_4->feedtype == VAR_1) {
  if (VAR_4->tsfeed) {
   if (VAR_4->tsfeed->is_filtering) {
    FUNC_2(VAR_3, "stop tsfeed\n");
    VAR_4->tsfeed->stop_filtering(VAR_4->tsfeed);
   }
   VAR_4->demux->release_ts_feed(VAR_4->demux, VAR_4->tsfeed);
   VAR_4->tsfeed = ((void*)0);
  }
  else
   FUNC_4("%s: no ts feed to stop\n", VAR_3->name);
 } else
  VAR_6 = -VAR_2;
 FUNC_1(&VAR_4->mutex);
 return VAR_6;
}
