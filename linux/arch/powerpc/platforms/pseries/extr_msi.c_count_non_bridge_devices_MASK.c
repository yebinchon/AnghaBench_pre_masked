
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msi_counts {int num_devices; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (char*,struct device_node*) ;

__attribute__((used)) static void *FUNC_3(struct device_node *VAR_1, void *VAR_2)
{
 struct msi_counts *VAR_3 = VAR_2;
 const __be32 *VAR_4;
 u32 VAR_5;

 FUNC_2("rtas_msi: counting %pOF\n", VAR_1);

 VAR_4 = FUNC_1(VAR_1, "class-code", ((void*)0));
 VAR_5 = VAR_4 ? FUNC_0(VAR_4) : 0;

 if ((VAR_5 >> 8) != VAR_0)
  VAR_3->num_devices++;

 return ((void*)0);
}
