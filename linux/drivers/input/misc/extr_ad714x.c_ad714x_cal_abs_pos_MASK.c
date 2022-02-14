
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad714x_chip {int* sensor_val; } ;



__attribute__((used)) static int FUNC_0(struct ad714x_chip *VAR_0,
    int VAR_1, int VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_3 == VAR_1) {
  VAR_5 = VAR_0->sensor_val[VAR_1 + 1];
  VAR_6 = VAR_0->sensor_val[VAR_1] +
   VAR_0->sensor_val[VAR_1 + 1];
 } else if (VAR_3 == VAR_2) {
  VAR_5 = VAR_0->sensor_val[VAR_2] *
   (VAR_2 - VAR_1) +
   VAR_0->sensor_val[VAR_2 - 1] *
   (VAR_2 - VAR_1 - 1);
  VAR_6 = VAR_0->sensor_val[VAR_2] +
   VAR_0->sensor_val[VAR_2 - 1];
 } else {
  VAR_5 = VAR_0->sensor_val[VAR_3] *
   (VAR_3 - VAR_1) +
   VAR_0->sensor_val[VAR_3 - 1] *
   (VAR_3 - VAR_1 - 1) +
   VAR_0->sensor_val[VAR_3 + 1] *
   (VAR_3 - VAR_1 + 1);
  VAR_6 = VAR_0->sensor_val[VAR_3] +
   VAR_0->sensor_val[VAR_3 - 1] +
   VAR_0->sensor_val[VAR_3 + 1];
 }

 return (VAR_4 / (VAR_2 - VAR_1)) * VAR_5 / VAR_6;
}
