
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {struct scatterlist* sgl; } ;
struct scatterlist {int offset; int length; } ;


 int VAR_0 ;
 struct scatterlist* FUNC_0 (int ) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*,int ,int ,int ) ;

struct scatterlist *
FUNC_4(struct sg_table *VAR_1, struct scatterlist *VAR_2)
{
 struct scatterlist *VAR_3 = VAR_1->sgl, *VAR_4 = ((void*)0);

 while (VAR_3) {
  if (!FUNC_2(VAR_3))
   break;
  VAR_3 = FUNC_1(VAR_3);
 }

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 while (VAR_2 && VAR_3) {
  FUNC_3(VAR_3, FUNC_2(VAR_2), VAR_2->length,
       VAR_2->offset);
  VAR_4 = VAR_3;
  VAR_3 = FUNC_1(VAR_3);
  VAR_2 = FUNC_1(VAR_2);
 }

 return VAR_4;
}
