
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

void
FUNC_2(void)
{
 uint64_t VAR_8;

 if ((VAR_4 & VAR_1) != 0) {
  if (VAR_7) {
   VAR_8 = FUNC_0(VAR_3);
   VAR_8 &= ~(uint64_t)VAR_2;
   FUNC_1(VAR_3, VAR_8);
  } else {
   VAR_8 = FUNC_0(VAR_3);
   VAR_8 |= VAR_2;
   FUNC_1(VAR_3, VAR_8);
  }
  return;
 }
 VAR_6 = (VAR_5 & VAR_0) != 0 &&
     !VAR_7;
}
