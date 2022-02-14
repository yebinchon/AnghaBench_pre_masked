
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {char const* start; char const* end; scalar_t__ flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int *,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;

__attribute__((used)) static void FUNC_11(
 git_repository *VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 bool VAR_6,
 int VAR_7)
{
 git_index *VAR_8;
 git_iterator *VAR_9;
 git_iterator_options VAR_10 = VAR_1;
 int VAR_11, VAR_12, VAR_13;
 bool VAR_14;

 FUNC_2(FUNC_10(&VAR_8, VAR_3));

 VAR_13 = FUNC_3(VAR_8);
 VAR_14 = ((VAR_13 & VAR_0) != 0);

 if (VAR_6 != VAR_14)
  FUNC_2(FUNC_5(VAR_8, VAR_13 ^ VAR_0));

 VAR_10.flags = 0;
 VAR_10.start = VAR_4;
 VAR_10.end = VAR_5;

 FUNC_2(FUNC_7(&VAR_9, VAR_3, VAR_8, &VAR_10));

 FUNC_0(FUNC_9(VAR_9) == VAR_6);

 for (VAR_12 = 0; !(VAR_11 = FUNC_6(((void*)0), VAR_9)); ++VAR_12)
                   ;

 FUNC_1(VAR_2, VAR_11);
 FUNC_1(VAR_7, VAR_12);

 FUNC_8(VAR_9);
 FUNC_4(VAR_8);
}
