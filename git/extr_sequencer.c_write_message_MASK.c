
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_file {int dummy; } ;


 struct lock_file VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct lock_file*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (struct lock_file*,char const*,int ) ;
 int FUNC_5 (struct lock_file*) ;
 scalar_t__ FUNC_6 (int,char*,int) ;
 scalar_t__ FUNC_7 (int,void const*,size_t) ;

__attribute__((used)) static int FUNC_8(const void *VAR_1, size_t VAR_2, const char *VAR_3,
    int VAR_4)
{
 struct lock_file VAR_5 = VAR_0;

 int VAR_6 = FUNC_4(&VAR_5, VAR_3, 0);
 if (VAR_6 < 0)
  return FUNC_3(FUNC_0("could not lock '%s'"), VAR_3);
 if (FUNC_7(VAR_6, VAR_1, VAR_2) < 0) {
  FUNC_3(FUNC_0("could not write to '%s'"), VAR_3);
  FUNC_5(&VAR_5);
  return -1;
 }
 if (VAR_4 && FUNC_6(VAR_6, "\n", 1) < 0) {
  FUNC_3(FUNC_0("could not write eol to '%s'"), VAR_3);
  FUNC_5(&VAR_5);
  return -1;
 }
 if (FUNC_1(&VAR_5) < 0)
  return FUNC_2(FUNC_0("failed to finalize '%s'"), VAR_3);

 return 0;
}
