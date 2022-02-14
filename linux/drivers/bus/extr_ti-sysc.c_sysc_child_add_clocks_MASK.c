
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {int nr_clocks; int * clock_roles; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct sysc*,struct device*,int ) ;

__attribute__((used)) static int FUNC_2(struct sysc *VAR_1,
     struct device *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_clocks; VAR_3++) {
  VAR_4 = FUNC_1(VAR_1,
         VAR_2,
         VAR_1->clock_roles[VAR_3]);
  if (VAR_4 && VAR_4 != -VAR_0) {
   FUNC_0(VAR_1->dev, "could not add child clock %s: %i\n",
    VAR_1->clock_roles[VAR_3], VAR_4);

   return VAR_4;
  }
 }

 return 0;
}
