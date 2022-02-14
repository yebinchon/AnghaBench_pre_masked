
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int id; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_2.id != VAR_3) {
  FUNC_0("FPGA magic/rev mismatch\n"
   "TS-78xx FPGA: was 0x%.6x/%.2x but now 0x%.6x/%.2x\n",
   (VAR_2.id >> 8) & 0xffffff, VAR_2.id & 0xff,
   (VAR_3 >> 8) & 0xffffff, VAR_3 & 0xff);
  VAR_2.state = -1;
  return -VAR_0;
 }

 if (FUNC_2()) {
  VAR_2.state = -1;
  return -VAR_0;
 }

 return 0;
}
