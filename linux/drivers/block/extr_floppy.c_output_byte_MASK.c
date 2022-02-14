
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reset; } ;
struct TYPE_3__ {char data; int status; int jiffies; } ;


 int FUNC_0 (char*,char,int ,int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(char VAR_8)
{
 int VAR_9 = FUNC_4();

 if (VAR_9 < 0)
  return -1;

 if (FUNC_2(VAR_9)) {
  FUNC_1(VAR_8, VAR_1);
  VAR_6[VAR_7].data = VAR_8;
  VAR_6[VAR_7].status = VAR_9;
  VAR_6[VAR_7].jiffies = VAR_5;
  VAR_7 = (VAR_7 + 1) % VAR_2;
  return 0;
 }
 VAR_0->reset = 1;
 if (VAR_4) {
  FUNC_0("Unable to send byte %x to FDC. Fdc=%x Status=%x\n",
         VAR_8, VAR_3, VAR_9);
  FUNC_3();
 }
 return -1;
}
