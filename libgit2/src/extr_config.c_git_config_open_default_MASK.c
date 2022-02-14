
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **) ;

int FUNC_9(git_config **VAR_5)
{
 int VAR_6;
 git_config *VAR_7 = ((void*)0);
 git_buf VAR_8 = VAR_0;

 if ((VAR_6 = FUNC_8(&VAR_7)) < 0)
  return VAR_6;

 if (!FUNC_3(&VAR_8) || !FUNC_1(&VAR_8)) {
  VAR_6 = FUNC_2(VAR_7, VAR_8.ptr,
   VAR_1, ((void*)0), 0);
 }

 if (!VAR_6 && !FUNC_6(&VAR_8))
  VAR_6 = FUNC_2(VAR_7, VAR_8.ptr,
   VAR_4, ((void*)0), 0);

 if (!VAR_6 && !FUNC_5(&VAR_8))
  VAR_6 = FUNC_2(VAR_7, VAR_8.ptr,
   VAR_3, ((void*)0), 0);

 if (!VAR_6 && !FUNC_4(&VAR_8))
  VAR_6 = FUNC_2(VAR_7, VAR_8.ptr,
   VAR_2, ((void*)0), 0);

 FUNC_0(&VAR_8);

 if (VAR_6) {
  FUNC_7(VAR_7);
  VAR_7 = ((void*)0);
 }

 *VAR_5 = VAR_7;

 return VAR_6;
}
