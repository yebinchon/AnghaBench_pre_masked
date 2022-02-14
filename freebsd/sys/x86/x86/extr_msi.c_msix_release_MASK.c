
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_intsrc {scalar_t__ msi_maxcount; scalar_t__ msi_count; scalar_t__ msi_msix; scalar_t__ msi_vector; int msi_irq; int msi_cpu; int * msi_dev; int * msi_first; int msi_remap_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(int VAR_3)
{
 struct msi_intsrc *VAR_4;

 FUNC_4(&VAR_2);
 VAR_4 = (struct msi_intsrc *)FUNC_2(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(&VAR_2);
  return (VAR_1);
 }


 if (!VAR_4->msi_msix) {
  FUNC_5(&VAR_2);
  return (VAR_0);
 }

 FUNC_0(VAR_4->msi_dev != ((void*)0), ("unowned message"));







 VAR_4->msi_first = ((void*)0);
 VAR_4->msi_dev = ((void*)0);
 FUNC_1(VAR_4->msi_cpu, VAR_4->msi_vector, VAR_4->msi_irq);
 VAR_4->msi_vector = 0;
 VAR_4->msi_msix = 0;
 VAR_4->msi_count = 0;
 VAR_4->msi_maxcount = 0;

 FUNC_5(&VAR_2);
 return (0);
}
