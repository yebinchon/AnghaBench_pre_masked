
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct scatterlist *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2,
    unsigned int VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;

 while (VAR_0 && VAR_3) {
  if (FUNC_2(VAR_0) <= VAR_3) {
   VAR_3 -= FUNC_2(VAR_0);
   VAR_6 = 0;
   VAR_0 = FUNC_3(VAR_0);
  } else {
   VAR_6 = VAR_3;
   VAR_3 = 0;
  }
 }

 while (VAR_0 && VAR_1) {
  VAR_5 = FUNC_1(VAR_1, FUNC_2(VAR_0) - VAR_6);
  VAR_4 += FUNC_0(VAR_5, VAR_2);
  VAR_1 -= VAR_5;
  VAR_6 = 0;
  VAR_0 = FUNC_3(VAR_0);
 }
 return VAR_4;
}
