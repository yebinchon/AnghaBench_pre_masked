
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 (char const**,size_t*,char const*) ;

__attribute__((used)) static int FUNC_1(const char **VAR_1, size_t *VAR_2, const char *VAR_3)
{
 size_t VAR_4 = (unsigned char) *(*VAR_1)++ & VAR_0;
 if (VAR_4) {
  *VAR_2 = VAR_4;
  return 0;
 }
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
