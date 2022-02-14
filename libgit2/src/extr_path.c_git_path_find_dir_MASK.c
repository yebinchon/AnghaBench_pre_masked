
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int ,char*) ;

int FUNC_5(git_buf *VAR_1, const char *VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, ((void*)0));

 if (!VAR_4) {
  char VAR_5[VAR_0];
  if (FUNC_4(VAR_1->ptr, VAR_5) != ((void*)0))
   VAR_4 = FUNC_0(VAR_1, VAR_5);
 }


 if (!VAR_4)
  VAR_4 = (FUNC_1(VAR_1, VAR_1->ptr) < 0) ? -1 : 0;

 if (!VAR_4)
  VAR_4 = FUNC_3(VAR_1);

 return VAR_4;
}
