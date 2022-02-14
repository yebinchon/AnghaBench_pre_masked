
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {size_t length; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (void*,struct scatterlist*,size_t,size_t,int) ;
 struct scatterlist* FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_3(struct scatterlist **VAR_0, size_t *VAR_1,
   void *VAR_2, size_t VAR_3, size_t VAR_4, int VAR_5)
{
 size_t VAR_6, VAR_7 = 0;

 while (VAR_3 && VAR_4) {
  VAR_6 = FUNC_0((*VAR_0)->length - *VAR_1, VAR_4);
  VAR_6 = FUNC_0(VAR_6, VAR_3);

  if (!VAR_6)
   return VAR_7;

  FUNC_1(VAR_2 + VAR_7, *VAR_0, *VAR_1, VAR_6, VAR_5);

  VAR_7 += VAR_6;
  VAR_3 -= VAR_6;
  *VAR_1 += VAR_6;
  VAR_4 -= VAR_6;

  if (*VAR_1 == (*VAR_0)->length) {
   *VAR_0 = FUNC_2(*VAR_0);
   if (*VAR_0)
    *VAR_1 = 0;
   else
    VAR_4 = 0;
  }
 }

 return VAR_7;
}
