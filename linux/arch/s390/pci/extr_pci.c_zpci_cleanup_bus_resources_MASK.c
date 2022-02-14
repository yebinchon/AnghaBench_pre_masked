
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpci_dev {TYPE_1__* bars; } ;
struct TYPE_2__ {int res; int map_idx; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct zpci_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct zpci_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->bars[VAR_2].size || !VAR_1->bars[VAR_2].res)
   continue;

  FUNC_2(VAR_1, VAR_1->bars[VAR_2].map_idx);
  FUNC_1(VAR_1->bars[VAR_2].res);
  FUNC_0(VAR_1->bars[VAR_2].res);
 }
}
