
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * x; int * y; } ;
typedef TYPE_1__ shmap_pair_string_vptr ;
struct TYPE_9__ {scalar_t__ id; int * name; int * extra; } ;
typedef TYPE_2__ queue ;
typedef scalar_t__ qtype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_1__) ;
 int VAR_4 ;

inline void FUNC_9 (queue *VAR_5) {
  if (VAR_5->name != ((void*)0)) {

    shmap_pair_string_vptr VAR_6;
    VAR_6.y = ((void*)0);
    VAR_6.x = VAR_5->name;

    FUNC_8 (&VAR_3, VAR_6);


    FUNC_5 (VAR_5);

    qtype VAR_7 = FUNC_3 (VAR_5->name);

    if (VAR_7 == VAR_0) {
      VAR_4 -= FUNC_1();
      FUNC_2 (VAR_5->extra);
      VAR_4 += FUNC_1();
      VAR_5->extra = ((void*)0);
    }

    FUNC_6 (VAR_5);

    VAR_4 -= FUNC_1();
    FUNC_2 (VAR_5->name);
    VAR_4 += FUNC_1();
    VAR_5->name = ((void*)0);

    if (VAR_5->id == 0) {
      VAR_5->id = VAR_1;
    }
    FUNC_4 (&VAR_2, VAR_5->id);
    FUNC_0 ("del alias %lld\n", VAR_5->id);

    FUNC_7 (VAR_5);
  }
}
