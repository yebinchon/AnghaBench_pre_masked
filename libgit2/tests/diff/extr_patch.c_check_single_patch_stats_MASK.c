
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_patch ;
struct TYPE_9__ {scalar_t__ origin; int old_lineno; int new_lineno; } ;
typedef TYPE_1__ git_diff_line ;
struct TYPE_10__ {scalar_t__ status; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int git_diff ;
struct TYPE_11__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (size_t,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int ) ;
 TYPE_2__* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__ const**,int *,size_t,size_t) ;
 int FUNC_13 (size_t*,size_t*,size_t*,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 size_t FUNC_15 (int *,size_t) ;
 size_t FUNC_16 (int *,int,int,int) ;
 int FUNC_17 (TYPE_3__*,int *) ;
 size_t FUNC_18 (char const*) ;

__attribute__((used)) static void FUNC_19(
 git_repository *VAR_5, size_t VAR_6,
 size_t VAR_7, size_t VAR_8, size_t VAR_9, size_t *VAR_10,
 const char *VAR_11)
{
 git_diff *VAR_12;
 git_patch *VAR_13;
 const git_diff_delta *VAR_14;
 size_t VAR_15, VAR_16, VAR_17;

 FUNC_4(FUNC_7(&VAR_12, VAR_5, ((void*)0), ((void*)0)));

 FUNC_1(1, (int)FUNC_8(VAR_12));

 FUNC_4(FUNC_10(&VAR_13, VAR_12, 0));
 FUNC_0((VAR_14 = FUNC_11(VAR_13)) != ((void*)0));
 FUNC_1(VAR_1, (int)VAR_14->status);

 FUNC_1((int)VAR_6, (int)FUNC_14(VAR_13));

 FUNC_4( FUNC_13(
  &VAR_15, &VAR_16, &VAR_17, VAR_13) );

 FUNC_3(VAR_9, VAR_15);
 FUNC_3(VAR_7, VAR_16);
 FUNC_3(VAR_8, VAR_17);

 if (VAR_11 != ((void*)0)) {
  git_buf VAR_18 = VAR_0;
  FUNC_4(FUNC_17(&VAR_18, VAR_13));
  FUNC_2(VAR_11, VAR_18.ptr);
  FUNC_5(&VAR_18);

  FUNC_3(
   FUNC_18(VAR_11), FUNC_16(VAR_13, 1, 1, 1));
 }

 if (VAR_10) {
  if (VAR_10[0])
   FUNC_3(VAR_10[0], FUNC_16(VAR_13, 0, 0, 0));
  if (VAR_10[1])
   FUNC_3(VAR_10[1], FUNC_16(VAR_13, 1, 0, 0));
  if (VAR_10[2])
   FUNC_3(VAR_10[2], FUNC_16(VAR_13, 1, 1, 0));
 }


 for (; VAR_6 > 0; --VAR_6) {
  size_t VAR_19, VAR_20;
  const git_diff_line *VAR_21;
  int VAR_22 = -1, VAR_23 = -1;

  VAR_20 = FUNC_15(VAR_13, VAR_6 - 1);

  for (VAR_19 = 0; VAR_19 < VAR_20; ++VAR_19) {
   int VAR_24 = 1;

   FUNC_4(
    FUNC_12(&VAR_21, VAR_13, VAR_6 - 1, VAR_19));

   if (VAR_21->origin == VAR_2 ||
    VAR_21->origin == VAR_4 ||
    VAR_21->origin == VAR_3)
    VAR_24 = 0;

   if (VAR_21->old_lineno >= 0) {
    if (VAR_23 >= 0)
     FUNC_1(
      VAR_24, VAR_21->old_lineno - VAR_23);
    VAR_23 = VAR_21->old_lineno;
   }

   if (VAR_21->new_lineno >= 0) {
    if (VAR_22 >= 0)
     FUNC_1(
      VAR_24, VAR_21->new_lineno - VAR_22);
    VAR_22 = VAR_21->new_lineno;
   }
  }
 }

 FUNC_9(VAR_13);
 FUNC_6(VAR_12);
}
