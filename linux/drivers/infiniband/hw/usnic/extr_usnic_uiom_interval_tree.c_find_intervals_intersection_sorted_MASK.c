
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_uiom_interval_node {int link; } ;
struct rb_root_cached {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *,struct list_head*,int ) ;
 struct usnic_uiom_interval_node* FUNC_3 (struct rb_root_cached*,unsigned long,unsigned long) ;
 struct usnic_uiom_interval_node* FUNC_4 (struct usnic_uiom_interval_node*,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct rb_root_cached *VAR_1,
       unsigned long VAR_2, unsigned long VAR_3,
       struct list_head *VAR_4)
{
 struct usnic_uiom_interval_node *VAR_5;

 FUNC_0(VAR_4);

 for (VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
  VAR_5;
  VAR_5 = FUNC_4(VAR_5, VAR_2, VAR_3))
  FUNC_1(&VAR_5->link, VAR_4);

 FUNC_2(((void*)0), VAR_4, VAR_0);
}
