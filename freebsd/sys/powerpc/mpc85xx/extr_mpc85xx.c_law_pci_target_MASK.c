
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct resource*) ;

int
FUNC_3(struct resource *VAR_5, int *VAR_6, int *VAR_7)
{
 u_long VAR_8;
 uint32_t VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_0(FUNC_1(VAR_2));

 VAR_8 = FUNC_2(VAR_5) & 0xf000;

 VAR_11 = 0;
 VAR_10 = -1;
 switch (VAR_8) {
 case 0x0000:
 case 0x8000:
  VAR_10 = 0;
  break;
 case 0x1000:
 case 0x9000:
  VAR_10 = 1;
  break;
 case 0x2000:
 case 0xa000:
  if (VAR_9 == VAR_4 || VAR_9 == VAR_3)
   VAR_10 = 3;
  else
   VAR_10 = 2;
  break;
 case 0x3000:
 case 0xb000:
  if (VAR_9 == VAR_4 || VAR_9 == VAR_3)
   VAR_11 = VAR_0;
  else
   VAR_10 = 3;
  break;
 default:
  VAR_11 = VAR_1;
 }
 if (VAR_11 == 0) {
  *VAR_6 = VAR_10;
  *VAR_7 = VAR_10;
 }
 return (VAR_11);
}
