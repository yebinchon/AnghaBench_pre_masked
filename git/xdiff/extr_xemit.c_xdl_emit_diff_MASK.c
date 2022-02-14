
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {long nrec; } ;
struct TYPE_16__ {TYPE_7__ xdf2; TYPE_7__ xdf1; } ;
typedef TYPE_1__ xdfenv_t ;
struct TYPE_17__ {long ctxlen; int flags; } ;
typedef TYPE_2__ xdemitconf_t ;
typedef int xdemitcb_t ;
struct TYPE_18__ {long i1; long i2; int chg1; int chg2; struct TYPE_18__* next; } ;
typedef TYPE_3__ xdchange_t ;
struct func_line {int len; int buf; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (long,int ) ;
 long FUNC_1 (long,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__ const*,struct func_line*,long,long) ;
 scalar_t__ FUNC_3 (TYPE_7__*,long) ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_2__ const*,long) ;
 scalar_t__ FUNC_5 (long,long,long,long,int ,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_7__*,long,char*,int *) ;
 TYPE_3__* FUNC_7 (TYPE_3__**,TYPE_2__ const*) ;

int FUNC_8(xdfenv_t *VAR_2, xdchange_t *VAR_3, xdemitcb_t *VAR_4,
    xdemitconf_t const *VAR_5) {
 long VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 xdchange_t *VAR_11, *VAR_12;
 long VAR_13 = -1;
 struct func_line VAR_14 = { 0 };

 for (VAR_11 = VAR_3; VAR_11; VAR_11 = VAR_12->next) {
  VAR_12 = FUNC_7(&VAR_11, VAR_5);
  if (!VAR_11)
   break;

  VAR_6 = FUNC_0(VAR_11->i1 - VAR_5->ctxlen, 0);
  VAR_7 = FUNC_0(VAR_11->i2 - VAR_5->ctxlen, 0);

  if (VAR_5->flags & VAR_0) {
   long VAR_15, VAR_16 = VAR_11->i1;


   if (VAR_16 >= VAR_2->xdf1.nrec) {
    long VAR_17 = VAR_11->i2;





    while (VAR_17 < VAR_2->xdf2.nrec) {
     if (FUNC_4(&VAR_2->xdf2, VAR_5, VAR_17))
      goto post_context_calculation;
     VAR_17++;
    }





    VAR_16 = VAR_2->xdf1.nrec - 1;
   }

   VAR_15 = FUNC_2(VAR_2, VAR_5, ((void*)0), VAR_16, -1);
   while (VAR_15 > 0 && !FUNC_3(&VAR_2->xdf1, VAR_15 - 1) &&
          !FUNC_4(&VAR_2->xdf1, VAR_5, VAR_15 - 1))
    VAR_15--;
   if (VAR_15 < 0)
    VAR_15 = 0;
   if (VAR_15 < VAR_6) {
    VAR_7 = FUNC_0(VAR_7 - (VAR_6 - VAR_15), 0);
    VAR_6 = VAR_15;
   }
  }

 post_context_calculation:
  VAR_10 = VAR_5->ctxlen;
  VAR_10 = FUNC_1(VAR_10, VAR_2->xdf1.nrec - (VAR_12->i1 + VAR_12->chg1));
  VAR_10 = FUNC_1(VAR_10, VAR_2->xdf2.nrec - (VAR_12->i2 + VAR_12->chg2));

  VAR_8 = VAR_12->i1 + VAR_12->chg1 + VAR_10;
  VAR_9 = VAR_12->i2 + VAR_12->chg2 + VAR_10;

  if (VAR_5->flags & VAR_0) {
   long VAR_18 = FUNC_2(VAR_2, VAR_5, ((void*)0),
       VAR_12->i1 + VAR_12->chg1,
       VAR_2->xdf1.nrec);
   while (VAR_18 > 0 && FUNC_3(&VAR_2->xdf1, VAR_18 - 1))
    VAR_18--;
   if (VAR_18 < 0)
    VAR_18 = VAR_2->xdf1.nrec;
   if (VAR_18 > VAR_8) {
    VAR_9 = FUNC_1(VAR_9 + (VAR_18 - VAR_8), VAR_2->xdf2.nrec);
    VAR_8 = VAR_18;
   }






   if (VAR_12->next) {
    long VAR_19 = FUNC_1(VAR_12->next->i1,
       VAR_2->xdf1.nrec - 1);
    if (VAR_19 - VAR_5->ctxlen <= VAR_8 ||
        FUNC_2(VAR_2, VAR_5, ((void*)0), VAR_19, VAR_8) < 0) {
     VAR_12 = VAR_12->next;
     goto post_context_calculation;
    }
   }
  }





  if (VAR_5->flags & VAR_1) {
   FUNC_2(VAR_2, VAR_5, &VAR_14,
          VAR_6 - 1, VAR_13);
   VAR_13 = VAR_6 - 1;
  }
  if (FUNC_5(VAR_6 + 1, VAR_8 - VAR_6, VAR_7 + 1, VAR_9 - VAR_7,
          VAR_14.buf, VAR_14.len, VAR_4) < 0)
   return -1;




  for (; VAR_7 < VAR_11->i2; VAR_7++)
   if (FUNC_6(&VAR_2->xdf2, VAR_7, " ", VAR_4) < 0)
    return -1;

  for (VAR_6 = VAR_11->i1, VAR_7 = VAR_11->i2;; VAR_11 = VAR_11->next) {



   for (; VAR_6 < VAR_11->i1 && VAR_7 < VAR_11->i2; VAR_6++, VAR_7++)
    if (FUNC_6(&VAR_2->xdf2, VAR_7, " ", VAR_4) < 0)
     return -1;




   for (VAR_6 = VAR_11->i1; VAR_6 < VAR_11->i1 + VAR_11->chg1; VAR_6++)
    if (FUNC_6(&VAR_2->xdf1, VAR_6, "-", VAR_4) < 0)
     return -1;




   for (VAR_7 = VAR_11->i2; VAR_7 < VAR_11->i2 + VAR_11->chg2; VAR_7++)
    if (FUNC_6(&VAR_2->xdf2, VAR_7, "+", VAR_4) < 0)
     return -1;

   if (VAR_11 == VAR_12)
    break;
   VAR_6 = VAR_11->i1 + VAR_11->chg1;
   VAR_7 = VAR_11->i2 + VAR_11->chg2;
  }




  for (VAR_7 = VAR_12->i2 + VAR_12->chg2; VAR_7 < VAR_9; VAR_7++)
   if (FUNC_6(&VAR_2->xdf2, VAR_7, " ", VAR_4) < 0)
    return -1;
 }

 return 0;
}
