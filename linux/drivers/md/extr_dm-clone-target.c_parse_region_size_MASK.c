
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_arg_set {int dummy; } ;
struct dm_arg {char* error; int max; int min; } ;
struct clone {unsigned int region_size; TYPE_2__* dest_dev; TYPE_1__* source_dev; } ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dm_arg*,struct dm_arg_set*,unsigned int*,char**) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct clone *VAR_3, struct dm_arg_set *VAR_4, char **VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 struct dm_arg VAR_8;

 VAR_8.min = VAR_2;
 VAR_8.max = VAR_1;
 VAR_8.error = "Invalid region size";

 VAR_6 = FUNC_1(&VAR_8, VAR_4, &VAR_7, VAR_5);
 if (VAR_6)
  return VAR_6;


 if (!FUNC_2(VAR_7)) {
  *VAR_5 = "Region size is not a power of 2";
  return -VAR_0;
 }


 if (VAR_7 % (FUNC_0(VAR_3->source_dev->bdev) >> 9) ||
     VAR_7 % (FUNC_0(VAR_3->dest_dev->bdev) >> 9)) {
  *VAR_5 = "Region size is not a multiple of device logical block size";
  return -VAR_0;
 }

 VAR_3->region_size = VAR_7;

 return 0;
}
