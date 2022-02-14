
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity_io {int v; } ;
struct dm_verity_fec_io {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct dm_verity_io*) ;

__attribute__((used)) static inline struct dm_verity_fec_io *FUNC_1(struct dm_verity_io *VAR_0)
{
 return (struct dm_verity_fec_io *) FUNC_0(VAR_0->v, VAR_0);
}
