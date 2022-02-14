
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unstripe_c {scalar_t__ physical_start; TYPE_1__* dev; int unstripe; scalar_t__ chunk_size; int stripes; } ;
struct dm_target {struct unstripe_c* private; } ;
typedef int status_type_t ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,unsigned long long,int ,int ,unsigned long long) ;



__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0, status_type_t VAR_1,
       unsigned int VAR_2, char *VAR_3, unsigned int VAR_4)
{
 struct unstripe_c *VAR_5 = VAR_0->private;
 unsigned int VAR_6 = 0;

 switch (VAR_1) {
 case 129:
  break;

 case 128:
  FUNC_0("%d %llu %d %s %llu",
         VAR_5->stripes, (unsigned long long)VAR_5->chunk_size, VAR_5->unstripe,
         VAR_5->dev->name, (unsigned long long)VAR_5->physical_start);
  break;
 }
}
