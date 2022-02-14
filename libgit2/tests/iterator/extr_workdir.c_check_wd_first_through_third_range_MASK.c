
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {char const* start; char const* end; int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_8__ {int path; } ;
typedef TYPE_2__ git_index_entry ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__ const**,int *) ;
 int FUNC_4 (TYPE_2__ const**,int *) ;
 int FUNC_5 (int **,int *,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
 git_repository *VAR_3, const char *VAR_4, const char *VAR_5)
{
 git_iterator *VAR_6;
 git_iterator_options VAR_7 = VAR_1;
 const git_index_entry *VAR_8;
 int VAR_9, VAR_10;
 static const char *VAR_11[] = { "FIRST", "second", "THIRD", ((void*)0) };

 VAR_7.flags = VAR_0;
 VAR_7.start = VAR_4;
 VAR_7.end = VAR_5;

 FUNC_2(FUNC_5(
  &VAR_6, VAR_3, ((void*)0), ((void*)0), &VAR_7));
 FUNC_2(FUNC_4(&VAR_8, VAR_6));

 for (VAR_10 = 0; VAR_8 != ((void*)0); ++VAR_10) {
  FUNC_1(VAR_11[VAR_10], VAR_8->path);

  VAR_9 = FUNC_3(&VAR_8, VAR_6);
  FUNC_0(!VAR_9 || VAR_9 == VAR_2);
 }

 FUNC_0(VAR_11[VAR_10] == ((void*)0));

 FUNC_6(VAR_6);
}
