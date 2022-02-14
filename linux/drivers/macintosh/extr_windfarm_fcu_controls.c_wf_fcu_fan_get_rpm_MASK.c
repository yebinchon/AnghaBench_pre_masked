
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_priv {int rpm_shift; } ;
struct wf_fcu_fan {int id; struct wf_fcu_priv* fcu_priv; } ;
struct wf_control {struct wf_fcu_fan* priv; } ;
typedef unsigned char s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wf_fcu_priv*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct wf_control *VAR_3, s32 *VAR_4)
{
 struct wf_fcu_fan *VAR_5 = VAR_3->priv;
 struct wf_fcu_priv *VAR_6 = VAR_5->fcu_priv;
 int VAR_7, VAR_8, VAR_9 = VAR_6->rpm_shift;
 unsigned char VAR_10;
 unsigned char VAR_11;
 unsigned char VAR_12[2];

 VAR_7 = FUNC_0(VAR_6, 0xb, &VAR_10, 1);
 if (VAR_7 != 1)
  return -VAR_1;
 if ((VAR_10 & (1 << VAR_5->id)) != 0)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_6, 0xd, &VAR_11, 1);
 if (VAR_7 != 1)
  return -VAR_1;
 if ((VAR_11 & (1 << VAR_5->id)) == 0)
  return -VAR_2;





 VAR_8 = 0x10;

 VAR_7 = FUNC_0(VAR_6, VAR_8 + (VAR_5->id * 2), VAR_12, 2);
 if (VAR_7 != 2)
  return -VAR_1;

 *VAR_4 = (VAR_12[0] << (8 - VAR_9)) | VAR_12[1] >> VAR_9;

 return 0;
}
