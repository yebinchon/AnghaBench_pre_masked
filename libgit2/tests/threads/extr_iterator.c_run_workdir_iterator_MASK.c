
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_8__ {scalar_t__ mode; } ;
typedef TYPE_2__ git_index_entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__ const**,int *) ;
 int FUNC_4 (TYPE_2__ const**,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void *FUNC_11(void *VAR_6)
{
 int VAR_7 = 0;
 git_repository *VAR_8;
 git_iterator *VAR_9;
 git_iterator_options VAR_10 = VAR_3;
 const git_index_entry *VAR_11 = ((void*)0);

 VAR_10.flags = VAR_2;

 FUNC_1(FUNC_9(&VAR_8, FUNC_10(VAR_5)));
 FUNC_1(FUNC_6(
  &VAR_9, VAR_8, ((void*)0), ((void*)0), &VAR_10));

 while (!VAR_7) {
  if (VAR_11 && VAR_11->mode == VAR_1) {
   VAR_7 = FUNC_4(&VAR_11, VAR_9);

   if (VAR_7 == VAR_0)
    VAR_7 = FUNC_3(&VAR_11, VAR_9);
  } else {
   VAR_7 = FUNC_3(&VAR_11, VAR_9);
  }

  if (!VAR_7)
   (void)FUNC_5(VAR_9);
 }

 FUNC_0(VAR_4, VAR_7);

 FUNC_7(VAR_9);
 FUNC_8(VAR_8);
 FUNC_2();
 return VAR_6;
}
