
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct zram {int table; int mem_pool; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct zram*,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct zram *VAR_1, u64 VAR_2)
{
 size_t VAR_3 = VAR_2 >> VAR_0;
 size_t VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_1(VAR_1, VAR_4);

 FUNC_2(VAR_1->mem_pool);
 FUNC_0(VAR_1->table);
}
