
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct vmctx*,int ) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12,
    uint32_t *VAR_13, void *VAR_14)
{
 int VAR_15;

 if (VAR_12 != 2)
  return (-1);
 if (VAR_10)
  *VAR_13 = VAR_7;
 else {





  VAR_7 = (VAR_7 & VAR_2) |
      (*VAR_13 & ~(VAR_3 | VAR_1));





  if (*VAR_13 & VAR_3) {
   if ((VAR_7 & VAR_4) >> 10 == 5) {
    VAR_15 = FUNC_1(VAR_8, VAR_5);
    FUNC_0(VAR_15 == 0 || VAR_6 == VAR_0);
   }
  }
 }
 return (0);
}
