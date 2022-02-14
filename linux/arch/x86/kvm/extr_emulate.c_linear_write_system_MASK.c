
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct x86_emulate_ctxt {int exception; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_std ) (struct x86_emulate_ctxt*,int ,void*,unsigned int,int *,int) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*,int ,void*,unsigned int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_0,
          ulong VAR_1, void *VAR_2,
          unsigned int VAR_3)
{
 return VAR_0->ops->write_std(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_0->exception, 1);
}
