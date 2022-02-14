
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vop_reg {int dummy; } ;
struct vop {TYPE_1__* data; } ;
struct TYPE_4__ {size_t nintrs; int* intrs; } ;
struct TYPE_3__ {TYPE_2__* intr; } ;


 size_t FUNC_0 (struct vop*,int ,struct vop_reg const*) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct vop *VAR_0,
      const struct vop_reg *VAR_1, int VAR_2)
{
 uint32_t VAR_3, VAR_4 = 0;
 uint32_t VAR_5 = FUNC_0(VAR_0, 0, VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0->data->intr->nintrs; VAR_3++) {
  if ((VAR_2 & VAR_0->data->intr->intrs[VAR_3]) && (VAR_5 & 1 << VAR_3))
   VAR_4 |= VAR_0->data->intr->intrs[VAR_3];
 }

 return VAR_4;
}
