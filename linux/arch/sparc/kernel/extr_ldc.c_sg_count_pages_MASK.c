
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_1(struct scatterlist *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  int VAR_4 = FUNC_0(VAR_0 + VAR_3);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_2 += VAR_4;
 }

 return VAR_2;
}
