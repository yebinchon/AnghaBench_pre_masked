
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_0) == VAR_1) {
  VAR_0 &= ~0x80;

  VAR_6 = VAR_5->length >> (7 + VAR_4);
  VAR_7 = VAR_2 + VAR_6 - 1;
  if (VAR_7 > VAR_3) {
   FUNC_1("too many sectors %d > %d\n",
    VAR_7, VAR_3);
   return;
  }
  VAR_3 = VAR_7;


 }
}
