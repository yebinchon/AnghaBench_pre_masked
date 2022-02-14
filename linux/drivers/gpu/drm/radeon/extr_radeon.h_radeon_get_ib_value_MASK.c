
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * ptr; } ;
struct radeon_cs_parser {TYPE_1__ ib; struct radeon_cs_chunk* chunk_ib; } ;
struct radeon_cs_chunk {int * kdata; } ;



__attribute__((used)) static inline u32 FUNC_0(struct radeon_cs_parser *VAR_0, int VAR_1)
{
 struct radeon_cs_chunk *VAR_2 = VAR_0->chunk_ib;

 if (VAR_2->kdata)
  return VAR_2->kdata[VAR_1];
 return VAR_0->ib.ptr[VAR_1];
}
