
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int FUNC_0 (struct scatterlist*,int,struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*,void*,size_t) ;

__attribute__((used)) static void FUNC_3(struct scatterlist *VAR_0, void *VAR_1, size_t VAR_2,
  struct scatterlist *VAR_3)
{
 int VAR_4 = VAR_3 ? 2 : 1;

 FUNC_1(VAR_0, VAR_4);
 FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_3)
  FUNC_0(VAR_0, VAR_4, VAR_3);
}
