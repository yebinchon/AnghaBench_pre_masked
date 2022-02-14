
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*,int ,unsigned int) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static inline struct scatterlist *FUNC_3(struct scatterlist *VAR_0,
        struct scatterlist *VAR_1,
        int VAR_2)
{
 struct scatterlist *VAR_3 = VAR_0;
 unsigned int VAR_4;

 for (; VAR_2 && VAR_1; VAR_2 -= VAR_4) {
  VAR_4 = VAR_1->length;
  if (VAR_4 > VAR_2)
   VAR_4 = VAR_2;

  FUNC_1(VAR_3, FUNC_2(VAR_1), VAR_4);
  VAR_1 = FUNC_0(VAR_1);
  VAR_3++;
 }

 return VAR_3;
}
