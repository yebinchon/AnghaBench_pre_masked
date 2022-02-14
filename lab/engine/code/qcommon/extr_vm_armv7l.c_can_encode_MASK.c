
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned short FUNC_1(unsigned VAR_0)
{
 unsigned VAR_1 = 0;
 if (!VAR_0)
  FUNC_0("can_encode: invalid argument");
 if (VAR_0 < 256)
  return VAR_0;

 while (VAR_1 < 16 && (VAR_0>255 || !(VAR_0&3))) {
  VAR_0 = (VAR_0&3)<<30 | VAR_0>>2;
  ++VAR_1;
 }
 if (VAR_1 > 15 || VAR_0 > 255) {
  return 0;
 }
 return (16-VAR_1)<<8 | VAR_0;
}
