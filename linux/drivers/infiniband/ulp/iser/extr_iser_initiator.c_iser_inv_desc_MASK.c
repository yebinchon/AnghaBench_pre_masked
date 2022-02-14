
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ mr_valid; TYPE_2__* sig_mr; TYPE_1__* mr; } ;
struct iser_fr_desc {TYPE_3__ rsc; scalar_t__ sig_protected; } ;
struct TYPE_5__ {scalar_t__ rkey; } ;
struct TYPE_4__ {scalar_t__ rkey; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(struct iser_fr_desc *VAR_1, u32 VAR_2)
{
 if (FUNC_1((!VAR_1->sig_protected && VAR_2 != VAR_1->rsc.mr->rkey) ||
       (VAR_1->sig_protected && VAR_2 != VAR_1->rsc.sig_mr->rkey))) {
  FUNC_0("Bogus remote invalidation for rkey %#x\n", VAR_2);
  return -VAR_0;
 }

 VAR_1->rsc.mr_valid = 0;

 return 0;
}
