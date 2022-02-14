
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct in_addr {int s_addr; } ;


 int FUNC_0 (char const*,struct in_addr*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char const*,char) ;
 unsigned int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2)
{
 char *VAR_3, *VAR_4;
 struct in_addr VAR_5;

 *VAR_2 = 0xffffffffU;
 VAR_4 = FUNC_2(VAR_0, '/');
 if (VAR_4)
  *VAR_4 = 0;
 if (!FUNC_0(VAR_0, &VAR_5)) {
  if (VAR_4)
   *VAR_4 = '/';
  *VAR_1 = 0;
  return -1;
 }
 *VAR_1 = FUNC_1(VAR_5.s_addr);
 if (VAR_4) {
  unsigned int VAR_6 = FUNC_3(VAR_4 + 1, &VAR_3, 10);

  *VAR_4 = '/';
  if (VAR_3 == VAR_4 + 1 || *VAR_3 || VAR_6 > 32)
   return -1;
  *VAR_2 <<= (32 - VAR_6);
 }
 return 0;
}
