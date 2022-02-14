
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {int dev; scalar_t__* clocks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_5 ;
 int FUNC_3 (int ,char*,char const*,...) ;
 scalar_t__ FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_6(struct sysc *VAR_6, const char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = -VAR_0;

 if (!FUNC_5(VAR_5[VAR_1], VAR_7, 3))
  VAR_10 = VAR_1;
 else if (!FUNC_5(VAR_5[VAR_2], VAR_7, 3))
  VAR_10 = VAR_2;

 if (VAR_10 < 0) {
  for (VAR_9 = VAR_4; VAR_9 < VAR_3; VAR_9++) {
   if (!VAR_6->clocks[VAR_9]) {
    VAR_10 = VAR_9;
    break;
   }
  }
 }

 if (VAR_10 < 0) {
  FUNC_3(VAR_6->dev, "clock %s not added\n", VAR_7);
  return VAR_10;
 }

 VAR_6->clocks[VAR_10] = FUNC_4(VAR_6->dev, VAR_7);
 if (FUNC_0(VAR_6->clocks[VAR_10])) {
  FUNC_3(VAR_6->dev, "clock get error for %s: %li\n",
   VAR_7, FUNC_1(VAR_6->clocks[VAR_10]));

  return FUNC_1(VAR_6->clocks[VAR_10]);
 }

 VAR_8 = FUNC_2(VAR_6->clocks[VAR_10]);
 if (VAR_8) {
  FUNC_3(VAR_6->dev, "clock prepare error for %s: %i\n",
   VAR_7, VAR_8);

  return VAR_8;
 }

 return 0;
}
