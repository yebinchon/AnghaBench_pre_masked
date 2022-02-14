
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int * contents; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t*,size_t,size_t) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

int FUNC_4(git_vector *VAR_0, size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0->length - VAR_2;
 size_t VAR_4 = 0;

 FUNC_0(VAR_2 > 0);

 if (FUNC_1(&VAR_4, VAR_1, VAR_2))
  FUNC_0(0);

 FUNC_0(VAR_4 <= VAR_0->length);

 if (VAR_4 < VAR_0->length)
  FUNC_2(&VAR_0->contents[VAR_1], &VAR_0->contents[VAR_4],
   sizeof(void *) * (VAR_0->length - VAR_4));

 FUNC_3(&VAR_0->contents[VAR_3], 0, sizeof(void *) * VAR_2);

 VAR_0->length = VAR_3;
 return 0;
}
