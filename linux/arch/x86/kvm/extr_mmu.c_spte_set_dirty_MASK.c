
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(u64 *VAR_1)
{
 u64 VAR_2 = *VAR_1;

 FUNC_1("rmap_set_dirty: spte %p %llx\n", VAR_1, *VAR_1);






 VAR_2 |= VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}
