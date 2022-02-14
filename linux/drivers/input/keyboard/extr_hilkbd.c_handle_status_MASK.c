
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int curdev; scalar_t__ ptr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(unsigned char VAR_1, unsigned char VAR_2)
{
 if (VAR_2 & 0x8) {

  if (VAR_2 & 0x10)
   FUNC_0();
 } else {
  if (VAR_2 & 0x10) {
   if (VAR_0.curdev)
    FUNC_0();
   VAR_0.curdev = VAR_2 & 7;
   VAR_0.ptr = 0;
  }
 }
}
