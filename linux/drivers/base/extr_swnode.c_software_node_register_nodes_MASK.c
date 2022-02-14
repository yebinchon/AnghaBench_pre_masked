
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct software_node {scalar_t__ name; } ;


 int FUNC_0 (struct software_node const*) ;
 int FUNC_1 (struct software_node const*) ;

int FUNC_2(const struct software_node *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++) {
  VAR_1 = FUNC_0(&VAR_0[VAR_2]);
  if (VAR_1) {
   FUNC_1(VAR_0);
   return VAR_1;
  }
 }

 return 0;
}
