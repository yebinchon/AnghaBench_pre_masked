
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {size_t number; int dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,size_t) ;
 int VAR_0 ;
 struct device* FUNC_2 (int ,int ,int ,int *,char*,size_t) ;
 struct device** VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,size_t) ;

__attribute__((used)) static void FUNC_4(struct parport *VAR_3)
{
 struct device *VAR_4;

 if (VAR_1[VAR_3->number])
  return;

 VAR_4 = FUNC_2(VAR_2, VAR_3->dev,
       FUNC_1(VAR_0, VAR_3->number), ((void*)0),
       "parport%d", VAR_3->number);
 if (FUNC_0(VAR_4)) {
  FUNC_3("Failed to create device parport%d\n",
         VAR_3->number);
  return;
 }
 VAR_1[VAR_3->number] = VAR_4;
}
