
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct msc_window {TYPE_1__* sgt; } ;
struct TYPE_2__ {struct scatterlist* sgl; } ;



__attribute__((used)) static inline struct scatterlist *FUNC_0(struct msc_window *VAR_0)
{
 return VAR_0->sgt->sgl;
}
