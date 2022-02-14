
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_priv {int rpm_shift; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct wf_fcu_priv*,int ,unsigned char*,int) ;
 int FUNC_2 (struct wf_fcu_priv*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct wf_fcu_priv *VAR_1)
{
 unsigned char VAR_2 = 0xff;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, 0xe, &VAR_2, 1);
 if (VAR_3 < 0)
  return -VAR_0;
 VAR_3 = FUNC_2(VAR_1, 0x2e, &VAR_2, 1);
 if (VAR_3 < 0)
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_1, 0, &VAR_2, 1);
 if (VAR_3 < 0)
  return -VAR_0;
 VAR_1->rpm_shift = (VAR_2 == 1) ? 2 : 3;

 FUNC_0("wf_fcu: FCU Initialized, RPM fan shift is %d\n",
   VAR_1->rpm_shift);

 return 0;
}
