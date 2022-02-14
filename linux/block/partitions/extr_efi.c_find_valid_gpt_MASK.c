
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct parsed_partitions {TYPE_4__* bdev; } ;
typedef int sector_t ;
struct TYPE_14__ {int alternate_lba; } ;
typedef TYPE_1__ legacy_mbr ;
typedef TYPE_1__ gpt_header ;
typedef TYPE_1__ gpt_entry ;
struct TYPE_15__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct parsed_partitions*,int ,TYPE_1__**,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct parsed_partitions*,int ,int *,int) ;

__attribute__((used)) static int FUNC_11(struct parsed_partitions *VAR_4, gpt_header **VAR_5,
     gpt_entry **VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 gpt_header *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 gpt_entry *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 legacy_mbr *VAR_14;
 sector_t VAR_15 = FUNC_1(VAR_4->bdev->bd_inode) >> 9;
 u64 VAR_16;

 if (!VAR_6)
  return 0;

 VAR_16 = FUNC_6(VAR_4->bdev);
        if (!VAR_3) {

  VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_0);
  if (!VAR_14)
   goto fail;

  FUNC_10(VAR_4, 0, (u8 *)VAR_14, sizeof(*VAR_14));
  VAR_9 = FUNC_3(VAR_14, VAR_15);
  FUNC_4(VAR_14);

  if (!VAR_9)
   goto fail;

  FUNC_8("Device has a %s MBR\n",
    VAR_9 == VAR_1 ?
      "protective" : "hybrid");
 }

 VAR_7 = FUNC_2(VAR_4, VAR_2,
     &VAR_10, &VAR_12);
        if (VAR_7)
  VAR_8 = FUNC_2(VAR_4,
      FUNC_7(VAR_10->alternate_lba),
      &VAR_11, &VAR_13);
        if (!VAR_8 && VAR_3)
                VAR_8 = FUNC_2(VAR_4, VAR_16, &VAR_11, &VAR_13);


        if (!VAR_7 && !VAR_8)
                goto fail;

        FUNC_0(VAR_10, VAR_11, VAR_16);


        if (VAR_7) {
                *VAR_5 = VAR_10;
                *VAR_6 = VAR_12;
                FUNC_4(VAR_11);
                FUNC_4(VAR_13);
  if (!VAR_8)
                        FUNC_9("Alternate GPT is invalid, using primary GPT.\n");
                return 1;
        }
        else if (VAR_8) {
                *VAR_5 = VAR_11;
                *VAR_6 = VAR_13;
                FUNC_4(VAR_10);
                FUNC_4(VAR_12);
  FUNC_9("Primary GPT is invalid, using alternate GPT.\n");
                return 1;
        }

 fail:
        FUNC_4(VAR_10);
        FUNC_4(VAR_11);
        FUNC_4(VAR_12);
        FUNC_4(VAR_13);
        *VAR_5 = ((void*)0);
        *VAR_6 = ((void*)0);
        return 0;
}
