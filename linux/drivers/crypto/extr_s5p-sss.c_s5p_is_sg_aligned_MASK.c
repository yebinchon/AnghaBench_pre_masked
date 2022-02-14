
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static bool FUNC_2(struct scatterlist *VAR_1)
{
 while (VAR_1) {
  if (!FUNC_0(VAR_1->length, VAR_0))
   return 0;
  VAR_1 = FUNC_1(VAR_1);
 }

 return 1;
}
