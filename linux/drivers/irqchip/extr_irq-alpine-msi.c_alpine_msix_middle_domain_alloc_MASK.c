
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct alpine_msix_data* host_data; } ;
struct alpine_msix_data {int dummy; } ;


 int FUNC_0 (struct alpine_msix_data*,unsigned int) ;
 int FUNC_1 (struct alpine_msix_data*,int,unsigned int) ;
 int FUNC_2 (struct irq_domain*,unsigned int,int) ;
 int FUNC_3 (struct irq_domain*,unsigned int,int) ;
 int FUNC_4 (struct irq_domain*,unsigned int,int,int *,struct alpine_msix_data*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3, void *VAR_4)
{
 struct alpine_msix_data *VAR_5 = VAR_1->host_data;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = FUNC_2(VAR_1, VAR_2 + VAR_8, VAR_6 + VAR_8);
  if (VAR_7)
   goto err_sgi;

  FUNC_4(VAR_1, VAR_2 + VAR_8, VAR_6 + VAR_8,
           &VAR_0, VAR_5);
 }

 return 0;

err_sgi:
 while (--VAR_8 >= 0)
  FUNC_3(VAR_1, VAR_2, VAR_8);
 FUNC_1(VAR_5, VAR_6, VAR_3);
 return VAR_7;
}
