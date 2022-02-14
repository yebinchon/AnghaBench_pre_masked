
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {scalar_t__ mode; TYPE_1__* ops; } ;
struct TYPE_2__ {unsigned long (* get_cached_segment_base ) (struct x86_emulate_ctxt*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (struct x86_emulate_ctxt*,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct x86_emulate_ctxt *VAR_2, int VAR_3)
{
 if (VAR_2->mode == VAR_1 && VAR_3 < VAR_0)
  return 0;

 return VAR_2->ops->get_cached_segment_base(VAR_2, VAR_3);
}
