
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
struct dm_verity_fec_io {int erasures; int rs; } ;
struct dm_verity {TYPE_1__* fec; } ;
struct TYPE_2__ {int roots; int rsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,int ,int *,int,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct dm_verity *VAR_2, struct dm_verity_fec_io *VAR_3,
     u8 *VAR_4, u8 *VAR_5, int VAR_6)
{
 int VAR_7;
 uint16_t VAR_8[VAR_1 - VAR_0];

 for (VAR_7 = 0; VAR_7 < VAR_2->fec->roots; VAR_7++)
  VAR_8[VAR_7] = VAR_5[VAR_7];

 return FUNC_0(VAR_3->rs, VAR_4, VAR_8, VAR_2->fec->rsn, ((void*)0), VAR_6,
     VAR_3->erasures, 0, ((void*)0));
}
