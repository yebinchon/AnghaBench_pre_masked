
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct dm_verity {int hash_failed; scalar_t__ corrupted_errs; scalar_t__ mode; TYPE_2__* data_dev; TYPE_1__* ti; } ;
typedef enum verity_block_type { ____Placeholder_verity_block_type } verity_block_type ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int table; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,char const*,unsigned long long) ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (struct mapped_device*) ;
 struct mapped_device* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,char**) ;
 int FUNC_8 (char*,int,char*,char*,int,unsigned long long) ;

__attribute__((used)) static int FUNC_9(struct dm_verity *VAR_6, enum verity_block_type VAR_7,
        unsigned long long VAR_8)
{
 char VAR_9[VAR_0];
 char *VAR_10[] = { VAR_9, ((void*)0) };
 const char *VAR_11 = "";
 struct mapped_device *VAR_12 = FUNC_5(VAR_6->ti->table);


 VAR_6->hash_failed = 1;

 if (VAR_6->corrupted_errs >= VAR_2)
  goto out;

 VAR_6->corrupted_errs++;

 switch (VAR_7) {
 case 129:
  VAR_11 = "data";
  break;
 case 128:
  VAR_11 = "metadata";
  break;
 default:
  FUNC_0();
 }

 FUNC_2("%s: %s block %llu is corrupted", VAR_6->data_dev->name,
      VAR_11, VAR_8);

 if (VAR_6->corrupted_errs == VAR_2)
  FUNC_1("%s: reached maximum errors", VAR_6->data_dev->name);

 FUNC_8(VAR_9, VAR_0, "%s=%d,%llu",
  VAR_1, VAR_7, VAR_8);

 FUNC_7(&FUNC_3(FUNC_4(VAR_12))->kobj, VAR_5, VAR_10);

out:
 if (VAR_6->mode == VAR_3)
  return 0;

 if (VAR_6->mode == VAR_4)
  FUNC_6("dm-verity device corrupted");

 return 1;
}
