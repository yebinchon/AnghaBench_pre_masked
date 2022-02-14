
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vmctx*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7,
    uint32_t *VAR_8, void *VAR_9)
{
 int VAR_10;

 static uint8_t VAR_11;

 if (VAR_7 != 1)
  return (-1);
 if (VAR_5)
  *VAR_8 = VAR_11;
 else {
  VAR_11 = *VAR_8;


  if (VAR_11 & 0x4) {
   VAR_10 = FUNC_1(VAR_3, VAR_1);
   FUNC_0(VAR_10 == 0 || VAR_2 == VAR_0);
  }
 }
 return (0);
}
