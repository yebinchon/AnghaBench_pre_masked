
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 () ;

unsigned long FUNC_2(void)
{
 unsigned int VAR_1, VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_1();
 VAR_1 = FUNC_0(VAR_0) & 0x3;

 switch (VAR_1) {
 case 0:

  VAR_3 = VAR_2;
  break;
 case 2:

  VAR_3 = VAR_2 / 2;
  break;
 case 3:

  VAR_3 = (VAR_2 * 2) / 5;
  break;
 case 4:

  VAR_3 = VAR_2 / 3;
  break;
 default:
  VAR_3 = 0;
  break;
 }

 return VAR_3;
}
