
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct caam_rng_ctx {int current_buf; struct device* jrdev; struct buf_data* bufs; } ;
struct buf_data {int empty; int filled; int * hw_desc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int *,int ,struct caam_rng_ctx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_5(struct caam_rng_ctx *VAR_1, int VAR_2)
{
 struct buf_data *VAR_3 = &VAR_1->bufs[!(VAR_2 ^ VAR_1->current_buf)];
 struct device *VAR_4 = VAR_1->jrdev;
 u32 *VAR_5 = VAR_3->hw_desc;
 int VAR_6;

 FUNC_3(VAR_4, "submitting job %d\n", !(VAR_2 ^ VAR_1->current_buf));
 FUNC_4(&VAR_3->filled);
 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_0, VAR_1);
 if (VAR_6)
  FUNC_2(&VAR_3->filled);
 else
  FUNC_0(&VAR_3->empty);

 return VAR_6;
}
