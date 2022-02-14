
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct scatter_walk {int dummy; } ;


 int FUNC_0 (struct scatter_walk*,unsigned int) ;
 int FUNC_1 (void*,struct scatter_walk*,unsigned int,int) ;
 int FUNC_2 (struct scatter_walk*,int,int ) ;
 int FUNC_3 (struct scatter_walk*,struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, struct scatterlist *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct scatter_walk VAR_5;

 if (!VAR_3)
  return;

 FUNC_3(&VAR_5, VAR_1);
 FUNC_0(&VAR_5, VAR_2);
 FUNC_1(VAR_0, &VAR_5, VAR_3, VAR_4);
 FUNC_2(&VAR_5, VAR_4, 0);
}
