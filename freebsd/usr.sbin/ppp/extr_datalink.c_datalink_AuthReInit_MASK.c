
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int auth; } ;
struct datalink {TYPE_1__ chap; int pap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct datalink *VAR_0)
{
  FUNC_0(&VAR_0->pap);
  FUNC_0(&VAR_0->chap.auth);
  FUNC_1(&VAR_0->chap);
}
