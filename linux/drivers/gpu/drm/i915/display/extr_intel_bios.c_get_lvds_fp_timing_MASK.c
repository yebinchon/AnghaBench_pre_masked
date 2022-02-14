
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct lvds_fp_timing {int dummy; } ;
struct bdb_lvds_lfp_data_ptrs {TYPE_1__* ptr; } ;
struct bdb_lvds_lfp_data {int dummy; } ;
struct bdb_header {int dummy; } ;
struct TYPE_2__ {size_t fp_timing_offset; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static const struct lvds_fp_timing *
FUNC_1(const struct bdb_header *VAR_0,
     const struct bdb_lvds_lfp_data *VAR_1,
     const struct bdb_lvds_lfp_data_ptrs *VAR_2,
     int VAR_3)
{
 size_t VAR_4 = (const u8 *)VAR_1 - (const u8 *)VAR_0;
 u16 VAR_5 = ((const u16 *)VAR_1)[-1];
 size_t VAR_6;

 if (VAR_3 >= FUNC_0(VAR_2->ptr))
  return ((void*)0);
 VAR_6 = VAR_2->ptr[VAR_3].fp_timing_offset;
 if (VAR_6 < VAR_4 ||
     VAR_6 + sizeof(struct lvds_fp_timing) > VAR_4 + VAR_5)
  return ((void*)0);
 return (const struct lvds_fp_timing *)((const u8 *)VAR_0 + VAR_6);
}
