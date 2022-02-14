
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ (* git_vector_cmp ) (void const*,int ) ;
struct TYPE_3__ {size_t length; int * contents; } ;
typedef TYPE_1__ git_vector ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(
 size_t *VAR_1, const git_vector *VAR_2, git_vector_cmp VAR_3, const void *VAR_4)
{
 size_t VAR_5;

 FUNC_0(VAR_2 && VAR_4 && VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_2->length; ++VAR_5) {
  if (VAR_3(VAR_4, VAR_2->contents[VAR_5]) == 0) {
   if (VAR_1)
    *VAR_1 = VAR_5;

   return 0;
  }
 }

 return VAR_0;
}
