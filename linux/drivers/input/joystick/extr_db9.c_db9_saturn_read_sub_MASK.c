
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*) ;

__attribute__((used)) static unsigned char FUNC_2(struct parport *VAR_0, int VAR_1)
{
 unsigned char VAR_2;

 if (VAR_1) {

  VAR_2 = FUNC_1(VAR_0) ^ 0x80;
  return (VAR_2 & 0x80 ? 1 : 0) | (VAR_2 & 0x40 ? 2 : 0)
       | (VAR_2 & 0x20 ? 4 : 0) | (VAR_2 & 0x10 ? 8 : 0);
 } else {

  VAR_2 = FUNC_0(VAR_0) & 0x0f;
  return (VAR_2 & 0x8 ? 1 : 0) | (VAR_2 & 0x4 ? 2 : 0)
       | (VAR_2 & 0x2 ? 4 : 0) | (VAR_2 & 0x1 ? 8 : 0);
 }
}
