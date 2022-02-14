
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct intel_dp {int* train_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct intel_dp *VAR_2)
{
 u8 VAR_3 = VAR_2->train_set[0];
 int VAR_4 = VAR_3 & (VAR_1 |
      VAR_0);

 return FUNC_0(VAR_4);
}
