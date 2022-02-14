
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long ulong ;
typedef int u16 ;
struct x86_emulate_ctxt {scalar_t__ mode; TYPE_1__* ops; } ;
struct desc_struct {int d; } ;
struct TYPE_2__ {int (* get_segment ) (struct x86_emulate_ctxt*,int *,struct desc_struct*,int *,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct x86_emulate_ctxt*,int *,struct desc_struct*,int *,int ) ;

__attribute__((used)) static ulong FUNC_1(struct x86_emulate_ctxt *VAR_2)
{
 u16 VAR_3;
 struct desc_struct VAR_4;

 if (VAR_2->mode == VAR_1)
  return ~0UL;
 VAR_2->ops->get_segment(VAR_2, &VAR_3, &VAR_4, ((void*)0), VAR_0);
 return ~0U >> ((VAR_4.d ^ 1) * 16);
}
