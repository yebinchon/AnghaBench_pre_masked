
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidled_rgb {int blue; int green; int red; } ;


 int FUNC_0 (int *,char*,struct hidled_rgb*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hidled_rgb *VAR_0, unsigned int VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(&VAR_0->red, "red", VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_0(&VAR_0->green, "green", VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;


 return FUNC_0(&VAR_0->blue, "blue", VAR_0, VAR_1);
}
