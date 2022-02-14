
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_intsrc {int msi_count; int * msi_irqs; scalar_t__ msi_maxcount; scalar_t__ msi_vector; int msi_irq; int msi_cpu; int * msi_dev; struct msi_intsrc* msi_first; int msi_remap_cookie; scalar_t__ msi_msix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(int *VAR_5, int VAR_6)
{
 struct msi_intsrc *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_5(&VAR_4);
 VAR_8 = (struct msi_intsrc *)FUNC_3(VAR_5[0]);
 if (VAR_8 == ((void*)0)) {
  FUNC_6(&VAR_4);
  return (VAR_1);
 }


 if (VAR_8->msi_msix) {
  FUNC_6(&VAR_4);
  return (VAR_0);
 }


 if (VAR_8->msi_first == ((void*)0)) {
  FUNC_6(&VAR_4);
  return (VAR_2);
 }





 if (VAR_8->msi_first != VAR_8 || VAR_8->msi_count != VAR_6) {
  FUNC_6(&VAR_4);
  return (VAR_0);
 }
 FUNC_0(VAR_8->msi_dev != ((void*)0), ("unowned group"));


 for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
  VAR_7 = (struct msi_intsrc *)FUNC_3(VAR_5[VAR_9]);
  FUNC_0(VAR_7->msi_first == VAR_8, ("message not in group"));
  FUNC_0(VAR_7->msi_dev == VAR_8->msi_dev, ("owner mismatch"));



  VAR_7->msi_first = ((void*)0);
  VAR_7->msi_dev = ((void*)0);
  FUNC_1(VAR_7->msi_cpu, VAR_7->msi_vector, VAR_7->msi_irq);
  VAR_7->msi_vector = 0;
 }







 VAR_8->msi_first = ((void*)0);
 VAR_8->msi_dev = ((void*)0);
 FUNC_1(VAR_8->msi_cpu, VAR_8->msi_vector, VAR_8->msi_irq);
 VAR_8->msi_vector = 0;
 VAR_8->msi_count = 0;
 VAR_8->msi_maxcount = 0;
 FUNC_2(VAR_8->msi_irqs, VAR_3);
 VAR_8->msi_irqs = ((void*)0);

 FUNC_6(&VAR_4);
 return (0);
}
