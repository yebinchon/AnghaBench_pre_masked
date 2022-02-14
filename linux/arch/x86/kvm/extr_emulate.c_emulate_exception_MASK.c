
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vector; int error_code_valid; int error_code; } ;
struct x86_emulate_ctxt {TYPE_1__ exception; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_1, int VAR_2,
        u32 VAR_3, bool VAR_4)
{
 FUNC_0(VAR_2 > 0x1f);
 VAR_1->exception.vector = VAR_2;
 VAR_1->exception.error_code = VAR_3;
 VAR_1->exception.error_code_valid = VAR_4;
 return VAR_0;
}
