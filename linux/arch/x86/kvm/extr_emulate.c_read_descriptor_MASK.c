
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;
struct x86_emulate_ctxt {int dummy; } ;
struct segmented_address {int ea; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86_emulate_ctxt*,struct segmented_address,unsigned long*,int) ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_1,
      struct segmented_address VAR_2,
      u16 *VAR_3, unsigned long *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5 == 2)
  VAR_5 = 3;
 *VAR_4 = 0;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, 2);
 if (VAR_6 != VAR_0)
  return VAR_6;
 VAR_2.ea += 2;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);
 return VAR_6;
}
