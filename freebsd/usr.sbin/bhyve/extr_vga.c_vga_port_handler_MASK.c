
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vmctx*,int,int,int,int*,void*) ;
 int FUNC_2 (struct vmctx*,int,int,int,int,void*) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
   uint32_t *VAR_5, void *VAR_6)
{
 uint8_t VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 1:
  if (VAR_2) {
   *VAR_5 &= ~0xff;
   VAR_8 = FUNC_1(VAR_0, VAR_2, VAR_3, 1,
          &VAR_7, VAR_6);
   if (!VAR_8) {
    *VAR_5 |= VAR_7 & 0xff;
   }
  } else {
   VAR_7 = *VAR_5 & 0xff;
   VAR_8 = FUNC_2(VAR_0, VAR_2, VAR_3, 1,
           VAR_7, VAR_6);
  }
  break;
 case 2:
  if (VAR_2) {
   *VAR_5 &= ~0xffff;
   VAR_8 = FUNC_1(VAR_0, VAR_2, VAR_3, 1,
          &VAR_7, VAR_6);
   if (!VAR_8) {
    *VAR_5 |= VAR_7 & 0xff;
   }
   VAR_8 = FUNC_1(VAR_0, VAR_2, VAR_3 + 1, 1,
          &VAR_7, VAR_6);
   if (!VAR_8) {
    *VAR_5 |= (VAR_7 & 0xff) << 8;
   }
  } else {
   VAR_7 = *VAR_5 & 0xff;
   VAR_8 = FUNC_2(VAR_0, VAR_2, VAR_3, 1,
           VAR_7, VAR_6);
   VAR_7 = (*VAR_5 >> 8) & 0xff;
   VAR_8 =FUNC_2(VAR_0, VAR_2, VAR_3 + 1, 1,
          VAR_7, VAR_6);
  }
  break;
 default:
  FUNC_0(0);
  return (-1);
 }

 return (VAR_8);
}
