
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad714x_chip {int* sensor_val; } ;



__attribute__((used)) static int FUNC_0(struct ad714x_chip *VAR_0,
     int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = VAR_1; VAR_5 <= VAR_2; VAR_5++) {
  if (VAR_0->sensor_val[VAR_5] > VAR_3) {
   VAR_3 = VAR_0->sensor_val[VAR_5];
   VAR_4 = VAR_5;
  }
 }

 return VAR_4;
}
