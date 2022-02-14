
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct codegen_context {int seen; int stack_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int FUNC_6 (int ) ;
 int * VAR_12 ;
 scalar_t__ FUNC_7 (struct codegen_context*) ;
 scalar_t__ FUNC_8 (struct codegen_context*,size_t) ;
 int FUNC_9 (struct codegen_context*,int ) ;

__attribute__((used)) static void FUNC_10(u32 *VAR_13, struct codegen_context *VAR_14)
{
 int VAR_15;






 if (VAR_14->seen & VAR_9) {
  FUNC_4(VAR_12[VAR_11], 0);

  FUNC_2(VAR_12[VAR_11], 1, -(VAR_1 + 8));
 } else {
  FUNC_5();
  FUNC_5();
 }



 if (FUNC_7(VAR_14)) {




  if (VAR_14->seen & VAR_8) {
   FUNC_0(VAR_5 | FUNC_6(VAR_7));
   FUNC_2(0, 1, VAR_6);
  }

  FUNC_3(1, 1, -(VAR_0 + VAR_14->stack_size));
 }






 for (VAR_15 = VAR_3; VAR_15 <= VAR_2; VAR_15++)
  if (FUNC_8(VAR_14, VAR_15))
   FUNC_2(VAR_12[VAR_15], 1, FUNC_9(VAR_14, VAR_12[VAR_15]));


 if (FUNC_8(VAR_14, VAR_4))
  FUNC_1(VAR_12[VAR_4], 1,
    VAR_10 + VAR_14->stack_size);
}
