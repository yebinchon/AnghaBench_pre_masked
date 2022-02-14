
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, int VAR_3)
{
 FUNC_1("Brightness = %i\n", VAR_3);
 FUNC_0(VAR_0, VAR_3);
 if (VAR_3 >= 200) {
  FUNC_0(VAR_1, 1);
  return VAR_3 - 72;
 } else {
  FUNC_0(VAR_1, 0);
  return VAR_3;
 }
}
