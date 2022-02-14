
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_12__ {int sec; } ;
struct TYPE_8__ {scalar_t__ pid; } ;
struct TYPE_9__ {TYPE_1__ sec; } ;
struct dmxdev_filter {TYPE_5__ feed; struct dmxdev* dev; TYPE_2__ params; } ;
struct dmxdev {int filternum; TYPE_6__* demux; TYPE_7__* filter; } ;
struct TYPE_10__ {scalar_t__ pid; } ;
struct TYPE_11__ {TYPE_3__ sec; } ;
struct TYPE_14__ {scalar_t__ state; scalar_t__ type; TYPE_4__ params; } ;
struct TYPE_13__ {int (* release_section_feed ) (TYPE_6__*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_2(struct dmxdev_filter *VAR_2)
{
 int VAR_3;
 struct dmxdev *VAR_4 = VAR_2->dev;
 u16 VAR_5 = VAR_2->params.sec.pid;

 for (VAR_3 = 0; VAR_3 < VAR_4->filternum; VAR_3++)
  if (VAR_4->filter[VAR_3].state >= VAR_0 &&
      VAR_4->filter[VAR_3].type == VAR_1 &&
      VAR_4->filter[VAR_3].params.sec.pid == VAR_5) {
   FUNC_0(&VAR_4->filter[VAR_3]);
   return 0;
  }

 VAR_2->dev->demux->release_section_feed(VAR_4->demux,
       VAR_2->feed.sec);

 return 0;
}
