
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(void)
{

 FUNC_2("Usage: %s [-c period] [-EefmVxXz] channel-number num-txns [<bufsize> "
     "[<chain-len> [duration]]]\n", FUNC_1());
 FUNC_2("       %s -r [-c period] [-vVwz] channel-number address [<bufsize>]\n\n",
     FUNC_1());
 FUNC_2("           -c period - Enable interrupt coalescing (us) (default: 0)\n");
 FUNC_2("           -E        - Test contiguous 8k copy.\n");
 FUNC_2("           -e        - Test non-contiguous 8k copy.\n");
 FUNC_2("           -f        - Test block fill.\n");
 FUNC_2("           -m        - Test memcpy instead of DMA.\n");
 FUNC_2("           -r        - Issue DMA to or from a specific address.\n");
 FUNC_2("           -V        - Enable verification\n");
 FUNC_2("           -v        - <address> is a kernel virtual address\n");
 FUNC_2("           -w        - Write to the specified address\n");
 FUNC_2("           -x        - Test DMA CRC.\n");
 FUNC_2("           -X        - Test DMA CRC copy.\n");
 FUNC_2("           -z        - Zero device stats before test\n");
 FUNC_0(VAR_0);
}
