
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int ,int ,struct vmctx*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct vmctx *VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13,
    uint32_t *VAR_14, void *VAR_15)
{

 FUNC_0(!VAR_11);
 if (VAR_13 != 1)
  return (-1);

 FUNC_3(&VAR_6);
 switch (*VAR_14) {
 case 128:
  VAR_5 |= VAR_1;
  if (VAR_7 == ((void*)0)) {
   VAR_7 = FUNC_1(VAR_2, VAR_0,
       VAR_8, VAR_9);
   VAR_4 = FUNC_5(VAR_2, VAR_3);
  }
  break;
 case 129:
  VAR_5 &= ~VAR_1;
  if (VAR_7 != ((void*)0)) {
   FUNC_2(VAR_7);
   VAR_7 = ((void*)0);
   FUNC_5(VAR_2, VAR_4);
  }
  break;
 }
 FUNC_4(&VAR_6);
 return (0);
}
