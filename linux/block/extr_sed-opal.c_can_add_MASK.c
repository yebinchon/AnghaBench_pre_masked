
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 size_t FUNC_1 (struct opal_dev*) ;

__attribute__((used)) static bool FUNC_2(int *VAR_1, struct opal_dev *VAR_2, size_t VAR_3)
{
 if (*VAR_1)
  return 0;

 if (FUNC_1(VAR_2) < VAR_3) {
  FUNC_0("Error adding %zu bytes: end of buffer.\n", VAR_3);
  *VAR_1 = -VAR_0;
  return 0;
 }

 return 1;
}
