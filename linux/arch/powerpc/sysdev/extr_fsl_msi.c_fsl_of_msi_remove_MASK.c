
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ bitmap; } ;
struct TYPE_4__ {int * prev; } ;
struct fsl_msi {int virq; int feature; int msi_regs; TYPE_1__ bitmap; struct fsl_msi** cascade_array; TYPE_2__ list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,struct fsl_msi*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct fsl_msi*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct fsl_msi* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct fsl_msi *VAR_4 = FUNC_7(VAR_3);
 int VAR_5, VAR_6;

 if (VAR_4->list.prev != ((void*)0))
  FUNC_5(&VAR_4->list);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_4->cascade_array[VAR_6]) {
   VAR_5 = VAR_4->cascade_array[VAR_6]->virq;

   FUNC_0(!VAR_5);

   FUNC_1(VAR_5, VAR_4->cascade_array[VAR_6]);
   FUNC_4(VAR_4->cascade_array[VAR_6]);
   FUNC_3(VAR_5);
  }
 }
 if (VAR_4->bitmap.bitmap)
  FUNC_6(&VAR_4->bitmap);
 if ((VAR_4->feature & VAR_0) != VAR_1)
  FUNC_2(VAR_4->msi_regs);
 FUNC_4(VAR_4);

 return 0;
}
