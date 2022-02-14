
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long VAR_3 = 0x0, VAR_4 = 0;

 while (1) {
  VAR_3 = FUNC_1(VAR_1);

  if (VAR_3 & VAR_0)
   FUNC_0(100);
  else
   break;
  if (VAR_4++ > VAR_2) {
   FUNC_2("PCIE-PHY retry failed.\n");
   return -1;
  }
 }
 return 0;
}
