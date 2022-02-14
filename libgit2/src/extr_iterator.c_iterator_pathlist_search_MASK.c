
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int iterator_pathlist_search_t ;
typedef int git_vector_cmp ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_6__ {scalar_t__ (* prefixcomp ) (char const*,char const*) ;TYPE_3__ pathlist; scalar_t__ strcomp; } ;
typedef TYPE_1__ git_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (size_t*,TYPE_3__*,int ,char const*) ;
 char* FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static iterator_pathlist_search_t FUNC_5(
 git_iterator *VAR_5, const char *VAR_6, size_t VAR_7)
{
 const char *VAR_8;
 size_t VAR_9;
 int VAR_10;

 if (VAR_5->pathlist.length == 0)
  return VAR_0;

 FUNC_3(&VAR_5->pathlist);

 VAR_10 = FUNC_1(&VAR_9, &VAR_5->pathlist,
  (git_vector_cmp)VAR_5->strcomp, VAR_6);





 if (VAR_10 == 0) {
  if (VAR_7 && VAR_6[VAR_7-1] == '/')
   return VAR_1;

  return VAR_2;
 }





 while ((VAR_8 = FUNC_2(&VAR_5->pathlist, VAR_9)) != ((void*)0)) {
  if (VAR_5->prefixcomp(VAR_8, VAR_6) != 0)
   break;


  FUNC_0(VAR_8[VAR_7]);


  if (VAR_8[VAR_7] == '/') {
   return (VAR_8[VAR_7+1] == '\0') ?
    VAR_1 :
    VAR_3;
  }

  if (VAR_8[VAR_7] > '/')
   break;

  VAR_9++;
 }

 return VAR_4;
}
