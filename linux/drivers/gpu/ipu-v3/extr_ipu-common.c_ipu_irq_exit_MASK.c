
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {int domain; int irq_sync; int irq_err; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct ipu_soc *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_3(VAR_1->irq_err, ((void*)0), ((void*)0));
 FUNC_3(VAR_1->irq_sync, ((void*)0), ((void*)0));



 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1->domain, VAR_2);
  if (VAR_3)
   FUNC_0(VAR_3);
 }

 FUNC_1(VAR_1->domain);
}
