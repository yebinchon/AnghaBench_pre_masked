
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dm_verity_io {int dummy; } ;
struct dm_verity {int ahash_reqsize; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct dm_verity *VAR_0,
     struct dm_verity_io *VAR_1)
{
 return (u8 *)(VAR_1 + 1) + VAR_0->ahash_reqsize;
}
