
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x86_emulate_ctxt {scalar_t__ rex_prefix; } ;


 void* FUNC_0 (struct x86_emulate_ctxt*,int) ;

__attribute__((used)) static void *FUNC_1(struct x86_emulate_ctxt *VAR_0, u8 VAR_1,
        int VAR_2)
{
 void *VAR_3;
 int VAR_4 = (VAR_0->rex_prefix == 0) && VAR_2;

 if (VAR_4 && VAR_1 >= 4 && VAR_1 < 8)
  VAR_3 = (unsigned char *)FUNC_0(VAR_0, VAR_1 & 3) + 1;
 else
  VAR_3 = FUNC_0(VAR_0, VAR_1);
 return VAR_3;
}
