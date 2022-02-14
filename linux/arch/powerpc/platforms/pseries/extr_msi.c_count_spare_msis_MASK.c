
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_counts {int request; int quota; int over_quota; int spare; struct device_node* requestor; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static void *FUNC_3(struct device_node *VAR_0, void *VAR_1)
{
 struct msi_counts *VAR_2 = VAR_1;
 const __be32 *VAR_3;
 int VAR_4;

 if (VAR_0 == VAR_2->requestor)
  VAR_4 = VAR_2->request;
 else {


  VAR_4 = 0;
  VAR_3 = FUNC_2(VAR_0, "ibm,req#msi", ((void*)0));
  if (VAR_3)
   VAR_4 = FUNC_0(VAR_3);

  VAR_3 = FUNC_2(VAR_0, "ibm,req#msi-x", ((void*)0));
  if (VAR_3)
   VAR_4 = FUNC_1(VAR_4, (int)FUNC_0(VAR_3));
 }

 if (VAR_4 < VAR_2->quota)
  VAR_2->spare += VAR_2->quota - VAR_4;
 else if (VAR_4 > VAR_2->quota)
  VAR_2->over_quota++;

 return ((void*)0);
}
