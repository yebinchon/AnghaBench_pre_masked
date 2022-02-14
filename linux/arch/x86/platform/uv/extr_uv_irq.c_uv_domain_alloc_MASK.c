
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uv_irq_2_mmr_pnode {int offset; int pnode; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;
struct irq_alloc_info {scalar_t__ type; scalar_t__ uv_limit; int uv_name; int uv_offset; int uv_blade; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned int,void*) ;
 struct irq_data* FUNC_2 (struct irq_domain*,unsigned int) ;
 int FUNC_3 (struct irq_domain*,unsigned int,unsigned int,int *,struct uv_irq_2_mmr_pnode*,int ,int *,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct uv_irq_2_mmr_pnode*) ;
 struct uv_irq_2_mmr_pnode* FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct irq_domain *VAR_9, unsigned int VAR_10,
      unsigned int VAR_11, void *VAR_12)
{
 struct uv_irq_2_mmr_pnode *VAR_13;
 struct irq_alloc_info *VAR_14 = VAR_12;
 struct irq_data *VAR_15 = FUNC_2(VAR_9, VAR_10);
 int VAR_16;

 if (VAR_11 > 1 || !VAR_14 || VAR_14->type != VAR_6)
  return -VAR_0;

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_2,
     FUNC_0(VAR_15));
 if (!VAR_13)
  return -VAR_1;

 VAR_16 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_16 >= 0) {
  if (VAR_14->uv_limit == VAR_5)
   FUNC_4(VAR_10, VAR_4);
  else
   FUNC_4(VAR_10, VAR_3);

  VAR_13->pnode = FUNC_7(VAR_14->uv_blade);
  VAR_13->offset = VAR_14->uv_offset;
  FUNC_3(VAR_9, VAR_10, VAR_10, &VAR_8, VAR_13,
        VAR_7, ((void*)0), VAR_14->uv_name);
 } else {
  FUNC_5(VAR_13);
 }

 return VAR_16;
}
