
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rxe_pool {scalar_t__ max_elem; size_t table_size; int table; scalar_t__ min_index; scalar_t__ max_index; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct rxe_pool *VAR_3, u32 VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;
 size_t VAR_7;

 if ((VAR_4 - VAR_5 + 1) < VAR_3->max_elem) {
  FUNC_3("not enough indices for max_elem\n");
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_3->max_index = VAR_4;
 VAR_3->min_index = VAR_5;

 VAR_7 = FUNC_0(VAR_4 - VAR_5 + 1) * sizeof(long);
 VAR_3->table = FUNC_2(VAR_7, VAR_2);
 if (!VAR_3->table) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_3->table_size = VAR_7;
 FUNC_1(VAR_3->table, VAR_4 - VAR_5 + 1);

out:
 return VAR_6;
}
