
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dust_device {int blksz; scalar_t__ start; TYPE_1__* dev; int quiet_mode; int fail_read_on_bb; } ;
struct dm_target {struct dust_device* private; } ;
typedef int status_type_t ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,...) ;



__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0, status_type_t VAR_1,
   unsigned int VAR_2, char *VAR_3, unsigned int VAR_4)
{
 struct dust_device *VAR_5 = VAR_0->private;
 unsigned int VAR_6 = 0;

 switch (VAR_1) {
 case 129:
  FUNC_0("%s %s %s", VAR_5->dev->name,
         VAR_5->fail_read_on_bb ? "fail_read_on_bad_block" : "bypass",
         VAR_5->quiet_mode ? "quiet" : "verbose");
  break;

 case 128:
  FUNC_0("%s %llu %u", VAR_5->dev->name,
         (unsigned long long)VAR_5->start, VAR_5->blksz);
  break;
 }
}
