
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_verity {TYPE_1__* fec; } ;
typedef int gfp_t ;
struct TYPE_2__ {int roots; } ;


 void* FUNC_0 (int,int,int ,int,int ,int ) ;

__attribute__((used)) static void *FUNC_1(gfp_t VAR_0, void *VAR_1)
{
 struct dm_verity *VAR_2 = (struct dm_verity *)VAR_1;

 return FUNC_0(8, 0x11d, 0, 1, VAR_2->fec->roots, VAR_0);
}
