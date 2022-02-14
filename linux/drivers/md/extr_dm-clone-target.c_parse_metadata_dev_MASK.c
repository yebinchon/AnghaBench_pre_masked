
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dm_arg_set {int dummy; } ;
struct clone {TYPE_1__* metadata_dev; int ti; } ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int,TYPE_1__**) ;
 int FUNC_3 (struct dm_arg_set*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct clone *VAR_5, struct dm_arg_set *VAR_6, char **VAR_7)
{
 int VAR_8;
 sector_t VAR_9;
 char VAR_10[VAR_0];

 VAR_8 = FUNC_2(VAR_5->ti, FUNC_3(VAR_6), VAR_3 | VAR_4,
     &VAR_5->metadata_dev);
 if (VAR_8) {
  *VAR_7 = "Error opening metadata device";
  return VAR_8;
 }

 VAR_9 = FUNC_4(VAR_5->metadata_dev);
 if (VAR_9 > VAR_2)
  FUNC_0("Metadata device %s is larger than %u sectors: excess space will not be used.",
         FUNC_1(VAR_5->metadata_dev->bdev, VAR_10), VAR_1);

 return 0;
}
