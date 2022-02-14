
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*,int ,char*) ;

__attribute__((used)) static bool FUNC_2(bool *VAR_1, u32 VAR_2)
{
 return FUNC_0(VAR_0) &&
  FUNC_1(VAR_1, VAR_2,
           "Spectre v2: firmware did not set auxiliary control register IBE bit, system vulnerable\n");
}
