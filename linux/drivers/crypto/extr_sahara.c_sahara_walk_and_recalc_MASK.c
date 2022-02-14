
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;


 int FUNC_0 (struct scatterlist*) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_2(struct scatterlist *VAR_0, unsigned int VAR_1)
{
 if (!VAR_0 || !VAR_0->length)
  return VAR_1;

 while (VAR_1 && VAR_0) {
  if (VAR_1 <= VAR_0->length) {
   VAR_0->length = VAR_1;
   FUNC_0(VAR_0);
   break;
  }
  VAR_1 -= VAR_0->length;
  VAR_0 = FUNC_1(VAR_0);
 }

 return VAR_1;
}
