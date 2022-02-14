
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; } ;
typedef TYPE_1__ git_diff_delta ;
typedef int git_diff ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static size_t FUNC_2(git_diff *VAR_1)
{
 const git_diff_delta *VAR_2;
 size_t VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_3);

  if (VAR_2->status != VAR_0)
   VAR_4++;
 }

 return VAR_4;
}
