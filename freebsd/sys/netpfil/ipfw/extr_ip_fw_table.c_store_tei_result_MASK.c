
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tentry_info {int flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0(struct tentry_info *VAR_7, int VAR_8, int VAR_9, uint32_t VAR_10)
{
 int VAR_11;

 VAR_11 = 0;

 switch (VAR_9) {
 case 0:
  if (VAR_8 == VAR_0 && VAR_10 != 0)
   VAR_11 = VAR_2;
  if (VAR_8 == VAR_1)
   VAR_11 = VAR_3;
  break;
 case 128:
  VAR_11 = VAR_6;
  break;
 case 129:
  VAR_11 = VAR_5;
  break;
 default:
  VAR_11 = VAR_4;
 }

 VAR_7->flags |= VAR_11;
}
