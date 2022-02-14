
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Panel ;
typedef int HandlerResult ;
typedef int CheckItem ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static HandlerResult FUNC_3(Panel* VAR_3, int VAR_4) {
   CheckItem* VAR_5 = (CheckItem*) FUNC_2(VAR_3);
   switch(VAR_4) {
   case 129:
   case 128:
   case ' ':
      FUNC_1(VAR_5, ! (FUNC_0(VAR_5)) );
      return VAR_1;
   case 0x0a:
   case 0x0d:
   case 130:
      return VAR_0;
   }
   return VAR_2;
}
