
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct assoc_arrays {int n_arrays; int array_sz; int const* arrays; } ;
typedef int __be32 ;


 struct device_node* FUNC_0 (char*) ;
 int * FUNC_1 (struct device_node*,char*,int*) ;
 int FUNC_2 (struct device_node*) ;
 void* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct assoc_arrays *VAR_0)
{
 struct device_node *VAR_1;
 const __be32 *VAR_2;
 u32 VAR_3;

 VAR_1 = FUNC_0("/ibm,dynamic-reconfiguration-memory");
 if (!VAR_1)
  return -1;

 VAR_2 = FUNC_1(VAR_1, "ibm,associativity-lookup-arrays", &VAR_3);
 if (!VAR_2 || VAR_3 < 2 * sizeof(unsigned int)) {
  FUNC_2(VAR_1);
  return -1;
 }

 VAR_0->n_arrays = FUNC_3(VAR_2++, 1);
 VAR_0->array_sz = FUNC_3(VAR_2++, 1);

 FUNC_2(VAR_1);




 if (VAR_3 < (VAR_0->n_arrays * VAR_0->array_sz + 2) * sizeof(unsigned int))
  return -1;

 VAR_0->arrays = VAR_2;
 return 0;
}
