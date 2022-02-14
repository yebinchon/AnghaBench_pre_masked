
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct in6_addr*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, struct in6_addr *VAR_2, uint16_t *VAR_3,
    uint8_t *VAR_4)
{
 char *VAR_5;







 VAR_5 = FUNC_1(VAR_1, '@');
 if (VAR_5 != ((void*)0)) {
  *VAR_5++ = '\0';
  *VAR_4 = (uint8_t)FUNC_2(VAR_1, ((void*)0), 0);
  if (*VAR_4 > 7)
   *VAR_4 = 7;
  VAR_1 = VAR_5;
 }
 if (VAR_1[0] == '[')
  VAR_1++;
 VAR_5 = FUNC_1(VAR_1, ']');
 if (VAR_5 != ((void*)0))
  *VAR_5++ = '\0';
 if (VAR_5 != ((void*)0) && *VAR_5 != ':')
  VAR_5 = ((void*)0);
 if (VAR_5 != ((void*)0)) {
  *VAR_5++ = '\0';
  *VAR_3 = (uint16_t)FUNC_2(VAR_5, ((void*)0), 0);
 }
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
