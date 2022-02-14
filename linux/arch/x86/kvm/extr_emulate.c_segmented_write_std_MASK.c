
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct x86_emulate_ctxt {int exception; TYPE_1__* ops; } ;
struct segmented_address {int dummy; } ;
struct TYPE_2__ {int (* write_std ) (struct x86_emulate_ctxt*,int ,void*,unsigned int,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct x86_emulate_ctxt*,struct segmented_address,unsigned int,int,int *) ;
 int FUNC_1 (struct x86_emulate_ctxt*,int ,void*,unsigned int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct x86_emulate_ctxt *VAR_1,
          struct segmented_address VAR_2,
          void *VAR_3,
          unsigned int VAR_4)
{
 int VAR_5;
 ulong VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4, 1, &VAR_6);
 if (VAR_5 != VAR_0)
  return VAR_5;
 return VAR_1->ops->write_std(VAR_1, VAR_6, VAR_3, VAR_4, &VAR_1->exception, 0);
}
