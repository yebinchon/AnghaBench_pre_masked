
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t length; char** contents; } ;
struct TYPE_4__ {size_t pathlist_walk_idx; int (* strncomp ) (char*,char const*,size_t) ;TYPE_3__ pathlist; } ;
typedef TYPE_1__ git_iterator ;


 int FUNC_0 (TYPE_3__*) ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_4(git_iterator *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 size_t VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 if (VAR_0->pathlist.length == 0)
  return 1;

 FUNC_0(&VAR_0->pathlist);

 VAR_3 = FUNC_2(VAR_1);


 if (VAR_3 && VAR_1[VAR_3-1] == '/')
  VAR_3--;

 for (VAR_6 = VAR_0->pathlist_walk_idx; VAR_6 < VAR_0->pathlist.length; VAR_6++) {
  VAR_2 = VAR_0->pathlist.contents[VAR_6];
  VAR_4 = FUNC_2(VAR_2);

  if (VAR_4 && VAR_2[VAR_4-1] == '/')
   VAR_4--;

  VAR_5 = FUNC_1(VAR_3, VAR_4);


  VAR_7 = VAR_0->strncomp(VAR_2, VAR_1, VAR_5);




  if (VAR_7 == 0) {





   if (VAR_2[VAR_5] == '\0' &&
    (VAR_1[VAR_5] == '\0' || VAR_1[VAR_5] == '/'))
    return 1;





   if (VAR_2[VAR_5] == '/' && VAR_1[VAR_5] == '/')
    return 1;
  }


  else if (VAR_7 < 0) {
   VAR_0->pathlist_walk_idx++;
   continue;
  }


  else if (VAR_7 > 0) {
   break;
  }
 }

 return 0;
}
