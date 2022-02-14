
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vtoc; } ;
union label_t {TYPE_1__ vol; } ;
typedef int tmp ;
struct TYPE_4__ {int ulimit; int llimit; } ;
struct vtoc_format1_label {scalar_t__ DS1FMTID; TYPE_2__ DS1EXT1; } ;
struct parsed_partitions {int limit; int pp_buf; } ;
struct hd_geometry {int sectors; } ;
typedef int sector_t ;
typedef int loff_t ;
typedef int Sector ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int *,struct hd_geometry*) ;
 int FUNC_1 (int *,struct hd_geometry*) ;
 int FUNC_2 (struct vtoc_format1_label*,unsigned char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct parsed_partitions*,int,int,int) ;
 unsigned char* FUNC_5 (struct parsed_partitions*,int,int *) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct parsed_partitions *VAR_2,
    struct hd_geometry *VAR_3,
    int VAR_4,
    char VAR_5[],
    union label_t *VAR_6)
{
 sector_t VAR_7;
 int VAR_8;
 char VAR_9[64];
 Sector VAR_10;
 unsigned char *VAR_11;
 loff_t VAR_12, VAR_13;
 struct vtoc_format1_label VAR_14;
 int VAR_15;

 FUNC_6(VAR_9, sizeof(VAR_9), "VOL1/%8s:", VAR_5);
 FUNC_7(VAR_2->pp_buf, VAR_9, VAR_0);




 VAR_15 = VAR_4 >> 9;
 VAR_7 = FUNC_1(&VAR_6->vol.vtoc, VAR_3) + 1;
 VAR_8 = 0;
 VAR_11 = FUNC_5(VAR_2, VAR_7 * VAR_15, &VAR_10);
 while (VAR_11 != ((void*)0)) {
  FUNC_2(&VAR_14, VAR_11, sizeof(struct vtoc_format1_label));
  FUNC_3(VAR_10);

  if (VAR_14 == VAR_1['4']
      || VAR_14 == VAR_1['5']
      || VAR_14 == VAR_1['7']
      || VAR_14 == VAR_1['9']) {
   VAR_7++;
   VAR_11 = FUNC_5(VAR_2, VAR_7 * VAR_15, &VAR_10);
   continue;
  }

  if (VAR_14 != VAR_1['1'] &&
      VAR_14 != VAR_1['8'])
   break;

  VAR_12 = FUNC_0(&VAR_14, VAR_3);
  VAR_13 = FUNC_0(&VAR_14, VAR_3) -
   VAR_12 + VAR_3->sectors;
  VAR_12 *= VAR_15;
  VAR_13 *= VAR_15;
  if (VAR_8 >= VAR_2->limit)
   break;
  FUNC_4(VAR_2, VAR_8 + 1, VAR_12, VAR_13);
  VAR_8++;
  VAR_7++;
  VAR_11 = FUNC_5(VAR_2, VAR_7 * VAR_15, &VAR_10);
 }
 FUNC_7(VAR_2->pp_buf, "\n", VAR_0);

 if (!VAR_11)
  return -1;

 return 1;
}
