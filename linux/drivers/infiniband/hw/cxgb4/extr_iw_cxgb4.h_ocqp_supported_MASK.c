
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxgb4_lld_info {TYPE_2__* vr; } ;
struct TYPE_3__ {scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__ ocq; } ;



__attribute__((used)) static inline int FUNC_0(const struct cxgb4_lld_info *VAR_0)
{

 return VAR_0->vr->ocq.size > 0;



}
