
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_priv {int dummy; } ;
struct wf_fcu_fan {int id; struct wf_fcu_priv* fcu_priv; } ;
struct wf_control {struct wf_fcu_fan* priv; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wf_fcu_priv*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct wf_control *VAR_3, s32 *VAR_4)
{
 struct wf_fcu_fan *VAR_5 = VAR_3->priv;
 struct wf_fcu_priv *VAR_6 = VAR_5->fcu_priv;
 unsigned char VAR_7;
 unsigned char VAR_8;
 unsigned char VAR_9[2];
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, 0x2b, &VAR_7, 1);
 if (VAR_10 != 1)
  return -VAR_1;
 if ((VAR_7 & (1 << VAR_5->id)) != 0)
  return -VAR_0;
 VAR_10 = FUNC_0(VAR_6, 0x2d, &VAR_8, 1);
 if (VAR_10 != 1)
  return -VAR_1;
 if ((VAR_8 & (1 << VAR_5->id)) == 0)
  return -VAR_2;

 VAR_10 = FUNC_0(VAR_6, 0x30 + (VAR_5->id * 2), VAR_9, 1);
 if (VAR_10 != 1)
  return -VAR_1;

 *VAR_4 = (((s32)VAR_9[0]) * 1000) / 2559;

 return 0;
}
