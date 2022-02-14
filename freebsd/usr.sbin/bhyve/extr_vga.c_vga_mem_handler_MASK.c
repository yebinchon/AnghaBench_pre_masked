
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmctx*,int,void*) ;
 int FUNC_1 (struct vmctx*,int,int,void*) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_1, int VAR_2, int VAR_3, uint64_t VAR_4,
  int VAR_5, uint64_t *VAR_6, void *VAR_7, long VAR_8)
{
 if (VAR_3 == VAR_0) {
  switch (VAR_5) {
  case 1:
   FUNC_1(VAR_1, VAR_4, *VAR_6, VAR_7);
   break;
  case 2:
   FUNC_1(VAR_1, VAR_4, *VAR_6, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 1, *VAR_6 >> 8, VAR_7);
   break;
  case 4:
   FUNC_1(VAR_1, VAR_4, *VAR_6, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 1, *VAR_6 >> 8, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 2, *VAR_6 >> 16, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 3, *VAR_6 >> 24, VAR_7);
   break;
  case 8:
   FUNC_1(VAR_1, VAR_4, *VAR_6, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 1, *VAR_6 >> 8, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 2, *VAR_6 >> 16, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 3, *VAR_6 >> 24, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 4, *VAR_6 >> 32, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 5, *VAR_6 >> 40, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 6, *VAR_6 >> 48, VAR_7);
   FUNC_1(VAR_1, VAR_4 + 7, *VAR_6 >> 56, VAR_7);
   break;
  }
 } else {
  switch (VAR_5) {
  case 1:
   *VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_7);
   break;
  case 2:
   *VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_7);
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 1, VAR_7) << 8;
   break;
  case 4:
   *VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_7);
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 1, VAR_7) << 8;
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 2, VAR_7) << 16;
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 3, VAR_7) << 24;
   break;
  case 8:
   *VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_7);
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 1, VAR_7) << 8;
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 2, VAR_7) << 16;
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 3, VAR_7) << 24;
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 4, VAR_7) << 32;
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 5, VAR_7) << 40;
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 6, VAR_7) << 48;
   *VAR_6 |= FUNC_0(VAR_1, VAR_4 + 7, VAR_7) << 56;
   break;
  }
 }

 return (0);
}
