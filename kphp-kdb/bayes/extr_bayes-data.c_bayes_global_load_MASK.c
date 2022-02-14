
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int entry_t ;
struct TYPE_7__ {int n; int size; TYPE_1__* e; } ;
struct TYPE_6__ {TYPE_3__ cnt; } ;
typedef TYPE_1__ bayes ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int VAR_2 ;

void FUNC_5 (bayes *VAR_3) {
  int VAR_4 = 3 * sizeof (int) + 2 * sizeof (long long);
  int VAR_5 = FUNC_4 (VAR_0[0], VAR_3, VAR_4);
  if (VAR_5 != VAR_4) {
    FUNC_1 (VAR_2, "error reading header from index file: read %d bytes instead of %d at position ???: %m\n", VAR_5, VAR_4);
    FUNC_0 (VAR_5 == VAR_4);
  }

  int VAR_6 = VAR_3->cnt.n,
      VAR_7 = VAR_3->cnt.size;
  if (VAR_7 > VAR_1) {
    VAR_1 = VAR_7;
  }

  FUNC_2 (&VAR_3->cnt);
  FUNC_3 (&VAR_3->cnt, VAR_6);
  VAR_3->cnt.size = VAR_7;

  VAR_4 = sizeof (entry_t) * VAR_6;
  VAR_5 = FUNC_4 (VAR_0[0], VAR_3->cnt.e, VAR_4);
  if (VAR_5 != VAR_4) {
    FUNC_1 (VAR_2, "error reading header from index file: read %d bytes instead of %d at position ???: %m\n", VAR_5, VAR_4);
    FUNC_0 (VAR_5 == VAR_4);
  }
}
