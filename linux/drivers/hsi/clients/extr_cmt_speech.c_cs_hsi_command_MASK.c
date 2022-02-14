
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cs_hsi_iface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_0 (struct cs_hsi_iface*,int) ;
 int FUNC_1 (struct cs_hsi_iface*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct cs_hsi_iface *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0;

 FUNC_2();
 switch (VAR_6 & VAR_4) {
 case 128:
  VAR_7 = FUNC_0(VAR_5, VAR_6);
  break;
 case 129:
  if ((VAR_6 & VAR_0) == VAR_2)
   VAR_7 = FUNC_1(VAR_5, VAR_6 & VAR_1);
  else
   VAR_7 = -VAR_3;
  break;
 default:
  VAR_7 = -VAR_3;
  break;
 }
 FUNC_3();

 return VAR_7;
}
