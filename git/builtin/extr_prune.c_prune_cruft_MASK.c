
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 if (FUNC_2(VAR_1, "tmp_obj_"))
  FUNC_1(VAR_2);
 else
  FUNC_0(VAR_0, "bad sha1 file: %s\n", VAR_2);
 return 0;
}
