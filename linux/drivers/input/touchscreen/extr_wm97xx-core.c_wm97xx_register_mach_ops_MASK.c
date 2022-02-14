
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx_mach_ops {int dummy; } ;
struct wm97xx {int codec_mutex; struct wm97xx_mach_ops* mach_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct wm97xx *VAR_1,
        struct wm97xx_mach_ops *VAR_2)
{
 FUNC_0(&VAR_1->codec_mutex);
 if (VAR_1->mach_ops) {
  FUNC_1(&VAR_1->codec_mutex);
  return -VAR_0;
 }
 VAR_1->mach_ops = VAR_2;
 FUNC_1(&VAR_1->codec_mutex);

 return 0;
}
