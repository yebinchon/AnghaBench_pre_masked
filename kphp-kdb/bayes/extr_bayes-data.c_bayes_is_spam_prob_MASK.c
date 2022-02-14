
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {long long nbad; long long ngood; } ;
struct TYPE_12__ {scalar_t__ metafile; TYPE_7__ b; } ;
typedef TYPE_1__ user ;
struct TYPE_13__ {char* text; } ;
typedef TYPE_2__ message ;
struct TYPE_14__ {char* text; struct TYPE_14__* next; } ;
typedef TYPE_3__ black_list ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 double FUNC_0 (TYPE_7__*,scalar_t__,size_t) ;
 double FUNC_1 (scalar_t__,scalar_t__,size_t) ;
 TYPE_3__* VAR_6 ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,long long,double,double,double,double,...) ;
 char* VAR_10 ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (char*) ;
 TYPE_7__ VAR_11 ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (double*,int ,int) ;
 int FUNC_10 (char*,char*,int*) ;
 int VAR_12 ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_13 ;
 scalar_t__* VAR_14 ;
 double* VAR_15 ;

double FUNC_13 (message *VAR_16, int VAR_17) {
  if (FUNC_8 (VAR_16, VAR_17) < 0) {
    return -1;
  }

  if (VAR_13 > 2) {
    FUNC_4 (VAR_12, "bayes_is_spam_prob\n%s\n", VAR_16->text);
  }


  black_list *VAR_18 = VAR_6;
  while (VAR_18->next != ((void*)0) && !FUNC_11 (VAR_16->text, VAR_18->next->text)) {
    VAR_18 = VAR_18->next;
  }

  if (VAR_18->next != ((void*)0)) {
    return 1.0;
  }


  long long VAR_19 = VAR_11.nbad, VAR_20 = VAR_11.ngood, VAR_21 = VAR_19 + VAR_20;

  if (!VAR_19 || !VAR_20) {
    return 0.0;
  }

  VAR_7 = 0;

  if (VAR_7) {
    VAR_9 = 1;
    VAR_10 = VAR_8;
  }
  int VAR_22 = 0;
  char *VAR_23 = FUNC_11 (VAR_16->text, "uid ");
  if (VAR_23 != ((void*)0)) {
    FUNC_10 (VAR_23 + 5, "%d", &VAR_22);
  }
  int VAR_24 = FUNC_7 (VAR_22);
  user *VAR_25 = FUNC_2 (VAR_22);

  long long VAR_26 = 0, VAR_27 = 0, VAR_28 = 0;
  double VAR_29 = 0.0;

  if (VAR_25 != ((void*)0)) {
    FUNC_6 (VAR_25, VAR_24, VAR_2);

    if (!FUNC_12 (VAR_25)) {
      return -2;
    }

    VAR_26 = VAR_25->b.nbad + ((int *)VAR_25->metafile)[VAR_5];
    VAR_27 = VAR_25->b.ngood + ((int *)VAR_25->metafile)[VAR_1];
    VAR_28 = VAR_26 + VAR_27;


    if (VAR_28 >= 50 && VAR_26 * 1.0 / VAR_27 <= 5 * 1.0 * VAR_19 / VAR_20) {
      VAR_29 = (double)VAR_21 / VAR_28 / 10;
    }
  }


  if (FUNC_5 (VAR_16->text) < 0) {
    return 1.0;
  }

  double VAR_30 = 3.5 * VAR_19 / VAR_21, VAR_31 = 1.0 * VAR_20 / VAR_21;

  int VAR_32;

  if (VAR_7) {
    FUNC_4 (VAR_12, "mul_u = %.6lf, ngood = %lld, nbad = %lld, ngood_u = %lld, nbad_u = %lld\n", VAR_29, VAR_20, VAR_19, VAR_27, VAR_26);
  }
  FUNC_3 ("mul_u = %.6lf, ngood = %lld, nbad = %lld, ngood_u = %lld, nbad_u = %lld\n", VAR_29, VAR_20, VAR_19, VAR_27, VAR_26);

  for (VAR_32 = 0; VAR_14[VAR_32]; VAR_32++) {
    double VAR_33 = FUNC_0 (&VAR_11, VAR_14[VAR_32], VAR_1),
           VAR_34 = FUNC_0 (&VAR_11, VAR_14[VAR_32], VAR_5),
           VAR_35 = VAR_33 + VAR_34;

    if (VAR_7) {
      FUNC_4 (VAR_12, "(%.3lf;%.3lf)%c", VAR_33, VAR_34, " \n"[!VAR_14[VAR_32 + 1]]);
    }

    if (VAR_25 != ((void*)0) && VAR_29 > 1e-9) {
      VAR_33 += VAR_29 * (VAR_27 + 0.0) / (VAR_26 + VAR_27 + 0) * VAR_35 / VAR_21;
      VAR_34 += VAR_29 * (VAR_26 + 0.0) / (VAR_26 + VAR_27 + 0) * VAR_35 / VAR_21;

      VAR_33 += FUNC_0 (&VAR_25->b, VAR_14[VAR_32], VAR_1) * VAR_29,
      VAR_34 += FUNC_0 (&VAR_25->b, VAR_14[VAR_32], VAR_5) * VAR_29,

      VAR_33 += FUNC_1 (VAR_25->metafile + 2 * sizeof (int), VAR_14[VAR_32], VAR_1) * VAR_29;
      VAR_34 += FUNC_1 (VAR_25->metafile + 2 * sizeof (int), VAR_14[VAR_32], VAR_5) * VAR_29;
    }

    if (VAR_7) {
      FUNC_4 (VAR_12, "(%.3lf;%.3lf)%c", VAR_33, VAR_34, " \n"[!VAR_14[VAR_32 + 1]]);
    }


    double VAR_36 = VAR_30 * (VAR_33 + (VAR_20 + 1.0) / (VAR_19 + VAR_20 + 1) );
    double VAR_37 = VAR_31 * (VAR_34 + (VAR_19 + 1.0) / (VAR_19 + VAR_20 + 1) );

    if (VAR_7) {
      FUNC_4 (VAR_12, "(%.3lf;%.3lf)%c", VAR_36, VAR_37, " \n"[!VAR_14[VAR_32 + 1]]);
    }

    VAR_15[VAR_32] = VAR_37 / (VAR_36 + VAR_37);

    if (VAR_15[VAR_32] < 0.01) {
      VAR_15[VAR_32] = 0.01;
    }

    if (VAR_15[VAR_32] > 0.99) {
      VAR_15[VAR_32] = 0.99;
    }

    FUNC_3 ("%lld : %.7lf     (%.3lf+%lf;%.3lf+%lf)\n", (long long)VAR_14[VAR_32], VAR_15[VAR_32], VAR_36, VAR_33, VAR_37, VAR_34);
  }

  int VAR_38 = VAR_32;

  VAR_3 = VAR_0 - 1;
  VAR_4 = VAR_38 - VAR_0;

  FUNC_9 (VAR_15, 0, VAR_38 - 1);

  if (VAR_7) {
    for (VAR_32 = 0; VAR_32 < VAR_38; VAR_32++) {
      FUNC_4 (VAR_12, "%.3lf%c", VAR_15[VAR_32], " \n"[VAR_32 + 1 == VAR_38]);
    }
  }

  int VAR_39 = VAR_0;
  int VAR_40 = 0, VAR_41 = VAR_38 - 1;
  VAR_30 = 1.0, VAR_31 = 1.0;

  while (VAR_39-- > 0 && VAR_40 <= VAR_41) {
    if (1.0 < VAR_15[VAR_41] + VAR_15[VAR_40]) {
       VAR_30 *= VAR_15[VAR_41];
       VAR_31 *= 1 - VAR_15[VAR_41--];
    } else {
       VAR_30 *= VAR_15[VAR_40];
       VAR_31 *= 1 - VAR_15[VAR_40++];
    }
  }

  if (VAR_7) {
    FUNC_4 (VAR_12, "RES: %.3lf\n", VAR_30 / (VAR_30 + VAR_31));
  }

  if (VAR_7) {
    FUNC_4 (VAR_12, "%s\n", VAR_8);
  }

  if (VAR_7) {
    VAR_9 = 0;
    VAR_7 = 0;
  }

  return VAR_30 / (VAR_30 + VAR_31);
}
