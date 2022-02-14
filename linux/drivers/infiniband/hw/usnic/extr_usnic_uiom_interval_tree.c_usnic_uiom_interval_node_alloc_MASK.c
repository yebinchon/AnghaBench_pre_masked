
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_uiom_interval_node {long start; long last; int flags; int ref_cnt; } ;


 int VAR_0 ;
 struct usnic_uiom_interval_node* FUNC_0 (int,int ) ;

__attribute__((used)) static struct usnic_uiom_interval_node*
FUNC_1(long int VAR_1, long int VAR_2, int VAR_3,
    int VAR_4)
{
 struct usnic_uiom_interval_node *VAR_5 = FUNC_0(sizeof(*VAR_5),
        VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->start = VAR_1;
 VAR_5->last = VAR_2;
 VAR_5->flags = VAR_4;
 VAR_5->ref_cnt = VAR_3;

 return VAR_5;
}
