
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {int rh; scalar_t__ (* rnh_deladdr ) (int ,int ,int *) ;} ;
struct radix_node {int rn_mask; int rn_key; } ;
struct radix_addr_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radix_addr_entry*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct radix_node *VAR_1, void *VAR_2)
{
 struct radix_node_head * const VAR_3 = VAR_2;
 struct radix_addr_entry *VAR_4;

 VAR_4 = (struct radix_addr_entry *)
     VAR_3->rnh_deladdr(VAR_1->rn_key, VAR_1->rn_mask, &VAR_3->rh);
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4, VAR_0);
 return (0);
}
