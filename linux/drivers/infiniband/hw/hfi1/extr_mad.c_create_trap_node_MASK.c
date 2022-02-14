
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int issuer_lid; int trap_num; int prod_type_lsb; int generic_type; } ;
struct trap_node {TYPE_1__ data; int list; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct trap_node* FUNC_2 (int,int ) ;

__attribute__((used)) static struct trap_node *FUNC_3(u8 VAR_2, __be16 VAR_3, u32 VAR_4)
{
 struct trap_node *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->list);
 VAR_5->data.generic_type = VAR_2;
 VAR_5->data.prod_type_lsb = VAR_1;
 VAR_5->data.trap_num = VAR_3;
 VAR_5->data.issuer_lid = FUNC_1(VAR_4);

 return VAR_5;
}
