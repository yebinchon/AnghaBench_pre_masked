
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long long crc32_off; int total_incorrect_crc32_logevents; } ;
typedef TYPE_1__ file_t ;
struct TYPE_6__ {int incorrect_logevents; long long* last_incorrect_off; int found; } ;
typedef TYPE_2__ crc32_stat_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (file_t *VAR_0, crc32_stat_t *VAR_1) {
  VAR_0->total_incorrect_crc32_logevents++;
  VAR_1->incorrect_logevents++;
  int VAR_2 = VAR_1->incorrect_logevents & 3;
  VAR_1->last_incorrect_off[VAR_2] = VAR_0->crc32_off;
  if (VAR_1->incorrect_logevents >= 3) {
    long long VAR_3 = VAR_1->last_incorrect_off[VAR_2] - VAR_1->last_incorrect_off[(VAR_2+2)&3];
    FUNC_0 (VAR_3 >= 0);
    VAR_1->found = VAR_3 <= 0x20000;
  }
}
