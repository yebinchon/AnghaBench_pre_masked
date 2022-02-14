
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct caam_rng_ctx {int current_buf; struct buf_data* bufs; } ;
struct buf_data {int filled; int empty; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct caam_rng_ctx*,int) ;
 int FUNC_2 (struct caam_rng_ctx*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct caam_rng_ctx *VAR_1, int VAR_2)
{
 struct buf_data *VAR_3 = &VAR_1->bufs[VAR_2];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_0(&VAR_3->empty, VAR_0);
 FUNC_2(VAR_1, VAR_2 == VAR_1->current_buf);
 FUNC_3(&VAR_3->filled);

 return 0;
}
