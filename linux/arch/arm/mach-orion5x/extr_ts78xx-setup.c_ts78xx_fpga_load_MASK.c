
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 VAR_2.id = FUNC_1(VAR_1);

 FUNC_0("FPGA magic=0x%.6x, rev=0x%.2x\n",
   (VAR_2.id >> 8) & 0xffffff,
   VAR_2.id & 0xff);

 FUNC_3();

 if (FUNC_2()) {
  VAR_2.state = -1;
  return -VAR_0;
 }

 return 0;
}
