
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {scalar_t__ id; int pen_probably_down; int codec_mutex; TYPE_1__* codec; int dev; } ;
struct TYPE_2__ {int (* poll_sample ) (struct wm97xx*,int,int*) ;int (* dig_enable ) (struct wm97xx*,int) ;int (* dig_restore ) (struct wm97xx*) ;int (* aux_prepare ) (struct wm97xx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wm97xx*) ;
 int FUNC_4 (struct wm97xx*,int,int*) ;
 int FUNC_5 (struct wm97xx*) ;
 int FUNC_6 (struct wm97xx*,int) ;
 int FUNC_7 (struct wm97xx*,int ) ;
 int FUNC_8 (struct wm97xx*,int ,int) ;

int FUNC_9(struct wm97xx *VAR_4, u16 VAR_5)
{
 int VAR_6 = 0, VAR_7;
 u16 VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;


 FUNC_1(&VAR_4->codec_mutex);




 if (VAR_4->id == VAR_3 &&
     (VAR_8 = FUNC_7(VAR_4, VAR_0)) & 0x8000) {
  VAR_6 = 1;
  FUNC_8(VAR_4, VAR_0, VAR_8 & 0x7fff);
 }


 VAR_4->codec->aux_prepare(VAR_4);


 VAR_4->pen_probably_down = 1;

 while (VAR_9 != VAR_2 && VAR_10++ < 5)
  VAR_9 = VAR_4->codec->poll_sample(VAR_4, VAR_5, &VAR_7);

 if (VAR_6)
  FUNC_8(VAR_4, VAR_0, VAR_8 | 0x8000);

 VAR_4->codec->dig_restore(VAR_4);

 VAR_4->pen_probably_down = 0;

 if (VAR_10 >= 5) {
  FUNC_0(VAR_4->dev,
   "timeout reading auxadc %d, disabling digitiser\n",
   VAR_5);
  VAR_4->codec->dig_enable(VAR_4, 0);
 }

 FUNC_2(&VAR_4->codec_mutex);
 return (VAR_9 == VAR_2 ? VAR_7 & 0xfff : -VAR_1);
}
