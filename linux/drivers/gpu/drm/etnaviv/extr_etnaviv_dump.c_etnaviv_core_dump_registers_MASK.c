
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int dummy; } ;
struct etnaviv_dump_registers {int value; int reg; } ;
struct core_dump_iterator {struct etnaviv_dump_registers* data; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct core_dump_iterator*,int ,struct etnaviv_dump_registers*) ;
 int * VAR_1 ;
 int FUNC_2 (struct etnaviv_gpu*,int ) ;

__attribute__((used)) static void FUNC_3(struct core_dump_iterator *VAR_2,
 struct etnaviv_gpu *VAR_3)
{
 struct etnaviv_dump_registers *VAR_4 = VAR_2->data;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++, VAR_4++) {
  VAR_4->reg = VAR_1[VAR_5];
  VAR_4->value = FUNC_2(VAR_3, VAR_1[VAR_5]);
 }

 FUNC_1(VAR_2, VAR_0, VAR_4);
}
