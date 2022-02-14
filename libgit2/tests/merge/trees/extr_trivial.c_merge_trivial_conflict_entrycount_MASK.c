
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t) ;

__attribute__((used)) static int FUNC_4(git_index *VAR_0)
{
 const git_index_entry *VAR_1;
 int VAR_2 = 0;
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_0); VAR_3++) {
  FUNC_0(VAR_1 = FUNC_3(VAR_0, VAR_3));

  if (FUNC_1(VAR_1))
   VAR_2++;
 }

 return VAR_2;
}
