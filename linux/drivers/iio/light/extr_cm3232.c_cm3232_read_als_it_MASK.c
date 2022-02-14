
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct cm3232_chip {int regs_cmd; } ;
struct TYPE_3__ {int it; int val; int val2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct cm3232_chip *VAR_5, int *VAR_6, int *VAR_7)
{
 u16 VAR_8;
 int VAR_9;

 VAR_8 = VAR_5->regs_cmd;
 VAR_8 &= VAR_0;
 VAR_8 >>= VAR_1;
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  if (VAR_8 == VAR_4[VAR_9].it) {
   *VAR_6 = VAR_4[VAR_9].val;
   *VAR_7 = VAR_4[VAR_9].val2;
   return VAR_3;
  }
 }

 return -VAR_2;
}
