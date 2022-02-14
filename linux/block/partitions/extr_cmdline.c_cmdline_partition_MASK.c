
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parsed_partitions {int pp_buf; TYPE_1__* bdev; } ;
struct cmdline_parts {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int bd_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int * VAR_4 ;
 struct cmdline_parts* FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (struct cmdline_parts*,int,int,int ,void*) ;
 int FUNC_5 (int,struct parsed_partitions*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ) ;

int FUNC_8(struct parsed_partitions *VAR_5)
{
 sector_t VAR_6;
 char VAR_7[VAR_0];
 struct cmdline_parts *VAR_8;

 if (VAR_4) {
  if (VAR_3)
   FUNC_2(&VAR_3);

  if (FUNC_3(&VAR_3, VAR_4)) {
   VAR_4 = ((void*)0);
   return -1;
  }
  VAR_4 = ((void*)0);
 }

 if (!VAR_3)
  return 0;

 FUNC_0(VAR_5->bdev, VAR_7);
 VAR_8 = FUNC_1(VAR_3, VAR_7);
 if (!VAR_8)
  return 0;

 VAR_6 = FUNC_6(VAR_5->bdev->bd_disk) << 9;

 FUNC_4(VAR_8, VAR_6, 1, VAR_2, (void *)VAR_5);
 FUNC_5(1, VAR_5);

 FUNC_7(VAR_5->pp_buf, "\n", VAR_1);

 return 1;
}
