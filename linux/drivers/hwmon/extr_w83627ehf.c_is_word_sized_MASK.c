
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static int FUNC_0(u16 VAR_0)
{
 return ((((VAR_0 & 0xff00) == 0x100
       || (VAR_0 & 0xff00) == 0x200)
      && ((VAR_0 & 0x00ff) == 0x50
       || (VAR_0 & 0x00ff) == 0x53
       || (VAR_0 & 0x00ff) == 0x55))
      || (VAR_0 & 0xfff0) == 0x630
      || VAR_0 == 0x640 || VAR_0 == 0x642
      || ((VAR_0 & 0xfff0) == 0x650
   && (VAR_0 & 0x000f) >= 0x06)
      || VAR_0 == 0x73 || VAR_0 == 0x75 || VAR_0 == 0x77
  );
}
