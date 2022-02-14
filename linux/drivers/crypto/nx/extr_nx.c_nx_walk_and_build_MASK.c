
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;
struct scatter_walk {struct scatterlist* sg; } ;
struct nx_sg {int dummy; } ;


 int VAR_0 ;
 struct nx_sg* FUNC_0 (struct nx_sg*,char*,unsigned int*,unsigned int) ;
 int FUNC_1 (struct scatter_walk*,unsigned int) ;
 unsigned int FUNC_2 (struct scatter_walk*,unsigned int) ;
 int FUNC_3 (struct scatter_walk*,int ,unsigned int) ;
 char* FUNC_4 (struct scatter_walk*) ;
 int FUNC_5 (struct scatter_walk*,struct scatterlist*) ;
 int FUNC_6 (char*) ;
 struct scatterlist* FUNC_7 (struct scatterlist*) ;

struct nx_sg *FUNC_8(struct nx_sg *VAR_1,
    unsigned int VAR_2,
    struct scatterlist *VAR_3,
    unsigned int VAR_4,
    unsigned int *VAR_5)
{
 struct scatter_walk VAR_6;
 struct nx_sg *VAR_7 = VAR_1;
 unsigned int VAR_8, VAR_9 = 0, VAR_10 = *VAR_5;
 char *VAR_11;


 for (;;) {
  FUNC_5(&VAR_6, VAR_3);

  if (VAR_4 < VAR_9 + VAR_3->length)
   break;

  VAR_9 += VAR_3->length;
  VAR_3 = FUNC_7(VAR_3);
 }



 FUNC_1(&VAR_6, VAR_4 - VAR_9);

 while (VAR_10 && (VAR_7 - VAR_1) < VAR_2) {
  VAR_8 = FUNC_2(&VAR_6, VAR_10);
  if (!VAR_8) {


   FUNC_5(&VAR_6, FUNC_7(VAR_6.sg));
   VAR_8 = FUNC_2(&VAR_6, VAR_10);
  }
  VAR_11 = FUNC_4(&VAR_6);

  VAR_7 = FUNC_0(VAR_7, VAR_11, &VAR_8, VAR_2 - (VAR_7 - VAR_1));
  VAR_10 -= VAR_8;

  FUNC_6(VAR_11);
  FUNC_1(&VAR_6, VAR_8);
  FUNC_3(&VAR_6, VAR_0, VAR_10);
 }

 *VAR_5 -= VAR_10;


 return VAR_7;
}
