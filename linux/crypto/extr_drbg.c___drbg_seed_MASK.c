
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct drbg_state {int seeded; int reseed_ctr; TYPE_1__* d_ops; } ;
struct TYPE_2__ {int (* update ) (struct drbg_state*,struct list_head*,int) ;} ;


 int FUNC_0 (struct drbg_state*,struct list_head*,int) ;

__attribute__((used)) static inline int FUNC_1(struct drbg_state *VAR_0, struct list_head *VAR_1,
         int VAR_2)
{
 int VAR_3 = VAR_0->d_ops->update(VAR_0, VAR_1, VAR_2);

 if (VAR_3)
  return VAR_3;

 VAR_0->seeded = 1;

 VAR_0->reseed_ctr = 1;

 return VAR_3;
}
