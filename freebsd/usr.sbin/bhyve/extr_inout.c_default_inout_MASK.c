
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct vmctx *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
              uint32_t *VAR_5, void *VAR_6)
{
 if (VAR_2) {
  switch (VAR_4) {
  case 4:
   *VAR_5 = 0xffffffff;
   break;
  case 2:
   *VAR_5 = 0xffff;
   break;
  case 1:
   *VAR_5 = 0xff;
   break;
  }
 }

 return (0);
}
