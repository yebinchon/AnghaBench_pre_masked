
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct codegen_context {int seen; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(u32 *VAR_8, struct codegen_context *VAR_9)
{
 int VAR_10;

 if (VAR_9->seen & (VAR_4 | VAR_3)) {
  FUNC_0(1, 1, VAR_0);
  if (VAR_9->seen & VAR_3) {
   FUNC_2(0, 1, VAR_1);
   FUNC_3(0);
   FUNC_2(VAR_5, 1, -(VAR_2*(32-VAR_5)));
   FUNC_2(VAR_6, 1, -(VAR_2*(32-VAR_6)));
  }
  if (VAR_9->seen & VAR_4) {

   for (VAR_10 = VAR_7; VAR_10 < (VAR_7+16); VAR_10++) {
    if (VAR_9->seen & (1 << (VAR_10-VAR_7)))
     FUNC_2(VAR_10, 1, -(VAR_2*(32-VAR_10)));
   }
  }
 }


 FUNC_1();
}
