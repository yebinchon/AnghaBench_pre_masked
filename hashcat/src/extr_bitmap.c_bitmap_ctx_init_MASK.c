
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int example_hashes; int keyspace; int left; int backend_info; int show; int usage; int version; unsigned int bitmap_min; unsigned int bitmap_max; } ;
typedef TYPE_1__ user_options_t ;
typedef unsigned int u32 ;
struct TYPE_8__ {unsigned int digests_cnt; scalar_t__ st_digests_buf; scalar_t__ digests_buf; } ;
typedef TYPE_2__ hashes_t ;
struct TYPE_9__ {int dgst_pos3; int dgst_pos2; int dgst_pos1; int dgst_pos0; int * st_hash; int dgst_size; } ;
typedef TYPE_3__ hashconfig_t ;
struct TYPE_10__ {TYPE_1__* user_options; TYPE_2__* hashes; TYPE_3__* hashconfig; TYPE_5__* bitmap_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_11__ {int enabled; unsigned int bitmap_bits; unsigned int bitmap_nums; unsigned int bitmap_size; unsigned int bitmap_mask; unsigned int bitmap_shift1; unsigned int bitmap_shift2; unsigned int* bitmap_s1_a; unsigned int* bitmap_s1_b; unsigned int* bitmap_s1_c; unsigned int* bitmap_s1_d; unsigned int* bitmap_s2_a; unsigned int* bitmap_s2_b; unsigned int* bitmap_s2_c; unsigned int* bitmap_s2_d; } ;
typedef TYPE_5__ bitmap_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (unsigned int,int ,unsigned int const,char*,int ,int ,int ,int ,unsigned int,unsigned int,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int const,char*,int ,int ,int ,int ,unsigned int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

int FUNC_4 (hashcat_ctx_t *VAR_1)
{
  bitmap_ctx_t *VAR_2 = VAR_1->bitmap_ctx;
  hashconfig_t *VAR_3 = VAR_1->hashconfig;
  hashes_t *VAR_4 = VAR_1->hashes;
  user_options_t *VAR_5 = VAR_1->user_options;

  VAR_2->enabled = 0;

  if (VAR_5->example_hashes == 1) return 0;
  if (VAR_5->keyspace == 1) return 0;
  if (VAR_5->left == 1) return 0;
  if (VAR_5->backend_info == 1) return 0;
  if (VAR_5->show == 1) return 0;
  if (VAR_5->usage == 1) return 0;
  if (VAR_5->version == 1) return 0;

  VAR_2->enabled = 1;





  const u32 VAR_6 = 5;
  const u32 VAR_7 = 13;

  const u32 VAR_8 = VAR_5->bitmap_min;
  const u32 VAR_9 = VAR_5->bitmap_max;

  u32 *VAR_10 = (u32 *) FUNC_2 ((1U << VAR_9) * sizeof (u32));
  u32 *VAR_11 = (u32 *) FUNC_2 ((1U << VAR_9) * sizeof (u32));
  u32 *VAR_12 = (u32 *) FUNC_2 ((1U << VAR_9) * sizeof (u32));
  u32 *VAR_13 = (u32 *) FUNC_2 ((1U << VAR_9) * sizeof (u32));
  u32 *VAR_14 = (u32 *) FUNC_2 ((1U << VAR_9) * sizeof (u32));
  u32 *VAR_15 = (u32 *) FUNC_2 ((1U << VAR_9) * sizeof (u32));
  u32 *VAR_16 = (u32 *) FUNC_2 ((1U << VAR_9) * sizeof (u32));
  u32 *VAR_17 = (u32 *) FUNC_2 ((1U << VAR_9) * sizeof (u32));

  u32 VAR_18;
  u32 VAR_19;
  u32 VAR_20;
  u32 VAR_21;

  for (VAR_18 = VAR_8; VAR_18 < VAR_9; VAR_18++)
  {
    VAR_19 = 1U << VAR_18;

    VAR_20 = VAR_19 - 1;

    VAR_21 = VAR_19 * sizeof (u32);

    if ((VAR_4->digests_cnt & VAR_20) == VAR_4->digests_cnt) break;

    if (FUNC_1 (VAR_4->digests_cnt, VAR_3->dgst_size, VAR_6, (char *) VAR_4->digests_buf, VAR_3->dgst_pos0, VAR_3->dgst_pos1, VAR_3->dgst_pos2, VAR_3->dgst_pos3, VAR_20, VAR_21, VAR_10, VAR_11, VAR_12, VAR_13, VAR_4->digests_cnt / 2) == 1) continue;
    if (FUNC_1 (VAR_4->digests_cnt, VAR_3->dgst_size, VAR_7, (char *) VAR_4->digests_buf, VAR_3->dgst_pos0, VAR_3->dgst_pos1, VAR_3->dgst_pos2, VAR_3->dgst_pos3, VAR_20, VAR_21, VAR_10, VAR_11, VAR_12, VAR_13, VAR_4->digests_cnt / 2) == 1) continue;

    break;
  }

  if (VAR_18 == VAR_9)
  {
    FUNC_0 (VAR_0, ((void*)0), 0);
  }

  VAR_19 = 1U << VAR_18;

  VAR_20 = VAR_19 - 1;

  VAR_21 = VAR_19 * sizeof (u32);

  FUNC_1 (VAR_4->digests_cnt, VAR_3->dgst_size, VAR_6, (char *) VAR_4->digests_buf, VAR_3->dgst_pos0, VAR_3->dgst_pos1, VAR_3->dgst_pos2, VAR_3->dgst_pos3, VAR_20, VAR_21, VAR_10, VAR_11, VAR_12, VAR_13, -1);
  FUNC_1 (VAR_4->digests_cnt, VAR_3->dgst_size, VAR_7, (char *) VAR_4->digests_buf, VAR_3->dgst_pos0, VAR_3->dgst_pos1, VAR_3->dgst_pos2, VAR_3->dgst_pos3, VAR_20, VAR_21, VAR_14, VAR_15, VAR_16, VAR_17, -1);

  if (VAR_3->st_hash != ((void*)0))
  {
    FUNC_3 (VAR_6, (char *) VAR_4->st_digests_buf, VAR_3->dgst_pos0, VAR_3->dgst_pos1, VAR_3->dgst_pos2, VAR_3->dgst_pos3, VAR_20, VAR_10, VAR_11, VAR_12, VAR_13);
    FUNC_3 (VAR_7, (char *) VAR_4->st_digests_buf, VAR_3->dgst_pos0, VAR_3->dgst_pos1, VAR_3->dgst_pos2, VAR_3->dgst_pos3, VAR_20, VAR_14, VAR_15, VAR_16, VAR_17);
  }

  VAR_2->bitmap_bits = VAR_18;
  VAR_2->bitmap_nums = VAR_19;
  VAR_2->bitmap_size = VAR_21;
  VAR_2->bitmap_mask = VAR_20;
  VAR_2->bitmap_shift1 = VAR_6;
  VAR_2->bitmap_shift2 = VAR_7;

  VAR_2->bitmap_s1_a = VAR_10;
  VAR_2->bitmap_s1_b = VAR_11;
  VAR_2->bitmap_s1_c = VAR_12;
  VAR_2->bitmap_s1_d = VAR_13;
  VAR_2->bitmap_s2_a = VAR_14;
  VAR_2->bitmap_s2_b = VAR_15;
  VAR_2->bitmap_s2_c = VAR_16;
  VAR_2->bitmap_s2_d = VAR_17;

  return 0;
}
