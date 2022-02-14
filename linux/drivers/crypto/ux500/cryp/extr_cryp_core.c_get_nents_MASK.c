
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_1(struct scatterlist *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 while (VAR_1 > 0) {
  VAR_1 -= VAR_0->length;
  VAR_0 = FUNC_0(VAR_0);
  VAR_2++;
 }

 return VAR_2;
}
