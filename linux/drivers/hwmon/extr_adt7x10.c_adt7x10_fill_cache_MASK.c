
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adt7x10_data {int* temp; int hyst; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 struct adt7x10_data* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct adt7x10_data *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 1; VAR_5 < FUNC_0(VAR_3->temp); VAR_5++) {
  VAR_4 = FUNC_2(VAR_2, VAR_0[VAR_5]);
  if (VAR_4 < 0) {
   FUNC_3(VAR_2, "Failed to read value: reg %d, error %d\n",
    VAR_0[VAR_5], VAR_4);
   return VAR_4;
  }
  VAR_3->temp[VAR_5] = VAR_4;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4 < 0) {
  FUNC_3(VAR_2, "Failed to read value: reg %d, error %d\n",
    VAR_1, VAR_4);
  return VAR_4;
 }
 VAR_3->hyst = VAR_4;

 return 0;
}
