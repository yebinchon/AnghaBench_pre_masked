
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rxe_pool {scalar_t__ max_index; scalar_t__ min_index; scalar_t__ last; int table; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static u32 FUNC_4(struct rxe_pool *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2 = VAR_0->max_index - VAR_0->min_index + 1;

 VAR_1 = FUNC_2(VAR_0->table, VAR_2, VAR_0->last);
 if (VAR_1 >= VAR_2)
  VAR_1 = FUNC_1(VAR_0->table, VAR_2);

 FUNC_0(VAR_1 >= VAR_2);
 FUNC_3(VAR_1, VAR_0->table);
 VAR_0->last = VAR_1;
 return VAR_1 + VAR_0->min_index;
}
