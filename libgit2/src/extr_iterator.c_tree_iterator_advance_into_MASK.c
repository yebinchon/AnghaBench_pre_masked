
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree_iterator_frame ;
struct TYPE_4__ {int tree_entry; } ;
typedef TYPE_1__ tree_iterator_entry ;
typedef int tree_iterator ;
typedef int git_iterator ;
typedef int git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const**,int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(
 const git_index_entry **VAR_1, git_iterator *VAR_2)
{
 tree_iterator *VAR_3 = (tree_iterator *)VAR_2;
    tree_iterator_frame *VAR_4;
 tree_iterator_entry *VAR_5;
 int VAR_6;

 if (VAR_1)
  *VAR_1 = ((void*)0);

 if ((VAR_4 = FUNC_5(VAR_3)) == ((void*)0))
  return VAR_0;


 VAR_5 = FUNC_4(VAR_4);





 FUNC_0(FUNC_2(VAR_2) ^ (VAR_5 != ((void*)0)));

 if (VAR_5) {
  if (!FUNC_1(VAR_5->tree_entry))
   return 0;

  if ((VAR_6 = FUNC_6(VAR_3, VAR_5)) < 0)
   return VAR_6;
 }




 return FUNC_3(VAR_1, VAR_2);
}
