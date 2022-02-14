
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct md_cluster_operations {int dummy; } ;


 int VAR_0 ;
 struct module* VAR_1 ;
 struct md_cluster_operations* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct md_cluster_operations *VAR_4,
       struct module *VAR_5)
{
 int VAR_6 = 0;
 FUNC_0(&VAR_3);
 if (VAR_2 != ((void*)0))
  VAR_6 = -VAR_0;
 else {
  VAR_2 = VAR_4;
  VAR_1 = VAR_5;
 }
 FUNC_1(&VAR_3);
 return VAR_6;
}
