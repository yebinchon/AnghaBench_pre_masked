
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct caam_rng_ctx {scalar_t__ cur_buf_idx; scalar_t__ current_buf; struct device* jrdev; } ;


 int FUNC_0 (struct caam_rng_ctx*,int) ;
 int FUNC_1 (struct caam_rng_ctx*) ;

__attribute__((used)) static int FUNC_2(struct caam_rng_ctx *VAR_0, struct device *VAR_1)
{
 int VAR_2;

 VAR_0->jrdev = VAR_1;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_0->current_buf = 0;
 VAR_0->cur_buf_idx = 0;

 VAR_2 = FUNC_0(VAR_0, 0);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, 1);
}
