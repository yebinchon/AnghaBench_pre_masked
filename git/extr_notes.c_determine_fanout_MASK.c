
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_node {int * a; } ;


 int FUNC_0 (int ) ;



__attribute__((used)) static unsigned char FUNC_1(struct int_node *VAR_0, unsigned char VAR_1,
  unsigned char VAR_2)
{
 unsigned int VAR_3;
 if ((VAR_1 % 2) || (VAR_1 > 2 * VAR_2))
  return VAR_2;
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  switch (FUNC_0(VAR_0->a[VAR_3])) {
  case 128:
  case 129:
   continue;
  default:
   return VAR_2;
  }
 }
 return VAR_2 + 1;
}
