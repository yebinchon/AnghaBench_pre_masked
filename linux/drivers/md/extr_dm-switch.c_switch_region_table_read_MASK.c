
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {int region_table_entry_bits; int * region_table; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct switch_ctx*,unsigned long,unsigned long*,unsigned int*) ;

__attribute__((used)) static unsigned FUNC_2(struct switch_ctx *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 unsigned VAR_3;

 FUNC_1(VAR_0, VAR_1, &VAR_2, &VAR_3);

 return (FUNC_0(VAR_0->region_table[VAR_2]) >> VAR_3) &
  ((1 << VAR_0->region_table_entry_bits) - 1);
}
