
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dm_arg_set {int dummy; } ;
struct cache_args {TYPE_1__* metadata_dev; int ti; } ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dm_arg_set*,char**) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int,TYPE_1__**) ;
 int FUNC_4 (struct dm_arg_set*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct cache_args *VAR_6, struct dm_arg_set *VAR_7,
         char **VAR_8)
{
 int VAR_9;
 sector_t VAR_10;
 char VAR_11[VAR_0];

 if (!FUNC_1(VAR_7, VAR_8))
  return -VAR_2;

 VAR_9 = FUNC_3(VAR_6->ti, FUNC_4(VAR_7), VAR_3 | VAR_4,
     &VAR_6->metadata_dev);
 if (VAR_9) {
  *VAR_8 = "Error opening metadata device";
  return VAR_9;
 }

 VAR_10 = FUNC_5(VAR_6->metadata_dev);
 if (VAR_10 > VAR_1)
  FUNC_0("Metadata device %s is larger than %u sectors: excess space will not be used.",
         FUNC_2(VAR_6->metadata_dev->bdev, VAR_11), VAR_5);

 return 0;
}
