
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_adpll_data {scalar_t__ iobase; scalar_t__ regs; TYPE_1__* c; } ;
struct TYPE_2__ {scalar_t__ is_type_s; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ti_adpll_data *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->c->is_type_s) {
  VAR_3 = 8;
  FUNC_0(VAR_2->iobase + VAR_0);
 }

 VAR_2->regs = VAR_2->iobase + VAR_3 + VAR_1;

 return 0;
}
