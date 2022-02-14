
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
struct riscv_op {scalar_t__ (* match_func ) (struct riscv_op*,int ) ;int * name; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct riscv_op*,int ,int ) ;
 struct riscv_op* VAR_0 ;
 struct riscv_op* VAR_1 ;
 scalar_t__ FUNC_2 (struct riscv_op*,int ) ;
 scalar_t__ FUNC_3 (struct riscv_op*,int ) ;

vm_offset_t
FUNC_4(vm_offset_t VAR_2, bool VAR_3)
{
 struct riscv_op *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2, 4, 0);
 for (VAR_6 = 0; VAR_1[VAR_6].name != ((void*)0); VAR_6++) {
  VAR_4 = &VAR_1[VAR_6];
  if (VAR_4->match_func(VAR_4, VAR_5)) {
   FUNC_1(VAR_4, VAR_2, VAR_5);
   return(VAR_2 + 4);
  }
 };

 VAR_5 = FUNC_0(VAR_2, 2, 0);
 for (VAR_6 = 0; VAR_0[VAR_6].name != ((void*)0); VAR_6++) {
  VAR_4 = &VAR_0[VAR_6];
  if (VAR_4->match_func(VAR_4, VAR_5)) {
   FUNC_1(VAR_4, VAR_2, VAR_5);
   break;
  }
 };

 return(VAR_2 + 2);
}
