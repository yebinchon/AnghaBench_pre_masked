
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_9__ {int entries; int entries_search_path; int ignore_case; } ;
typedef TYPE_2__ git_index ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (size_t*,int *,int ,char*) ;
 TYPE_1__* FUNC_4 (int *,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 int * FUNC_6 (char*,char) ;
 size_t FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,size_t) ;
 scalar_t__ FUNC_9 (char*,char*,size_t) ;
 char* FUNC_10 (char*,char) ;

__attribute__((used)) static int FUNC_11(
 git_index *VAR_0,
 git_index_entry *VAR_1,
 git_index_entry *VAR_2)
{
 const git_index_entry *VAR_3, *VAR_4 = ((void*)0);
 char *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8, VAR_9;

 if (!VAR_0->ignore_case)
  return 0;


 if (VAR_2) {
  FUNC_5((char *)VAR_1->path, VAR_2->path, FUNC_7(VAR_2->path));
  return 0;
 }


 if (FUNC_6(VAR_1->path, '/') == ((void*)0))
  return 0;

 if ((VAR_5 = FUNC_2(VAR_1->path)) == ((void*)0))
  return -1;




 while (!VAR_4 && (VAR_6 = FUNC_10(VAR_5, '/'))) {
  VAR_6[1] = '\0';

  VAR_8 = FUNC_7(VAR_5);

  FUNC_3(
   &VAR_7, &VAR_0->entries, VAR_0->entries_search_path, VAR_5);

  while ((VAR_3 = FUNC_4(&VAR_0->entries, VAR_7))) {
   if (FUNC_0(VAR_3) != 0) {

   } else if (FUNC_9(VAR_5, VAR_3->path, VAR_8) == 0) {

    VAR_4 = VAR_3;
    VAR_9 = VAR_8;
    break;
   } else if (FUNC_8(VAR_5, VAR_3->path, VAR_8) == 0) {




    if (!VAR_4) {
     VAR_4 = VAR_3;
     VAR_9 = VAR_8;
    }
   } else {
    break;
   }

   VAR_7++;
  }

  VAR_6[0] = '\0';
 }

 if (VAR_4)
  FUNC_5((char *)VAR_1->path, VAR_4->path, VAR_9);

 FUNC_1(VAR_5);
 return 0;
}
