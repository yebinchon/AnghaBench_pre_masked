
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rect {int width; int height; } ;



__attribute__((used)) static bool FUNC_0(struct rect VAR_0, struct rect VAR_1)
{
 if (VAR_1.width >= VAR_0.width && VAR_1.width % VAR_0.width == 0 &&
  VAR_1.height >= VAR_0.height && VAR_1.height % VAR_0.height == 0)
  return 1;

 return 0;
}
