
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ewah_bitmap {int dummy; } ;
struct TYPE_4__ {int flags; int oid; } ;
struct commit {TYPE_2__* parents; TYPE_1__ object; } ;
struct TYPE_6__ {int selected_nr; int progress; scalar_t__ show_progress; } ;
struct TYPE_5__ {scalar_t__ next; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit**,unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 struct ewah_bitmap* FUNC_2 (int *) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct commit*,struct ewah_bitmap*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 TYPE_3__ VAR_2 ;

void FUNC_7(struct commit **VAR_3,
      unsigned int VAR_4,
      int VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7, VAR_8;

 FUNC_0(VAR_3, VAR_4, VAR_1);

 if (VAR_2.show_progress)
  VAR_2.progress = FUNC_5("Selecting bitmap commits", 0);

 if (VAR_4 < 100) {
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
   FUNC_4(VAR_3[VAR_6], ((void*)0));
  return;
 }

 for (;;) {
  struct ewah_bitmap *VAR_9 = ((void*)0);
  struct commit *VAR_10 = ((void*)0);

  VAR_8 = FUNC_3(VAR_6);

  if (VAR_6 + VAR_8 >= VAR_4)
   break;

  if (VAR_5 > 0 && VAR_2.selected_nr >= VAR_5) {
   VAR_2.selected_nr = VAR_5;
   break;
  }

  if (VAR_8 == 0) {
   VAR_10 = VAR_3[VAR_6];
   VAR_9 = FUNC_2(&VAR_10->object.oid);
  } else {
   VAR_10 = VAR_3[VAR_6 + VAR_8];

   for (VAR_7 = 0; VAR_7 <= VAR_8; ++VAR_7) {
    struct commit *VAR_11 = VAR_3[VAR_6 + VAR_7];

    VAR_9 = FUNC_2(&VAR_11->object.oid);
    if (VAR_9 || (VAR_11->object.flags & VAR_0) != 0) {
     VAR_10 = VAR_11;
     break;
    }

    if (VAR_11->parents && VAR_11->parents->next)
     VAR_10 = VAR_11;
   }
  }

  FUNC_4(VAR_10, VAR_9);

  VAR_6 += VAR_8 + 1;
  FUNC_1(VAR_2.progress, VAR_6);
 }

 FUNC_6(&VAR_2.progress);
}
