
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tentry_info {scalar_t__ subtype; int value; } ;
struct table_info {struct radix_node_head* xstate; struct radix_node_head* state; } ;
struct ta_buf_radix {struct radix_node* ent_ptr; int mask_ptr; int addr_ptr; } ;
struct radix_node_head {int rh; struct radix_node* (* rnh_deladdr ) (int ,int ,int *) ;} ;
struct radix_node {int dummy; } ;
struct radix_cfg {int count6; int count4; } ;
struct radix_addr_xentry {int value; } ;
struct radix_addr_entry {int value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct radix_node* FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, struct table_info *VAR_3, struct tentry_info *VAR_4,
    void *VAR_5, uint32_t *VAR_6)
{
 struct radix_cfg *VAR_7;
 struct radix_node_head *VAR_8;
 struct radix_node *VAR_9;
 struct ta_buf_radix *VAR_10;

 VAR_7 = (struct radix_cfg *)VAR_2;
 VAR_10 = (struct ta_buf_radix *)VAR_5;

 if (VAR_4->subtype == VAR_0)
  VAR_8 = VAR_3->state;
 else
  VAR_8 = VAR_3->xstate;

 VAR_9 = VAR_8->rnh_deladdr(VAR_10->addr_ptr, VAR_10->mask_ptr, &VAR_8->rh);

 if (VAR_9 == ((void*)0))
  return (VAR_1);


 if (VAR_4->subtype == VAR_0)
  VAR_4->value = ((struct radix_addr_entry *)VAR_9)->value;
 else
  VAR_4->value = ((struct radix_addr_xentry *)VAR_9)->value;

 VAR_10->ent_ptr = VAR_9;

 if (VAR_4->subtype == VAR_0)
  VAR_7->count4--;
 else
  VAR_7->count6--;
 *VAR_6 = 1;

 return (0);
}
