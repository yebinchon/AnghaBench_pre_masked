
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_gdp_node_list {int btm_field_paddr; int top_field_paddr; } ;
struct sti_gdp {struct sti_gdp_node_list* node_list; int plane; scalar_t__ regs; } ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct sti_gdp_node_list *FUNC_3(struct sti_gdp *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_1(VAR_2->regs + VAR_0);
 if (!VAR_3)
  goto end;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if ((VAR_3 != VAR_2->node_list[VAR_4].btm_field_paddr) &&
      (VAR_3 != VAR_2->node_list[VAR_4].top_field_paddr))
   return &VAR_2->node_list[VAR_4];


 FUNC_0("inconsistent NVN for %s: 0x%08X\n",
   FUNC_2(&VAR_2->plane), VAR_3);

end:
 return &VAR_2->node_list[0];
}
