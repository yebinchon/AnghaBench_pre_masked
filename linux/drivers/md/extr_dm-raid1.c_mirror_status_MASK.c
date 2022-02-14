
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mirror_set {unsigned int nr_mirrors; TYPE_3__* mirror; scalar_t__ nr_regions; int rh; } ;
struct dm_target {scalar_t__ private; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
typedef int status_type_t ;
struct TYPE_6__ {scalar_t__ offset; TYPE_2__* dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {unsigned int (* status ) (struct dm_dirty_log*,int,char*,unsigned int) ;scalar_t__ (* get_sync_count ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;


 char FUNC_1 (TYPE_3__*) ;
 struct dm_dirty_log* FUNC_2 (int ) ;
 int FUNC_3 (struct mirror_set*) ;
 int FUNC_4 (struct mirror_set*) ;
 scalar_t__ FUNC_5 (struct dm_dirty_log*) ;
 unsigned int FUNC_6 (struct dm_dirty_log*,int,char*,unsigned int) ;
 unsigned int FUNC_7 (struct dm_dirty_log*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct dm_target *VAR_1, status_type_t VAR_2,
     unsigned VAR_3, char *VAR_4, unsigned VAR_5)
{
 unsigned int VAR_6, VAR_7 = 0;
 int VAR_8 = 0;
 struct mirror_set *VAR_9 = (struct mirror_set *) VAR_1->private;
 struct dm_dirty_log *VAR_10 = FUNC_2(VAR_9->rh);
 char VAR_11[VAR_0 + 1];

 switch (VAR_2) {
 case 129:
  FUNC_0("%d ", VAR_9->nr_mirrors);
  for (VAR_6 = 0; VAR_6 < VAR_9->nr_mirrors; VAR_6++) {
   FUNC_0("%s ", VAR_9->mirror[VAR_6].dev->name);
   VAR_11[VAR_6] = FUNC_1(&(VAR_9->mirror[VAR_6]));
  }
  VAR_11[VAR_6] = '\0';

  FUNC_0("%llu/%llu 1 %s ",
        (unsigned long long)VAR_10->type->get_sync_count(VAR_10),
        (unsigned long long)VAR_9->nr_regions, VAR_11);

  VAR_7 += VAR_10->type->status(VAR_10, VAR_2, VAR_4+VAR_7, VAR_5-VAR_7);

  break;

 case 128:
  VAR_7 = VAR_10->type->status(VAR_10, VAR_2, VAR_4, VAR_5);

  FUNC_0("%d", VAR_9->nr_mirrors);
  for (VAR_6 = 0; VAR_6 < VAR_9->nr_mirrors; VAR_6++)
   FUNC_0(" %s %llu", VAR_9->mirror[VAR_6].dev->name,
          (unsigned long long)VAR_9->mirror[VAR_6].offset);

  VAR_8 += !!FUNC_3(VAR_9);
  VAR_8 += !!FUNC_4(VAR_9);
  if (VAR_8) {
   FUNC_0(" %d", VAR_8);
   if (FUNC_3(VAR_9))
    FUNC_0(" handle_errors");
   if (FUNC_4(VAR_9))
    FUNC_0(" keep_log");
  }

  break;
 }
}
