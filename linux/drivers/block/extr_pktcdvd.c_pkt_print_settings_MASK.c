
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int block_mode; scalar_t__ fp; } ;
struct pktcdvd_device {TYPE_1__ settings; } ;


 int FUNC_0 (struct pktcdvd_device*,char*,char*,int,char) ;

__attribute__((used)) static void FUNC_1(struct pktcdvd_device *VAR_0)
{
 FUNC_0(VAR_0, "%s packets, %u blocks, Mode-%c disc\n",
   VAR_0->settings.fp ? "Fixed" : "Variable",
   VAR_0->settings.size >> 2,
   VAR_0->settings.block_mode == 8 ? '1' : '2');
}
