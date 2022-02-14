
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct cbe_regs_map* data; struct device_node* parent; } ;
struct cbe_regs_map {struct device_node* be_node; struct device_node* cpu_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct cbe_regs_map* VAR_1 ;
 int FUNC_1 (struct device_node*,char*) ;

__attribute__((used)) static struct cbe_regs_map *FUNC_2(struct device_node *VAR_2)
{
 int VAR_3;
 struct device_node *VAR_4;

 if (!FUNC_1(VAR_2, "spe")) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   if (VAR_1[VAR_3].cpu_node == VAR_2 ||
       VAR_1[VAR_3].be_node == VAR_2)
    return &VAR_1[VAR_3];
  return ((void*)0);
 }

 if (VAR_2->data)
  return VAR_2->data;


 VAR_4 = VAR_2;
 do {
  VAR_4 = VAR_4->parent;

  FUNC_0(!VAR_4);
 } while (!FUNC_1(VAR_4, "cpu") ||
   !FUNC_1(VAR_4, "be"));

 VAR_2->data = FUNC_2(VAR_4);

 return VAR_2->data;
}
