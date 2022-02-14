
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {scalar_t__* offsets; int module_size; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct sysc *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->offsets[VAR_3] < 0)
   continue;

  if (VAR_2->offsets[VAR_3] > (VAR_2->module_size - 4)) {
   FUNC_0(VAR_2->dev, "register outside module range");

    return -VAR_0;
  }

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (VAR_2->offsets[VAR_4] < 0)
    continue;

   if (VAR_2->offsets[VAR_3] == VAR_2->offsets[VAR_4])
    VAR_6++;
  }
  VAR_5++;
 }

 if (VAR_6 > VAR_5) {
  FUNC_0(VAR_2->dev, "overlapping registers: (%i/%i)",
   VAR_5, VAR_6);

  return -VAR_0;
 }

 return 0;
}
