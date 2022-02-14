
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* git_iterator_foreach_cb ) (int const*,void*) ;
typedef int git_iterator ;
typedef int git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int const**,int *) ;
 int FUNC_1 (int const**,int *) ;

int FUNC_2(
 git_iterator *VAR_1,
 git_iterator_foreach_cb VAR_2,
 void *VAR_3)
{
 const git_index_entry *VAR_4;
 int VAR_5 = 0;

 if ((VAR_5 = FUNC_1(&VAR_4, VAR_1)) < 0)
  goto done;

 if ((VAR_5 = VAR_2(VAR_4, VAR_3)) != 0)
  goto done;

 while (1) {
  if ((VAR_5 = FUNC_0(&VAR_4, VAR_1)) < 0)
   goto done;

  if ((VAR_5 = VAR_2(VAR_4, VAR_3)) != 0)
   goto done;
 }

done:
 if (VAR_5 == VAR_0)
  VAR_5 = 0;

 return VAR_5;
}
