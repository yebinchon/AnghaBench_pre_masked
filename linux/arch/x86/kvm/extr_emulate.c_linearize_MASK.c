
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct x86_emulate_ctxt {int mode; } ;
struct segmented_address {int dummy; } ;


 int FUNC_0 (struct x86_emulate_ctxt*,struct segmented_address,unsigned int*,unsigned int,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_0,
       struct segmented_address VAR_1,
       unsigned VAR_2, bool VAR_3,
       ulong *VAR_4)
{
 unsigned VAR_5;
 return FUNC_0(VAR_0, VAR_1, &VAR_5, VAR_2, VAR_3, 0,
      VAR_0->mode, VAR_4);
}
