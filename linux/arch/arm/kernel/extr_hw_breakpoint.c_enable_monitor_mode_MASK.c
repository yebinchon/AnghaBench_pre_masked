
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void)
{
 u32 VAR_6;
 FUNC_0(VAR_3, VAR_4, 0, VAR_6);


 if (VAR_6 & VAR_0)
  goto out;


 switch (FUNC_2()) {
 case 132:
 case 131:
  FUNC_1(VAR_3, VAR_4, 0, (VAR_6 | VAR_0));
  break;
 case 129:
 case 130:
 case 128:
  FUNC_1(VAR_3, VAR_5, 2, (VAR_6 | VAR_0));
  FUNC_3();
  break;
 default:
  return -VAR_1;
 }


 FUNC_0(VAR_3, VAR_4, 0, VAR_6);
 if (!(VAR_6 & VAR_0)) {
  FUNC_4("Failed to enable monitor mode on CPU %d.\n",
    FUNC_5());
  return -VAR_2;
 }

out:
 return 0;
}
