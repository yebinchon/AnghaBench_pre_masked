
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct x86_emulate_ctxt {TYPE_1__* ops; } ;
struct desc_struct {int dummy; } ;
struct TYPE_2__ {int (* get_segment ) (struct x86_emulate_ctxt*,int *,struct desc_struct*,int *,unsigned int) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*,int *,struct desc_struct*,int *,unsigned int) ;

__attribute__((used)) static u16 FUNC_1(struct x86_emulate_ctxt *VAR_0, unsigned VAR_1)
{
 u16 VAR_2;
 struct desc_struct VAR_3;

 VAR_0->ops->get_segment(VAR_0, &VAR_2, &VAR_3, ((void*)0), VAR_1);
 return VAR_2;
}
