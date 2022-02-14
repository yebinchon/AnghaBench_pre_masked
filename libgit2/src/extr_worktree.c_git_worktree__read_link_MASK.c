
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;

char *FUNC_9(const char *VAR_1, const char *VAR_2)
{
 git_buf VAR_3 = VAR_0, VAR_4 = VAR_0;

 FUNC_0(VAR_1 && VAR_2);

 if (FUNC_3(&VAR_3, VAR_1, VAR_2) < 0)
  goto err;
 if (FUNC_6(&VAR_4, VAR_3.ptr) < 0)
  goto err;
 FUNC_2(&VAR_3);

 FUNC_4(&VAR_4);

 if (!FUNC_8(VAR_4.ptr))
  return FUNC_1(&VAR_4);

 if (FUNC_5(&VAR_3, VAR_1) < 0)
  goto err;
 if (FUNC_7(&VAR_3, VAR_4.ptr) < 0)
  goto err;
 FUNC_2(&VAR_4);

 return FUNC_1(&VAR_3);

err:
 FUNC_2(&VAR_4);
 FUNC_2(&VAR_3);

 return ((void*)0);
}
