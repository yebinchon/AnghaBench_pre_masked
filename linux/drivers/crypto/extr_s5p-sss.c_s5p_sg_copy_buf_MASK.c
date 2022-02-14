
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct scatter_walk {int dummy; } ;


 int FUNC_0 (void*,struct scatter_walk*,unsigned int,int) ;
 int FUNC_1 (struct scatter_walk*,int,int ) ;
 int FUNC_2 (struct scatter_walk*,struct scatterlist*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct scatterlist *VAR_1,
       unsigned int VAR_2, int VAR_3)
{
 struct scatter_walk VAR_4;

 if (!VAR_2)
  return;

 FUNC_2(&VAR_4, VAR_1);
 FUNC_0(VAR_0, &VAR_4, VAR_2, VAR_3);
 FUNC_1(&VAR_4, VAR_3, 0);
}
