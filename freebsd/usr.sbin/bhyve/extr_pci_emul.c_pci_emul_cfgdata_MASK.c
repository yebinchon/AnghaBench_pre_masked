
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vmctx*,int,int,int ,int ,int ,int,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10,
   uint32_t *VAR_11, void *VAR_12)
{
 int VAR_13;

 FUNC_0(VAR_10 == 1 || VAR_10 == 2 || VAR_10 == 4);

 VAR_13 = VAR_4 + (VAR_9 - VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_6, VAR_7, VAR_8, VAR_1, VAR_5, VAR_3, VAR_13, VAR_10,
      VAR_11);
 } else {

  if (VAR_8)
   *VAR_11 = 0xffffffff;
 }
 return (0);
}
