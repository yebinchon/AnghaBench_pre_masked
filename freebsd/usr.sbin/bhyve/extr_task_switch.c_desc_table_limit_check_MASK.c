
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct vmctx {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct vmctx*,int,int,int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(struct vmctx *VAR_2, int VAR_3, uint16_t VAR_4)
{
 uint64_t VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_4) ? VAR_1 : VAR_0;
 VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_9, &VAR_5, &VAR_6, &VAR_7);
 FUNC_4(VAR_8 == 0);

 if (VAR_9 == VAR_1) {
  if (FUNC_2(VAR_7) || !FUNC_1(VAR_7))
   return (-1);
 }

 if (VAR_6 < FUNC_3(VAR_4))
  return (-1);
 else
  return (0);
}
