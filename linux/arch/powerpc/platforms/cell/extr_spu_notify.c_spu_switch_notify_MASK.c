
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int object_id; } ;
struct spu {int dummy; } ;


 int FUNC_0 (int *,int ,struct spu*) ;
 int VAR_0 ;

void FUNC_1(struct spu *VAR_1, struct spu_context *VAR_2)
{
 FUNC_0(&VAR_0,
         VAR_2 ? VAR_2->object_id : 0, VAR_1);
}
