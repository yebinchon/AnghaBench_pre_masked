
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct codegen_context {int seen; scalar_t__ stack_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_3 (struct codegen_context*) ;
 scalar_t__ FUNC_4 (struct codegen_context*,int) ;
 int FUNC_5 (struct codegen_context*,int ) ;

__attribute__((used)) static void FUNC_6(u32 *VAR_6, struct codegen_context *VAR_7)
{
 int VAR_8;


 for (VAR_8 = VAR_2; VAR_8 <= VAR_1; VAR_8++)
  if (FUNC_4(VAR_7, VAR_8))
   FUNC_1(VAR_5[VAR_8], 1, FUNC_5(VAR_7, VAR_5[VAR_8]));


 if (FUNC_3(VAR_7)) {
  FUNC_0(1, 1, VAR_0 + VAR_7->stack_size);
  if (VAR_7->seen & VAR_4) {
   FUNC_1(0, 1, VAR_3);
   FUNC_2(0);
  }
 }
}
