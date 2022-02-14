
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raid_disks; } ;
struct r10conf {int have_replacement; scalar_t__ next_resync; int r10buf_pool; TYPE_2__* mirrors; TYPE_1__ geo; } ;
struct TYPE_4__ {scalar_t__ replacement; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ,struct r10conf*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct r10conf *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_1 / VAR_0;
 FUNC_0(FUNC_2(&VAR_4->r10buf_pool));
 VAR_4->have_replacement = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4->geo.raid_disks; VAR_7++)
  if (VAR_4->mirrors[VAR_7].replacement)
   VAR_4->have_replacement = 1;
 VAR_5 = FUNC_1(&VAR_4->r10buf_pool, VAR_6,
      VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;
 VAR_4->next_resync = 0;
 return 0;
}
