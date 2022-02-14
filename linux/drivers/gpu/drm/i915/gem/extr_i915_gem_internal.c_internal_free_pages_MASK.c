
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {struct scatterlist* sgl; } ;
struct scatterlist {int length; } ;


 int FUNC_0 (scalar_t__,int ) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sg_table*) ;
 int FUNC_4 (struct sg_table*) ;
 scalar_t__ FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_6(struct sg_table *VAR_0)
{
 struct scatterlist *VAR_1;

 for (VAR_1 = VAR_0->sgl; VAR_1; VAR_1 = FUNC_1(VAR_1)) {
  if (FUNC_5(VAR_1))
   FUNC_0(FUNC_5(VAR_1), FUNC_2(VAR_1->length));
 }

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
}
