
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(unsigned long VAR_0)
{
 int VAR_1;

 VAR_1 = (VAR_0 - 0x800) >> 4;
 if (VAR_1 == 52) {

  VAR_1 = 72;
 }


 VAR_1 -= ((VAR_1 + 16) >> 2) & 0x38;

 FUNC_0(VAR_1);
}
