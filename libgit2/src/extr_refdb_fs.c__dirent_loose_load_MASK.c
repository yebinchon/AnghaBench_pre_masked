
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int gitpath; int direach_flags; } ;
typedef TYPE_1__ refdb_fs_backend ;
struct TYPE_9__ {char* ptr; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int (*) (void*,TYPE_2__*),TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_1, git_buf *VAR_2)
{
 refdb_fs_backend *VAR_3 = VAR_1;
 const char *VAR_4;

 if (FUNC_0(VAR_2->ptr, ".lock") == 0)
  return 0;

 if (FUNC_3(VAR_2->ptr)) {
  int VAR_5 = FUNC_2(
   VAR_2, VAR_3->direach_flags, FUNC_6, VAR_3);

  if (VAR_5 == VAR_0) {
   FUNC_1();
   return 0;
  }

  return VAR_5;
 }

 VAR_4 = VAR_2->ptr + FUNC_5(VAR_3->gitpath);

 return FUNC_4(VAR_3, VAR_4);
}
