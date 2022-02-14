
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int flags; } ;
typedef TYPE_3__ xpparam_t ;
struct TYPE_25__ {char* ancestor; char* file1; char* file2; int level; int style; int favor; int marker_size; TYPE_3__ xpp; } ;
typedef TYPE_4__ xmparam_t ;
typedef int xdmerge_t ;
struct TYPE_23__ {int nrec; } ;
struct TYPE_22__ {int nrec; } ;
struct TYPE_26__ {TYPE_2__ xdf1; TYPE_1__ xdf2; } ;
typedef TYPE_5__ xdfenv_t ;
struct TYPE_27__ {int i1; int chg1; int i2; int chg2; struct TYPE_27__* next; } ;
typedef TYPE_6__ xdchange_t ;
struct TYPE_28__ {size_t size; int * ptr; } ;
typedef TYPE_7__ mmbuffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int **,int,int,int,int,int,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (size_t*,TYPE_5__*,char const* const,TYPE_5__*,char const* const,char const* const,int,int *,int *,int,int) ;
 int * FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int,TYPE_5__*,int,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_5__*,int *,TYPE_3__ const*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int *,int) ;

__attribute__((used)) static int FUNC_7(xdfenv_t *VAR_4, xdchange_t *VAR_5,
  xdfenv_t *VAR_6, xdchange_t *VAR_7,
  xmparam_t const *VAR_8, mmbuffer_t *VAR_9)
{
 xdmerge_t *VAR_10, *VAR_11;
 xpparam_t const *VAR_12 = &VAR_8->xpp;
 const char *const VAR_13 = VAR_8->ancestor;
 const char *const VAR_14 = VAR_8->file1;
 const char *const VAR_15 = VAR_8->file2;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22 = VAR_8->level;
 int VAR_23 = VAR_8->style;
 int VAR_24 = VAR_8->favor;

 if (VAR_23 == VAR_0) {




  if (VAR_1 < VAR_22)
   VAR_22 = VAR_1;
 }

 VAR_11 = VAR_10 = ((void*)0);

 while (VAR_5 && VAR_7) {
  if (!VAR_10)
   VAR_10 = VAR_11;
  if (VAR_5->i1 + VAR_5->chg1 < VAR_7->i1) {
   VAR_16 = VAR_5->i1;
   VAR_17 = VAR_5->i2;
   VAR_18 = VAR_7->i2 - VAR_7->i1 + VAR_5->i1;
   VAR_19 = VAR_5->chg1;
   VAR_20 = VAR_5->chg2;
   VAR_21 = VAR_5->chg1;
   if (FUNC_0(&VAR_11, 1,
          VAR_16, VAR_19, VAR_17, VAR_20, VAR_18, VAR_21)) {
    FUNC_1(VAR_10);
    return -1;
   }
   VAR_5 = VAR_5->next;
   continue;
  }
  if (VAR_7->i1 + VAR_7->chg1 < VAR_5->i1) {
   VAR_16 = VAR_7->i1;
   VAR_17 = VAR_5->i2 - VAR_5->i1 + VAR_7->i1;
   VAR_18 = VAR_7->i2;
   VAR_19 = VAR_7->chg1;
   VAR_20 = VAR_7->chg1;
   VAR_21 = VAR_7->chg2;
   if (FUNC_0(&VAR_11, 2,
          VAR_16, VAR_19, VAR_17, VAR_20, VAR_18, VAR_21)) {
    FUNC_1(VAR_10);
    return -1;
   }
   VAR_7 = VAR_7->next;
   continue;
  }
  if (VAR_22 == VAR_2 || VAR_5->i1 != VAR_7->i1 ||
    VAR_5->chg1 != VAR_7->chg1 ||
    VAR_5->chg2 != VAR_7->chg2 ||
    FUNC_4(VAR_4, VAR_5->i2,
     VAR_6, VAR_7->i2,
     VAR_5->chg2, VAR_12->flags)) {

   int VAR_25 = VAR_5->i1 - VAR_7->i1;
   int VAR_26 = VAR_25 + VAR_5->chg1 - VAR_7->chg1;

   VAR_16 = VAR_5->i1;
   VAR_17 = VAR_5->i2;
   VAR_18 = VAR_7->i2;
   if (VAR_25 > 0) {
    VAR_16 -= VAR_25;
    VAR_17 -= VAR_25;
   }
   else
    VAR_18 += VAR_25;
   VAR_19 = VAR_5->i1 + VAR_5->chg1 - VAR_16;
   VAR_20 = VAR_5->i2 + VAR_5->chg2 - VAR_17;
   VAR_21 = VAR_7->i2 + VAR_7->chg2 - VAR_18;
   if (VAR_26 < 0) {
    VAR_19 -= VAR_26;
    VAR_20 -= VAR_26;
   } else
    VAR_21 += VAR_26;
   if (FUNC_0(&VAR_11, 0,
          VAR_16, VAR_19, VAR_17, VAR_20, VAR_18, VAR_21)) {
    FUNC_1(VAR_10);
    return -1;
   }
  }

  VAR_17 = VAR_5->i1 + VAR_5->chg1;
  VAR_18 = VAR_7->i1 + VAR_7->chg1;

  if (VAR_17 >= VAR_18)
   VAR_7 = VAR_7->next;
  if (VAR_18 >= VAR_17)
   VAR_5 = VAR_5->next;
 }
 while (VAR_5) {
  if (!VAR_10)
   VAR_10 = VAR_11;
  VAR_16 = VAR_5->i1;
  VAR_17 = VAR_5->i2;
  VAR_18 = VAR_5->i1 + VAR_6->xdf2.nrec - VAR_6->xdf1.nrec;
  VAR_19 = VAR_5->chg1;
  VAR_20 = VAR_5->chg2;
  VAR_21 = VAR_5->chg1;
  if (FUNC_0(&VAR_11, 1,
         VAR_16, VAR_19, VAR_17, VAR_20, VAR_18, VAR_21)) {
   FUNC_1(VAR_10);
   return -1;
  }
  VAR_5 = VAR_5->next;
 }
 while (VAR_7) {
  if (!VAR_10)
   VAR_10 = VAR_11;
  VAR_16 = VAR_7->i1;
  VAR_17 = VAR_7->i1 + VAR_4->xdf2.nrec - VAR_4->xdf1.nrec;
  VAR_18 = VAR_7->i2;
  VAR_19 = VAR_7->chg1;
  VAR_20 = VAR_7->chg1;
  VAR_21 = VAR_7->chg2;
  if (FUNC_0(&VAR_11, 2,
         VAR_16, VAR_19, VAR_17, VAR_20, VAR_18, VAR_21)) {
   FUNC_1(VAR_10);
   return -1;
  }
  VAR_7 = VAR_7->next;
 }
 if (!VAR_10)
  VAR_10 = VAR_11;

 if (VAR_3 <= VAR_22 &&
     (FUNC_5(VAR_4, VAR_6, VAR_10, VAR_12) < 0 ||
      FUNC_6(VAR_4, VAR_10,
     VAR_3 < VAR_22) < 0)) {
  FUNC_1(VAR_10);
  return -1;
 }

 if (VAR_9) {
  int VAR_27 = VAR_8->marker_size;
  size_t VAR_28;

  if (FUNC_2(&VAR_28, VAR_4, VAR_14, VAR_6, VAR_15,
       VAR_13,
       VAR_24, VAR_10, ((void*)0), VAR_23,
       VAR_27) < 0)
   return -1;

  VAR_9->ptr = FUNC_3(VAR_28);
  if (!VAR_9->ptr) {
   FUNC_1(VAR_10);
   return -1;
  }
  VAR_9->size = VAR_28;
  if (FUNC_2(&VAR_28, VAR_4, VAR_14, VAR_6, VAR_15,
          VAR_13, VAR_24, VAR_10,
          VAR_9->ptr, VAR_23, VAR_27) < 0)
   return -1;
 }
 return FUNC_1(VAR_10);
}
