
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct lvds_dvo_timing const lvds_dvo_timing ;
struct bdb_lvds_lfp_data_ptrs {TYPE_1__* ptr; } ;
struct bdb_lvds_lfp_data {scalar_t__ data; } ;
struct TYPE_2__ {int dvo_timing_offset; int fp_timing_offset; } ;



__attribute__((used)) static const struct lvds_dvo_timing *
FUNC_0(const struct bdb_lvds_lfp_data *VAR_0,
      const struct bdb_lvds_lfp_data_ptrs *VAR_1,
      int VAR_2)
{






 int VAR_3 =
  VAR_1->ptr[1].dvo_timing_offset -
  VAR_1->ptr[0].dvo_timing_offset;
 int VAR_4 =
  VAR_1->ptr[0].dvo_timing_offset -
  VAR_1->ptr[0].fp_timing_offset;
 char *VAR_5 = (char *)VAR_0->data + VAR_3 * VAR_2;

 return (struct lvds_dvo_timing *)(VAR_5 + VAR_4);
}
