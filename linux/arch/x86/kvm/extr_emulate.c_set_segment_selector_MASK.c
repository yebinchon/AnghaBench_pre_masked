
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct x86_emulate_ctxt {TYPE_1__* ops; } ;
struct desc_struct {int dummy; } ;
struct TYPE_2__ {int (* set_segment ) (struct x86_emulate_ctxt*,int ,struct desc_struct*,int ,unsigned int) ;int (* get_segment ) (struct x86_emulate_ctxt*,int *,struct desc_struct*,int *,unsigned int) ;} ;


 int FUNC_0 (struct x86_emulate_ctxt*,int *,struct desc_struct*,int *,unsigned int) ;
 int FUNC_1 (struct x86_emulate_ctxt*,int ,struct desc_struct*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct x86_emulate_ctxt *VAR_0, u16 VAR_1,
     unsigned VAR_2)
{
 u16 VAR_3;
 u32 VAR_4;
 struct desc_struct VAR_5;

 VAR_0->ops->get_segment(VAR_0, &VAR_3, &VAR_5, &VAR_4, VAR_2);
 VAR_0->ops->set_segment(VAR_0, VAR_1, &VAR_5, VAR_4, VAR_2);
}
