
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct device_node*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 void* FUNC_2 (struct device_node*,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ,char*,void*) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (unsigned int,int) ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_6)
{
 struct device_node *VAR_7;
 unsigned VAR_8, VAR_9 = 1;

 VAR_7 = FUNC_1(((void*)0), ((void*)0), "jcore,ipi-controller");
 if (!VAR_7)
  goto out;

 VAR_3 = FUNC_0(VAR_7, 0);
 VAR_4 = FUNC_2(VAR_7, 0);
 if (!VAR_3 || !VAR_4)
  goto out;

 VAR_7 = FUNC_1(((void*)0), ((void*)0), "jcore,cpuid-mmio");
 if (!VAR_7)
  goto out;

 VAR_5 = FUNC_2(VAR_7, 0);
 if (!VAR_5)
  goto out;

 if (FUNC_3(VAR_3, VAR_2, VAR_0,
   "ipi", (void *)VAR_2) != 0)
  goto out;

 VAR_9 = VAR_6;
out:


 for (VAR_8=VAR_9; VAR_8<VAR_1; VAR_8++) {
  FUNC_4(VAR_8, 0);
  FUNC_5(VAR_8, 0);
 }
}
