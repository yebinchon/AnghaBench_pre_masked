
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold {int value_set; int current_value; int context; int (* fn ) (int ) ;} ;
typedef int dm_block_t ;


 scalar_t__ FUNC_0 (struct threshold*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct threshold*) ;

__attribute__((used)) static void FUNC_3(struct threshold *VAR_0, dm_block_t VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1) &&
     !FUNC_2(VAR_0))
  VAR_0->fn(VAR_0->context);

 VAR_0->value_set = 1;
 VAR_0->current_value = VAR_1;
}
