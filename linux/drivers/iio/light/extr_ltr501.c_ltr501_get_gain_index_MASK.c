
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_gain {int scale; int uscale; } ;



__attribute__((used)) static int FUNC_0(struct ltr501_gain *VAR_0, int VAR_1,
     int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_2 == VAR_0[VAR_4].scale && VAR_3 == VAR_0[VAR_4].uscale)
   return VAR_4;

 return -1;
}
