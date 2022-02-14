
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* git_iterator_walk_cb ) (int const**,void*) ;
typedef int git_iterator ;
typedef int git_index_entry ;


 int FUNC_0 (int const**) ;
 int VAR_0 ;
 int ** FUNC_1 (size_t,int) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int const**,int *) ;
 int FUNC_5 (int const**,int *) ;

int FUNC_6(
 git_iterator **VAR_1,
 size_t VAR_2,
 git_iterator_walk_cb VAR_3,
 void *VAR_4)
{
 const git_index_entry **VAR_5;
 const git_index_entry **VAR_6;
 const git_index_entry *VAR_7;
 size_t VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_5 = FUNC_1(VAR_2, sizeof(git_index_entry *));
 VAR_6 = FUNC_1(VAR_2, sizeof(git_index_entry *));

 FUNC_0(VAR_5);
 FUNC_0(VAR_6);


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_10 = FUNC_5(&VAR_5[VAR_8], VAR_1[VAR_8]);

  if (VAR_10 < 0 && VAR_10 != VAR_0)
   goto done;
 }

 while (1) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   VAR_6[VAR_8] = ((void*)0);

  VAR_7 = ((void*)0);


  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   if (VAR_5[VAR_8] == ((void*)0))
    continue;

   if (VAR_7 == ((void*)0)) {
    VAR_7 = VAR_5[VAR_8];
    VAR_6[VAR_8] = VAR_5[VAR_8];
   } else {
    int VAR_11 = FUNC_3(VAR_5[VAR_8], VAR_7);

    if (VAR_11 < 0) {




     for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
      VAR_6[VAR_9] = ((void*)0);

     VAR_7 = VAR_5[VAR_8];
     VAR_6[VAR_8] = VAR_5[VAR_8];
    } else if (VAR_11 == 0) {
     VAR_6[VAR_8] = VAR_5[VAR_8];
    }
   }
  }

  if (VAR_7 == ((void*)0))
   break;

  if ((VAR_10 = VAR_3(VAR_6, VAR_4)) != 0)
   goto done;


  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   if (VAR_6[VAR_8] == ((void*)0))
    continue;

   VAR_10 = FUNC_4(&VAR_5[VAR_8], VAR_1[VAR_8]);

   if (VAR_10 < 0 && VAR_10 != VAR_0)
    goto done;
  }
 }

done:
 FUNC_2((git_index_entry **)VAR_5);
 FUNC_2((git_index_entry **)VAR_6);

 if (VAR_10 == VAR_0)
  VAR_10 = 0;

 return VAR_10;
}
