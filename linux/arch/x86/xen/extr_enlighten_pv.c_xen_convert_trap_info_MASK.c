
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trap_info {scalar_t__ address; } ;
struct desc_ptr {int size; scalar_t__ address; } ;
typedef int gate_desc ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int,int *,struct trap_info*) ;

__attribute__((used)) static void FUNC_2(const struct desc_ptr *VAR_0,
      struct trap_info *VAR_1)
{
 unsigned VAR_2, VAR_3, VAR_4;

 VAR_4 = (VAR_0->size+1) / sizeof(gate_desc);
 FUNC_0(VAR_4 > 256);

 for (VAR_2 = VAR_3 = 0; VAR_2 < VAR_4; VAR_2++) {
  gate_desc *VAR_5 = (gate_desc *)(VAR_0->address) + VAR_2;

  if (FUNC_1(VAR_2, VAR_5, &VAR_1[VAR_3]))
   VAR_3++;
 }
 VAR_1[VAR_3].address = 0;
}
