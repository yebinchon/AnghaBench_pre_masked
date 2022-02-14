
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multipath {TYPE_1__* ti; int lock; int flags; } ;
struct TYPE_2__ {int table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct multipath*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct multipath *VAR_2, bool VAR_3,
       bool VAR_4)
{
 unsigned long VAR_5;

 FUNC_3(&VAR_2->lock, VAR_5);
 FUNC_0(VAR_1, &VAR_2->flags,
     (VAR_4 && FUNC_5(VAR_0, &VAR_2->flags)) ||
     (!VAR_4 && VAR_3));
 FUNC_0(VAR_0, &VAR_2->flags, VAR_3);
 FUNC_4(&VAR_2->lock, VAR_5);

 if (!VAR_3) {
  FUNC_1(VAR_2->ti->table);
  FUNC_2(VAR_2);
 }

 return 0;
}
