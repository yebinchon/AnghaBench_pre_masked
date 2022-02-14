
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; int xfer_bytes; int * buffer; } ;
struct nmk_i2c_dev {TYPE_1__ cli; scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nmk_i2c_dev *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = (VAR_2 - 2);
   (VAR_3 > 0) &&
   (VAR_1->cli.count != 0);
   VAR_3--) {

  FUNC_0(*VAR_1->cli.buffer,
   VAR_1->virtbase + VAR_0);
  VAR_1->cli.buffer++;
  VAR_1->cli.count--;
  VAR_1->cli.xfer_bytes++;
 }

}
