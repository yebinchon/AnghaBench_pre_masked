
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_alloc_info {int uv_limit; int uv_blade; unsigned long uv_offset; char* uv_name; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_alloc_info*,int ) ;
 int FUNC_2 (struct irq_domain*,int,int ,struct irq_alloc_info*) ;
 int FUNC_3 (int) ;
 struct irq_domain* FUNC_4 () ;

int FUNC_5(char *VAR_2, int VAR_3, int VAR_4,
   unsigned long VAR_5, int VAR_6)
{
 struct irq_alloc_info VAR_7;
 struct irq_domain *VAR_8 = FUNC_4();

 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_7, FUNC_0(VAR_3));
 VAR_7.type = VAR_1;
 VAR_7.uv_limit = VAR_6;
 VAR_7.uv_blade = VAR_4;
 VAR_7.uv_offset = VAR_5;
 VAR_7.uv_name = VAR_2;

 return FUNC_2(VAR_8, 1,
         FUNC_3(VAR_4), &VAR_7);
}
