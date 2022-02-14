
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct spu_context {struct spu* spu; } ;
struct spu {int register_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu*) ;
 int FUNC_3 (struct spu*,int) ;

__attribute__((used)) static void FUNC_4(struct spu_context *VAR_1)
{
 struct spu *VAR_2 = VAR_1->spu;
 u64 VAR_3;

 FUNC_0(&VAR_2->register_lock);
 VAR_3 = FUNC_2(VAR_2) | VAR_0;
 FUNC_3(VAR_2, VAR_3);
 FUNC_1(&VAR_2->register_lock);
}
