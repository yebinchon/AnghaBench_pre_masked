
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_priv {int rpm_shift; } ;
struct wf_fcu_fan {int min; int max; int target; int id; struct wf_fcu_priv* fcu_priv; } ;
struct wf_control {struct wf_fcu_fan* priv; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct wf_fcu_priv*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct wf_control *VAR_1, s32 VAR_2)
{
 struct wf_fcu_fan *VAR_3 = VAR_1->priv;
 struct wf_fcu_priv *VAR_4 = VAR_3->fcu_priv;
 int VAR_5, VAR_6 = VAR_4->rpm_shift;
 unsigned char VAR_7[2];

 if (VAR_2 < VAR_3->min)
  VAR_2 = VAR_3->min;
 if (VAR_2 > VAR_3->max)
  VAR_2 = VAR_3->max;

 VAR_3->target = VAR_2;

 VAR_7[0] = VAR_2 >> (8 - VAR_6);
 VAR_7[1] = VAR_2 << VAR_6;
 VAR_5 = FUNC_0(VAR_4, 0x10 + (VAR_3->id * 2), VAR_7, 2);
 if (VAR_5 < 0)
  return -VAR_0;
 return 0;
}
