
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tl_type {int extra; int constructors_num; int * constructors; } ;
struct tl_combinator {int dummy; } ;
struct TYPE_4__ {int tn; int cn; int fn; struct tl_combinator** fns; struct tl_type** tps; } ;
struct TYPE_3__ {scalar_t__ rptr; scalar_t__ wptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 long long FUNC_2 (scalar_t__,int,long long) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,void**,int) ;
 scalar_t__ FUNC_5 (int ,void**,int) ;
 scalar_t__ FUNC_6 (void**,int) ;
 scalar_t__ FUNC_7 (struct tl_combinator*,void**,int) ;
 int FUNC_8 (int) ;
 TYPE_1__* VAR_4 ;
 struct tl_combinator* FUNC_9 (int) ;
 struct tl_type* FUNC_10 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_10 ;
 void* FUNC_18 (int) ;
 int FUNC_19 (scalar_t__) ;

int FUNC_20 (void) {
  if (VAR_10 >= 2) {
    FUNC_3 (VAR_6, "Starting config renew\n");
  }
  FUNC_16 ();
  int VAR_11 = FUNC_17 ();
  if (VAR_10 >= 2) {
    FUNC_3 (VAR_6, "Schema 0x%08x\n", VAR_11);
  }
  VAR_5 = FUNC_8 (VAR_11);
  if (VAR_10 >= 2) {
    FUNC_3 (VAR_6, "Schema version %d\n", VAR_5);
  }
  if (VAR_5 <= 0 || FUNC_15 ()) {
    return -1;
  }

  int VAR_12 = FUNC_17 ();
  int VAR_13 = FUNC_17 ();

  if (FUNC_15 ()) {
    return -1;
  }

  long long VAR_14 = FUNC_2 (VAR_4->rptr, ((char *)VAR_4->wptr) - (char *)VAR_4->rptr,-1ll);
  if (VAR_12 < VAR_9 || (VAR_12 == VAR_9 && VAR_13 < VAR_7) || VAR_2 == VAR_14) {
    return 0;
  }

  FUNC_12 ();



  int VAR_15 = 0;

  int VAR_16 = 0;
  int VAR_17;
  int VAR_18;

  VAR_15 = FUNC_17 ();
  if (VAR_15 < 0 || VAR_15 > 10000 || FUNC_15 ()) {
    FUNC_13 ();
    return -1;
  }

  VAR_3->tps = FUNC_18 (sizeof (void *) * VAR_15);
  VAR_3->tn = VAR_15;
  FUNC_1 (VAR_15 * sizeof (void *));
  struct tl_type **VAR_19 = VAR_3->tps;
  if (VAR_10 >= 2) {
    FUNC_3 (VAR_6, "Found %d types\n", VAR_15);
  }

  for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
    if (FUNC_17 () != VAR_1) {
      FUNC_13 ();
      return -1;
    }
    VAR_19[VAR_18] = FUNC_10 ();
    if (!VAR_19[VAR_18]) {
      FUNC_13 ();
      return -1;
    }
  }

  VAR_17 = FUNC_17 ();
  if (VAR_17 < 0 || FUNC_15 ()) {
    FUNC_13 ();
    return -1;
  }
  VAR_3->cn = VAR_17;

  if (VAR_10 >= 2) {
    FUNC_3 (VAR_6, "Found %d constructors\n", VAR_17);
  }

  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
    if (FUNC_17 () != VAR_0) {
      FUNC_13 ();
      return -1;
    }
    if (!FUNC_9 (2)) {
      FUNC_13 ();
      return -1;
    }
  }
  VAR_16 = FUNC_17 ();
  if (VAR_16 < 0 || VAR_16 > 10000 || FUNC_15 ()) {
    FUNC_13 ();
    return -1;
  }
  VAR_3->fn = VAR_16;
  VAR_3->fns = FUNC_18 (sizeof (void *) * VAR_16);
  FUNC_1 (VAR_16 * sizeof (void *));
  struct tl_combinator **VAR_20 = VAR_3->fns;

  if (VAR_10 >= 2) {
    FUNC_3 (VAR_6, "Found %d functions\n", VAR_16);
  }

  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
    if (FUNC_17 () != VAR_0) {
      FUNC_13 ();
      return -1;
    }
    VAR_20[VAR_18] = FUNC_9 (3);
    if (!VAR_20[VAR_18]) {
      FUNC_13 ();
      return -1;
    }
  }
  FUNC_14 ();
  if (FUNC_15 ()) {
    FUNC_13 ();
    return -1;
  }
  static void *VAR_21[10000];
  if (FUNC_6 (VAR_21, 100) < 0) {
    return -2;
  }
  for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
    if (VAR_19[VAR_18]->extra < VAR_19[VAR_18]->constructors_num) {
      FUNC_13 ();
      return -1;
    }
  }
  int VAR_22;
  for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
    for (VAR_22 = 0; VAR_22 < VAR_19[VAR_18]->constructors_num; VAR_22 ++) {
      if (FUNC_5 (VAR_19[VAR_18]->constructors[VAR_22], VAR_21, 10000) < 0) {
        return -2;
      }
      if (FUNC_4 (VAR_19[VAR_18]->constructors[VAR_22], VAR_21, 10000) < 0) {
        return -2;
      }
    }
  }
  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
    if (FUNC_7 (VAR_20[VAR_18], VAR_21, 10000) < 0) {
      return -2;
    }
  }
  if (VAR_8) {
    FUNC_0 (FUNC_11 (VAR_8));
    FUNC_19 (VAR_8);
  }
  VAR_8 = 0;
  VAR_2 = VAR_14;
  VAR_9 = VAR_12 ;
  VAR_7 = VAR_13;
  return 1;
}
