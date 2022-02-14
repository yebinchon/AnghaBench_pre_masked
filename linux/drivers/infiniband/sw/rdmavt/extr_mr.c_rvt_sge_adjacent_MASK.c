
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct rvt_sge {scalar_t__ vaddr; scalar_t__ length; int sge_length; TYPE_1__* mr; } ;
struct ib_sge {scalar_t__ lkey; scalar_t__ addr; scalar_t__ length; } ;
struct TYPE_2__ {scalar_t__ lkey; scalar_t__ user_base; scalar_t__ length; } ;


 int FUNC_0 (struct rvt_sge*,struct ib_sge*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline bool FUNC_2(struct rvt_sge *VAR_0,
        struct ib_sge *VAR_1)
{
 if (VAR_0 && VAR_1->lkey == VAR_0->mr->lkey &&
     ((uint64_t)(VAR_0->vaddr + VAR_0->length) == VAR_1->addr)) {
  if (VAR_1->lkey) {
   if (FUNC_1((VAR_1->addr - VAR_0->mr->user_base +
         VAR_1->length > VAR_0->mr->length)))
    return 0;
  } else {
   VAR_0->length += VAR_1->length;
  }
  VAR_0->sge_length += VAR_1->length;
  FUNC_0(VAR_0, VAR_1);
  return 1;
 }
 return 0;
}
