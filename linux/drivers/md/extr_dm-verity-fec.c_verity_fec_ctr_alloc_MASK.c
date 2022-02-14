
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_verity_fec {int dummy; } ;
struct dm_verity {struct dm_verity_fec* fec; TYPE_1__* ti; } ;
struct TYPE_2__ {char* error; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_verity_fec* FUNC_0 (int,int ) ;

int FUNC_1(struct dm_verity *VAR_2)
{
 struct dm_verity_fec *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct dm_verity_fec), VAR_1);
 if (!VAR_3) {
  VAR_2->ti->error = "Cannot allocate FEC structure";
  return -VAR_0;
 }
 VAR_2->fec = VAR_3;

 return 0;
}
