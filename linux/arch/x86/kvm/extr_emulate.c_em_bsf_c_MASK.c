
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ val; } ;
struct x86_emulate_ctxt {TYPE_2__ dst; TYPE_1__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct x86_emulate_ctxt*,int ) ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_2)
{

 if (VAR_2->src.val == 0)
  VAR_2->dst.type = VAR_0;
 return FUNC_0(VAR_2, VAR_1);
}
