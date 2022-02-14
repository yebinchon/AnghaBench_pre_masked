
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_queue {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (struct prio_queue*,struct commit*) ;

__attribute__((used)) static inline void FUNC_1(struct prio_queue *VAR_0, struct commit *VAR_1, int VAR_2)
{
 if (VAR_1->object.flags & VAR_2)
  return;

 VAR_1->object.flags |= VAR_2;
 FUNC_0(VAR_0, VAR_1);
}
