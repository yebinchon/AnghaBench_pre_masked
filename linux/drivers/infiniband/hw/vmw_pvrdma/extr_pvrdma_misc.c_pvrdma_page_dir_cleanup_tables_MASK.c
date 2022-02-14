
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pvrdma_page_dir {int ntables; int ** tables; int * dir; } ;
struct pvrdma_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (struct pvrdma_dev*,struct pvrdma_page_dir*) ;

__attribute__((used)) static void FUNC_3(struct pvrdma_dev *VAR_1,
        struct pvrdma_page_dir *VAR_2)
{
 if (VAR_2->tables) {
  int VAR_3;

  FUNC_2(VAR_1, VAR_2);

  for (VAR_3 = 0; VAR_3 < VAR_2->ntables; VAR_3++) {
   u64 *VAR_4 = VAR_2->tables[VAR_3];

   if (VAR_4)
    FUNC_0(&VAR_1->pdev->dev, VAR_0,
        VAR_4, VAR_2->dir[VAR_3]);
  }

  FUNC_1(VAR_2->tables);
 }
}
