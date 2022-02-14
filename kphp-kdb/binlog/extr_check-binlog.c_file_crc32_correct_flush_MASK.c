
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* F; } ;
struct TYPE_11__ {long long crc32_off; scalar_t__ start_log_pos; TYPE_3__ S; } ;
typedef TYPE_4__ file_t ;
struct TYPE_12__ {int last_correct_off; int incorrect_logevents; int last_incorrect_off; scalar_t__ found; } ;
typedef TYPE_5__ crc32_stat_t ;
struct TYPE_9__ {TYPE_1__* info; } ;
struct TYPE_8__ {int filename; } ;


 int FUNC_0 (char*,int,int ,long long const,long long const,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int,int ,long long const,long long const,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3 (file_t *VAR_1, crc32_stat_t *VAR_2) {
  if (VAR_0) {
    return;
  }
  const long long VAR_3 = VAR_2->last_correct_off + 20, VAR_4 = VAR_1->crc32_off;
  if (VAR_4 - VAR_3 >= 0x20000) {
    if (VAR_2->incorrect_logevents <= 1) {
      FUNC_1 ("%lld incorrect and 0 correct LEV_CRC32 in the file '%s', file off [%lld, %lld), log pos [%lld, %lld)", VAR_2->incorrect_logevents, VAR_1->S.F->info->filename, VAR_3, VAR_4, VAR_1->start_log_pos + VAR_3, VAR_1->start_log_pos + VAR_4);
    }
    if (VAR_2->incorrect_logevents >= 3 && VAR_2->found) {
      FUNC_0 ("%lld incorrect and 0 correct LEV_CRC32 in the file '%s', file off [%lld, %lld), log pos [%lld, %lld)", VAR_2->incorrect_logevents, VAR_1->S.F->info->filename, VAR_3, VAR_4, VAR_1->start_log_pos + VAR_3, VAR_1->start_log_pos + VAR_4);
    }
  }
  VAR_2->found = 0;
  VAR_2->incorrect_logevents = 0;
  FUNC_2 (VAR_2->last_incorrect_off, 0x7f, sizeof (VAR_2->last_incorrect_off));
}
