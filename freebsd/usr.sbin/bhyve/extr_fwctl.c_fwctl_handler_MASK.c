
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct vmctx *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
    uint32_t *VAR_5, void *VAR_6)
{

 if (VAR_2) {
  if (VAR_4 == 1)
   *VAR_5 = FUNC_0();
  else if (VAR_4 == 4)
   *VAR_5 = FUNC_1();
  else
   *VAR_5 = 0xffff;
 } else {
  if (VAR_4 == 2)
   FUNC_3(*VAR_5);
  else if (VAR_4 == 4)
   FUNC_2(*VAR_5);
 }

 return (0);
}
