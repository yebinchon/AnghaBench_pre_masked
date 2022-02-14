
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpic {int flags; int msi_bitmap; int irqhost; int num_sources; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mpic*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mpic *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->msi_bitmap, VAR_1->num_sources,
         FUNC_0(VAR_1->irqhost));
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(&VAR_1->msi_bitmap);
 if (VAR_2 > 0) {
  if (VAR_1->flags & VAR_0)
   VAR_2 = FUNC_1(VAR_1);

  if (VAR_2) {
   FUNC_3(&VAR_1->msi_bitmap);
   return VAR_2;
  }
 }

 return 0;
}
