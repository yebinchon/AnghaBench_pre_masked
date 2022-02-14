
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cpc925_mc_pdata {unsigned long total_mem; } ;


 int FUNC_0 (int,char*,unsigned long,...) ;
 struct device_node* FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 unsigned long FUNC_6 (unsigned int const*,int) ;

__attribute__((used)) static void FUNC_7(struct cpc925_mc_pdata *VAR_0)
{
 struct device_node *VAR_1 = ((void*)0);
 const unsigned int *VAR_2, *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_1 = FUNC_1(((void*)0), "memory");
 if (!VAR_1)
  return;

 VAR_6 = FUNC_3(VAR_1);
 VAR_5 = FUNC_4(VAR_1);
 VAR_2 = (const unsigned int *)FUNC_2(VAR_1, "reg", &VAR_4);
 VAR_3 = VAR_2 + VAR_4/4;

 VAR_0->total_mem = 0;
 do {
  VAR_7 = FUNC_6(VAR_2, VAR_6);
  VAR_2 += VAR_6;
  VAR_8 = FUNC_6(VAR_2, VAR_5);
  VAR_2 += VAR_5;
  FUNC_0(1, "start 0x%lx, size 0x%lx\n", VAR_7, VAR_8);
  VAR_0->total_mem += VAR_8;
 } while (VAR_2 < VAR_3);

 FUNC_5(VAR_1);
 FUNC_0(0, "total_mem 0x%lx\n", VAR_0->total_mem);
}
