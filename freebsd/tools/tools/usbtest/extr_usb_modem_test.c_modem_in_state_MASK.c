
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {char in_last; int in_synced; int errors; int c1; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint8_t VAR_1, uint32_t VAR_2)
{
 if ((VAR_0.in_last == 'O') && (VAR_1 == 'K')) {
  VAR_0.c1++;
  VAR_0.in_last = VAR_1;
 } else if (VAR_1 == VAR_0.in_last) {
  VAR_0.c1++;
  VAR_0.in_last++;
  VAR_0.in_last %= 255;
  if (VAR_0.in_synced == 0) {
   if (VAR_0.errors < 64) {
    FUNC_0("Got sync\n");
   }
   VAR_0.in_synced = 1;
  }
 } else {
  if (VAR_0.in_synced) {
   if (VAR_0.errors < 64) {
    FUNC_0("Lost sync @ %d, 0x%02x != 0x%02x\n",
        VAR_2 % 512, VAR_1, VAR_0.in_last);
   }
   VAR_0.in_synced = 0;
   VAR_0.errors++;
  }
  VAR_0.in_last = VAR_1;
  VAR_0.in_last++;
  VAR_0.in_last %= 255;
 }
}
