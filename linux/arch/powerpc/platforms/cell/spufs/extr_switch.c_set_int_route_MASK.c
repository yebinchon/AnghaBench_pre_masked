
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_state {int dummy; } ;
struct spu_context {int last_ran; } ;
struct spu {struct spu_context* ctx; } ;


 int FUNC_0 (struct spu*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct spu_state *VAR_0, struct spu *VAR_1)
{
 struct spu_context *VAR_2 = VAR_1->ctx;

 FUNC_0(VAR_1, VAR_2->last_ran);
}
