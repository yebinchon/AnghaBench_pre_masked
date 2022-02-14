
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(u64 *VAR_1)
{
 u64 VAR_2 = *VAR_1;

 FUNC_2("rmap_clear_dirty: spte %p %llx\n", VAR_1, *VAR_1);

 FUNC_0(!FUNC_3(VAR_2));
 VAR_2 &= ~VAR_0;
 return FUNC_1(VAR_1, VAR_2);
}
