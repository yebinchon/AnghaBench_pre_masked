
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;
 scalar_t__ FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_6(struct scatterlist *VAR_0)
{
 while (VAR_0) {
  struct scatterlist *VAR_1;

  for (VAR_1 = VAR_0; !FUNC_3(VAR_1); VAR_1++) {
   FUNC_1(FUNC_5(VAR_1));
   if (FUNC_4(VAR_1))
    break;
  }

  VAR_1 = FUNC_4(VAR_1) ? ((void*)0) : FUNC_2(VAR_1);
  FUNC_0((unsigned long)VAR_0);
  VAR_0 = VAR_1;
 }
}
