
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int digests_cnt; int digests_offset; scalar_t__ digests_done; } ;
typedef TYPE_1__ salt_t ;
struct TYPE_8__ {int digests_done; int* digests_shown; int salts_cnt; int salts_done; int* salts_shown; TYPE_1__* salts_buf; TYPE_4__* hashes_buf; } ;
typedef TYPE_2__ hashes_t ;
struct TYPE_9__ {TYPE_2__* hashes; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_10__ {int cracked; } ;
typedef TYPE_4__ hash_t ;


 int FUNC_0 (TYPE_3__*) ;

int FUNC_1 (hashcat_ctx_t *VAR_0)
{
  hashes_t *VAR_1 = VAR_0->hashes;

  u32 VAR_2 = VAR_1->digests_done;
  u32 *VAR_3 = VAR_1->digests_shown;

  u32 VAR_4 = VAR_1->salts_cnt;
  u32 VAR_5 = VAR_1->salts_done;
  u32 *VAR_6 = VAR_1->salts_shown;

  hash_t *VAR_7 = VAR_1->hashes_buf;

  salt_t *VAR_8 = VAR_1->salts_buf;

  for (u32 VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  {
    salt_t *VAR_10 = VAR_8 + VAR_9;

    u32 VAR_11 = VAR_10->digests_cnt;

    for (u32 VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    {
      const u32 VAR_13 = VAR_10->digests_offset + VAR_12;

      if (VAR_7[VAR_13].cracked == 1)
      {
        VAR_3[VAR_13] = 1;

        VAR_2++;

        VAR_10->digests_done++;
      }
    }

    if (VAR_10->digests_done == VAR_10->digests_cnt)
    {
      VAR_6[VAR_9] = 1;

      VAR_5++;
    }

    if (VAR_5 == VAR_4) FUNC_0 (VAR_0);
  }

  VAR_1->digests_done = VAR_2;

  VAR_1->salts_cnt = VAR_4;
  VAR_1->salts_done = VAR_5;

  return 0;
}
