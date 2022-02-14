
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bios; } ;
struct pblk_rb_entry {TYPE_1__ w_ctx; } ;
struct pblk_rb {unsigned int nr_entries; int flush_point; struct pblk_rb_entry* entries; int inflight_flush_point; int sync; } ;
struct bio {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (struct pblk_rb*,int *) ;
 int FUNC_4 (struct pblk_rb*,int *) ;
 int FUNC_5 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct pblk_rb *VAR_0, struct bio *VAR_1,
       unsigned int VAR_2)
{
 struct pblk_rb_entry *VAR_3;
 unsigned int VAR_4, VAR_5;

 FUNC_4(VAR_0, ((void*)0));
 VAR_4 = FUNC_0(VAR_0->sync);

 if (VAR_2 == VAR_4) {
  FUNC_3(VAR_0, ((void*)0));
  return 0;
 }





 VAR_5 = (VAR_2 == 0) ? (VAR_0->nr_entries - 1) : (VAR_2 - 1);
 VAR_3 = &VAR_0->entries[VAR_5];


 FUNC_5(&VAR_0->flush_point, VAR_5);

 if (VAR_1)
  FUNC_2(&VAR_3->w_ctx.bios, VAR_1);

 FUNC_3(VAR_0, ((void*)0));

 return VAR_1 ? 1 : 0;
}
