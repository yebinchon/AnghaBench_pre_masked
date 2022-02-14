
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct bcm7120_l2_intc_data {unsigned int n_words; scalar_t__ map_mask_prop; struct bcm7120_l1_intc_data* l1_data; } ;
struct bcm7120_l1_intc_data {int* irq_map_mask; struct bcm7120_l2_intc_data* b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device_node*,int) ;
 int FUNC_2 (int,int ,struct bcm7120_l1_intc_data*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_2,
     struct bcm7120_l2_intc_data *VAR_3,
     int VAR_4, u32 *VAR_5)
{
 struct bcm7120_l1_intc_data *VAR_6 = &VAR_3->l1_data[VAR_4];
 int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_7) {
  FUNC_3("failed to map interrupt %d\n", VAR_4);
  return -VAR_0;
 }
 for (VAR_8 = 0; VAR_8 < VAR_3->n_words; VAR_8++) {
  if (VAR_3->map_mask_prop) {
   VAR_6->irq_map_mask[VAR_8] |=
    FUNC_0(VAR_3->map_mask_prop +
          VAR_4 * VAR_3->n_words + VAR_8);
  } else {
   VAR_6->irq_map_mask[VAR_8] = 0xffffffff;
  }
  VAR_5[VAR_8] |= VAR_6->irq_map_mask[VAR_8];
 }

 VAR_6->b = VAR_3;

 FUNC_2(VAR_7,
      VAR_1, VAR_6);
 return 0;
}
