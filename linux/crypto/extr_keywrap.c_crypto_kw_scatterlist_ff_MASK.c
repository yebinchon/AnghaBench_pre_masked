
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;
struct scatter_walk {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct scatter_walk*,unsigned int) ;
 int FUNC_2 (struct scatter_walk*,struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(struct scatter_walk *VAR_1,
         struct scatterlist *VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;


 FUNC_0(VAR_3 < VAR_0);

 VAR_4 = VAR_3 - VAR_0;
 while (VAR_2) {
  if (VAR_2->length > VAR_4) {
   FUNC_2(VAR_1, VAR_2);
   FUNC_1(VAR_1, VAR_4);
   break;
  } else
   VAR_4 -= VAR_2->length;

  VAR_2 = FUNC_3(VAR_2);
 }
}
