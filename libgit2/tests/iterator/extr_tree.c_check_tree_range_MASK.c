
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
struct TYPE_4__ {char const* start; char const* end; int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
 git_repository *VAR_4,
 const char *VAR_5,
 const char *VAR_6,
 bool VAR_7,
 int VAR_8)
{
 git_tree *VAR_9;
 git_iterator *VAR_10;
 git_iterator_options VAR_11 = VAR_2;
 int VAR_12, VAR_13;

 VAR_11.flags = VAR_7 ? VAR_1 : VAR_0;
 VAR_11.start = VAR_5;
 VAR_11.end = VAR_6;

 FUNC_1(FUNC_5(&VAR_9, VAR_4));

 FUNC_1(FUNC_3(&VAR_10, VAR_9, &VAR_11));

 for (VAR_13 = 0; !(VAR_12 = FUNC_2(((void*)0), VAR_10)); ++VAR_13)
                   ;

 FUNC_0(VAR_3, VAR_12);
 FUNC_0(VAR_8, VAR_13);

 FUNC_4(VAR_10);
 FUNC_6(VAR_9);
}
