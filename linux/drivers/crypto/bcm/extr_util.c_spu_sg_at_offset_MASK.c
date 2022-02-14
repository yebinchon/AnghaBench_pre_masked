
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;


 int VAR_0 ;
 struct scatterlist* FUNC_0 (struct scatterlist*) ;

int FUNC_1(struct scatterlist *VAR_1, unsigned int VAR_2,
       struct scatterlist **VAR_3, unsigned int *VAR_4)
{

 unsigned int VAR_5 = 0;

 unsigned int VAR_6;

 VAR_6 = VAR_1->length;
 while (VAR_6 <= VAR_2) {
  VAR_1 = FUNC_0(VAR_1);
  VAR_5 = VAR_6;
  if (!VAR_1)
   return -VAR_0;
  VAR_6 += VAR_1->length;
 }

 *VAR_4 = VAR_2 - VAR_5;
 *VAR_3 = VAR_1;
 return 0;
}
