
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; scalar_t__ offset; } ;


 int FUNC_0 (struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_1 (struct scatterlist*,int) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*,int ,unsigned int,scalar_t__) ;

struct scatterlist *FUNC_5(struct scatterlist VAR_0[2],
         struct scatterlist *VAR_1,
         unsigned int VAR_2)
{
 for (;;) {
  if (!VAR_2)
   return VAR_1;

  if (VAR_1->length > VAR_2)
   break;

  VAR_2 -= VAR_1->length;
  VAR_1 = FUNC_2(VAR_1);
 }

 FUNC_1(VAR_0, 2);
 FUNC_4(VAR_0, FUNC_3(VAR_1), VAR_1->length - VAR_2, VAR_1->offset + VAR_2);
 FUNC_0(VAR_0, FUNC_2(VAR_1), 2);

 return VAR_0;
}
