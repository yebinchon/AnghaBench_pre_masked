
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int alignment; unsigned int multiple; unsigned int minimum; unsigned int maximum; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_2, unsigned int *VAR_3, bool VAR_4)
{
 if (!FUNC_0(VAR_2, VAR_1.alignment)) {
  FUNC_1("%s buffer 0x%lx not aligned to 0x%x\n",
    VAR_4 ? "input" : "output", VAR_2,
    VAR_1.alignment);
  return -VAR_0;
 }
 if (*VAR_3 % VAR_1.multiple) {
  FUNC_1("%s buffer len 0x%x not multiple of 0x%x\n",
    VAR_4 ? "input" : "output", *VAR_3,
    VAR_1.multiple);
  if (VAR_4)
   return -VAR_0;
  *VAR_3 = FUNC_2(*VAR_3, VAR_1.multiple);
 }
 if (*VAR_3 < VAR_1.minimum) {
  FUNC_1("%s buffer len 0x%x under minimum 0x%x\n",
    VAR_4 ? "input" : "output", *VAR_3,
    VAR_1.minimum);
  return -VAR_0;
 }
 if (*VAR_3 > VAR_1.maximum) {
  FUNC_1("%s buffer len 0x%x over maximum 0x%x\n",
    VAR_4 ? "input" : "output", *VAR_3,
    VAR_1.maximum);
  if (VAR_4)
   return -VAR_0;
  *VAR_3 = VAR_1.maximum;
 }
 return 0;
}
