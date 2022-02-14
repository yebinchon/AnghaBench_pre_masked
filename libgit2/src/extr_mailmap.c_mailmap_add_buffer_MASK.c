
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ remain_len; } ;
typedef TYPE_1__ git_parse_ctx ;
typedef int git_mailmap ;
struct TYPE_13__ {int size; int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,size_t) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int * FUNC_4 (char const*,char,size_t) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(git_mailmap *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 git_parse_ctx VAR_5;


 git_buf VAR_6 = VAR_0;
 git_buf VAR_7 = VAR_0;
 git_buf VAR_8 = VAR_0;
 git_buf VAR_9 = VAR_0;


 if (FUNC_4(VAR_2, '\0', VAR_3) != ((void*)0))
  return -1;

 FUNC_2(&VAR_5, VAR_2, VAR_3);


 while (VAR_5.remain_len > 0) {
  VAR_4 = FUNC_5(
   &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_5);
  if (VAR_4 < 0) {
   VAR_4 = 0;
   FUNC_1(&VAR_5);
   continue;
  }


  VAR_4 = FUNC_3(
   VAR_1, VAR_6.ptr, VAR_6.size, VAR_7.ptr, VAR_7.size,
   VAR_8.ptr, VAR_8.size, VAR_9.ptr, VAR_9.size);
  if (VAR_4 < 0)
   goto cleanup;

  VAR_4 = 0;
 }

cleanup:
 FUNC_0(&VAR_6);
 FUNC_0(&VAR_7);
 FUNC_0(&VAR_8);
 FUNC_0(&VAR_9);
 return VAR_4;
}
