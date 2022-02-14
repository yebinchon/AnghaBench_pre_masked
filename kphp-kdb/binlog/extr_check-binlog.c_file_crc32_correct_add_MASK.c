
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int crc32_off; int total_correct_crc32_logevents; } ;
typedef TYPE_1__ file_t ;
struct TYPE_8__ {int last_correct_off; } ;
typedef TYPE_2__ crc32_stat_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1 (file_t *VAR_0, crc32_stat_t *VAR_1) {
  FUNC_0 (VAR_0, VAR_1);
  VAR_0->total_correct_crc32_logevents++;
  VAR_1->last_correct_off = VAR_0->crc32_off;
}
