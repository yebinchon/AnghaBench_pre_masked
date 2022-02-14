
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tentry_info {scalar_t__ subtype; int value; int flags; } ;
struct table_info {struct radix_node_head* xstate; struct radix_node_head* state; } ;
struct ta_buf_radix {int * ent_ptr; int mask_ptr; int addr_ptr; } ;
struct radix_node_head {int rh; struct radix_node* (* rnh_addaddr ) (int ,int ,int *,int *) ;struct radix_node* (* rnh_lookup ) (int ,int ,int *) ;} ;
struct radix_node {int dummy; } ;
struct radix_cfg {int count6; int count4; } ;
struct radix_addr_xentry {int value; } ;
struct radix_addr_entry {int value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct radix_node* FUNC_0 (int ,int ,int *) ;
 struct radix_node* FUNC_1 (int ,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_7, struct table_info *VAR_8, struct tentry_info *VAR_9,
    void *VAR_10, uint32_t *VAR_11)
{
 struct radix_cfg *VAR_12;
 struct radix_node_head *VAR_13;
 struct radix_node *VAR_14;
 struct ta_buf_radix *VAR_15;
 uint32_t *VAR_16, VAR_17;

 VAR_12 = (struct radix_cfg *)VAR_7;
 VAR_15 = (struct ta_buf_radix *)VAR_10;


 if (VAR_9->subtype == VAR_0) {
  VAR_13 = VAR_8->state;
  ((struct radix_addr_entry *)VAR_15->ent_ptr)->value = VAR_9->value;
 } else {
  VAR_13 = VAR_8->xstate;
  ((struct radix_addr_xentry *)VAR_15->ent_ptr)->value = VAR_9->value;
 }


 VAR_14 = VAR_13->rnh_lookup(VAR_15->addr_ptr, VAR_15->mask_ptr, &VAR_13->rh);
 if (VAR_14 != ((void*)0)) {
  if ((VAR_9->flags & VAR_5) == 0)
   return (VAR_1);

  if (VAR_9->subtype == VAR_0)
   VAR_16 = &((struct radix_addr_entry *)VAR_14)->value;
  else
   VAR_16 = &((struct radix_addr_xentry *)VAR_14)->value;

  VAR_17 = *VAR_16;
  *VAR_16 = VAR_9->value;
  VAR_9->value = VAR_17;


  VAR_9->flags |= VAR_6;
  *VAR_11 = 0;

  return (0);
 }

 if ((VAR_9->flags & VAR_4) != 0)
  return (VAR_2);

 VAR_14 = VAR_13->rnh_addaddr(VAR_15->addr_ptr, VAR_15->mask_ptr, &VAR_13->rh,VAR_15->ent_ptr);
 if (VAR_14 == ((void*)0)) {

  return (VAR_3);
 }

 if (VAR_9->subtype == VAR_0)
  VAR_12->count4++;
 else
  VAR_12->count6++;
 VAR_15->ent_ptr = ((void*)0);
 *VAR_11 = 1;

 return (0);
}
