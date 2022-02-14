
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

int FUNC_7(git_buf *VAR_1, const char *VAR_2, mode_t VAR_3)
{
 int VAR_4;
 mode_t VAR_5;

 FUNC_6(VAR_5 = FUNC_6(0));

 FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_1, "_git2_XXXXXX");

 if (FUNC_0(VAR_1))
  return -1;

 if ((VAR_4 = FUNC_5(VAR_1->ptr)) < 0) {
  FUNC_3(VAR_0,
   "failed to create temporary file '%s'", VAR_1->ptr);
  return -1;
 }

 if (FUNC_4(VAR_1->ptr, (VAR_3 & ~VAR_5))) {
  FUNC_3(VAR_0,
   "failed to set permissions on file '%s'", VAR_1->ptr);
  return -1;
 }

 return VAR_4;
}
