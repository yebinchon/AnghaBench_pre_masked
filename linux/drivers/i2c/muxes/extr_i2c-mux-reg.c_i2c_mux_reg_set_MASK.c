
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_size; int reg; int write_only; int little_endian; } ;
struct regmux {TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(const struct regmux *VAR_1, unsigned int VAR_2)
{
 if (!VAR_1->data.reg)
  return -VAR_0;







 switch (VAR_1->data.reg_size) {
 case 4:
  if (VAR_1->data.little_endian)
   FUNC_5(VAR_2, VAR_1->data.reg);
  else
   FUNC_6(VAR_2, VAR_1->data.reg);
  if (!VAR_1->data.write_only)
   FUNC_1(VAR_1->data.reg);
  break;
 case 2:
  if (VAR_1->data.little_endian)
   FUNC_3(VAR_2, VAR_1->data.reg);
  else
   FUNC_4(VAR_2, VAR_1->data.reg);
  if (!VAR_1->data.write_only)
   FUNC_0(VAR_1->data.reg);
  break;
 case 1:
  FUNC_7(VAR_2, VAR_1->data.reg);
  if (!VAR_1->data.write_only)
   FUNC_2(VAR_1->data.reg);
  break;
 }

 return 0;
}
