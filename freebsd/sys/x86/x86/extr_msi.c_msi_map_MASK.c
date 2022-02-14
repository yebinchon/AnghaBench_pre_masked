
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct msi_intsrc {int msi_count; int msi_irq; int msi_remap_cookie; int msi_vector; int msi_cpu; int * msi_dev; struct msi_intsrc* msi_first; int msi_msix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msi_intsrc*) ;
 int FUNC_1 (struct msi_intsrc*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ,int ,int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;

int
FUNC_6(int VAR_6, uint64_t *VAR_7, uint32_t *VAR_8)
{
 struct msi_intsrc *VAR_9;
 int VAR_10;





 FUNC_4(&VAR_4);
 VAR_9 = (struct msi_intsrc *)FUNC_2(VAR_6);
 if (VAR_9 == ((void*)0)) {
  FUNC_5(&VAR_4);
  return (VAR_0);
 }


 if (VAR_9->msi_dev == ((void*)0)) {
  FUNC_5(&VAR_4);
  return (VAR_1);
 }






 if (!VAR_9->msi_msix) {
  if (VAR_9->msi_first == ((void*)0)) {
   FUNC_5(&VAR_4);
   return (VAR_1);
  }
  VAR_9 = VAR_9->msi_first;
 }
 FUNC_5(&VAR_4);
 VAR_10 = VAR_2;

 if (VAR_10 == VAR_2) {
  *VAR_7 = FUNC_0(VAR_9);
  *VAR_8 = FUNC_1(VAR_9);
  VAR_10 = 0;
 }
 return (VAR_10);
}
