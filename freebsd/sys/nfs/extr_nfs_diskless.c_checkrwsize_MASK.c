
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,unsigned long) ;

__attribute__((used)) static int
FUNC_1(unsigned long VAR_0, const char *VAR_1)
{






 if (!(4 <= VAR_0 && VAR_0 <= 32*1024)) {
  FUNC_0("nfs_parse_options: invalid %s %lu ignored\n", VAR_1, VAR_0);
  return 0;
 } else
  return 1;
}
