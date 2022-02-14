
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 scalar_t__ FUNC_1 (struct scatterlist*,unsigned int,struct scatterlist**,unsigned int*) ;

int FUNC_2(struct scatterlist *VAR_0, unsigned int VAR_1, int VAR_2)
{
 struct scatterlist *VAR_3;
 int VAR_4 = 0;
 unsigned int VAR_5;

 if (!VAR_0)
  return 0;

 if (FUNC_1(VAR_0, VAR_1, &VAR_3, &VAR_5) < 0)
  return 0;

 while (VAR_3 && (VAR_2 > 0)) {
  VAR_4++;
  VAR_2 -= (VAR_3->length - VAR_5);
  VAR_5 = 0;
  VAR_3 = FUNC_0(VAR_3);
 }
 return VAR_4;
}
