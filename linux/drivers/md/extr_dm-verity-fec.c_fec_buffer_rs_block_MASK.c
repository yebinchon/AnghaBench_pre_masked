
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dm_verity_fec_io {int ** bufs; } ;
struct dm_verity {TYPE_1__* fec; } ;
struct TYPE_2__ {unsigned int rsn; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct dm_verity *VAR_0,
          struct dm_verity_fec_io *VAR_1,
          unsigned VAR_2, unsigned VAR_3)
{
 return &VAR_1->bufs[VAR_2][VAR_3 * VAR_0->fec->rsn];
}
