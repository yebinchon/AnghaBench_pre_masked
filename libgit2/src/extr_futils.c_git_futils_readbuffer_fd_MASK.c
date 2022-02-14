
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ssize_t ;
typedef int git_file ;
struct TYPE_6__ {char* ptr; size_t size; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (size_t*,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,size_t) ;
 int FUNC_5 (int ,char*) ;
 size_t FUNC_6 (int ,char*,size_t) ;

int FUNC_7(git_buf *VAR_2, git_file VAR_3, size_t VAR_4)
{
 ssize_t VAR_5 = 0;
 size_t VAR_6;

 FUNC_2(VAR_2);

 if (!FUNC_1(VAR_4)) {
  FUNC_5(VAR_0, "read too large");
  return -1;
 }

 FUNC_0(&VAR_6, VAR_4, 1);
 if (FUNC_4(VAR_2, VAR_6) < 0)
  return -1;


 VAR_5 = FUNC_6(VAR_3, VAR_2->ptr, VAR_4);

 if (VAR_5 != (ssize_t)VAR_4) {
  FUNC_5(VAR_1, "failed to read descriptor");
  FUNC_3(VAR_2);
  return -1;
 }

 VAR_2->ptr[VAR_5] = '\0';
 VAR_2->size = VAR_5;

 return 0;
}
