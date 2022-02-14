
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mvebu_sei {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mvebu_sei *VAR_1)
{
 u32 VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_2(0xFFFFFFFF, VAR_1->base + FUNC_0(VAR_2));
  FUNC_2(0xFFFFFFFF, VAR_1->base + FUNC_1(VAR_2));
 }
}
