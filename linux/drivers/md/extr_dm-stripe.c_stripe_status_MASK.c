
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_c {unsigned int stripes; TYPE_2__* stripe; scalar_t__ chunk_size; } ;
struct dm_target {scalar_t__ private; } ;
typedef int status_type_t ;
struct TYPE_4__ {scalar_t__ physical_start; TYPE_1__* dev; int error_count; } ;
struct TYPE_3__ {unsigned int name; } ;


 int FUNC_0 (char*,...) ;


 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0, status_type_t VAR_1,
     unsigned VAR_2, char *VAR_3, unsigned VAR_4)
{
 struct stripe_c *VAR_5 = (struct stripe_c *) VAR_0->private;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;

 switch (VAR_1) {
 case 129:
  FUNC_0("%d ", VAR_5->stripes);
  for (VAR_7 = 0; VAR_7 < VAR_5->stripes; VAR_7++) {
   FUNC_0("%s ", VAR_5->stripe[VAR_7].dev->name);
  }
  FUNC_0("1 ");
  for (VAR_7 = 0; VAR_7 < VAR_5->stripes; VAR_7++) {
   FUNC_0("%c", FUNC_1(&(VAR_5->stripe[VAR_7].error_count)) ?
          'D' : 'A');
  }
  break;

 case 128:
  FUNC_0("%d %llu", VAR_5->stripes,
   (unsigned long long)VAR_5->chunk_size);
  for (VAR_7 = 0; VAR_7 < VAR_5->stripes; VAR_7++)
   FUNC_0(" %s %llu", VAR_5->stripe[VAR_7].dev->name,
       (unsigned long long)VAR_5->stripe[VAR_7].physical_start);
  break;
 }
}
