
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct treesame_state {unsigned int nparents; int* treesame; } ;
struct rev_info {int treesame; scalar_t__ dense; } ;
struct TYPE_5__ {int flags; } ;
struct commit {TYPE_2__ object; TYPE_1__* parents; } ;
struct TYPE_4__ {scalar_t__ next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 struct treesame_state* FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int*,int*,unsigned int) ;
 scalar_t__ FUNC_5 (struct rev_info*,struct commit*) ;

__attribute__((used)) static int FUNC_6(struct rev_info *VAR_1, struct commit *VAR_2, unsigned VAR_3)
{
 struct treesame_state *VAR_4;
 int VAR_5;

 if (!VAR_2->parents) {




  if (VAR_3 != 0)
   FUNC_1("compact_treesame %u", VAR_3);
  VAR_5 = !!(VAR_2->object.flags & VAR_0);
  if (FUNC_5(VAR_1, VAR_2))
   VAR_2->object.flags |= VAR_0;
  else
   VAR_2->object.flags &= ~VAR_0;
  return VAR_5;
 }

 VAR_4 = FUNC_3(&VAR_1->treesame, &VAR_2->object);
 if (!VAR_4 || VAR_3 >= VAR_4->nparents)
  FUNC_1("compact_treesame %u", VAR_3);

 VAR_5 = VAR_4->treesame[VAR_3];
 FUNC_4(VAR_4->treesame + VAR_3,
  VAR_4->treesame + VAR_3 + 1,
  VAR_4->nparents - VAR_3 - 1);






 if (--VAR_4->nparents == 1) {
  if (VAR_2->parents->next)
   FUNC_1("compact_treesame parents mismatch");
  if (VAR_4->treesame[0] && VAR_1->dense)
   VAR_2->object.flags |= VAR_0;
  else
   VAR_2->object.flags &= ~VAR_0;
  FUNC_2(FUNC_0(&VAR_1->treesame, &VAR_2->object, ((void*)0)));
 }

 return VAR_5;
}
