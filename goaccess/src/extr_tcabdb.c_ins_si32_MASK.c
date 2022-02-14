
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (void*,char const*,int ,int*,int) ;

__attribute__((used)) static int
FUNC_3 (void *VAR_0, const char *VAR_1, int VAR_2)
{
  if (!VAR_0)
    return -1;


  if (!FUNC_2 (VAR_0, VAR_1, FUNC_1 (VAR_1), &VAR_2, sizeof (int)))
    FUNC_0 (("Unable to tcadbput\n"));

  return 0;
}
