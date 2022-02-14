
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct in_addr*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, uint32_t *VAR_2, uint16_t *VAR_3)
{
 struct in_addr VAR_4;
 char *VAR_5;

 VAR_5 = FUNC_2(VAR_1, ':');
 if (VAR_5 != ((void*)0)) {
  *VAR_5++ = '\0';
  *VAR_3 = (uint16_t)FUNC_3(VAR_5, ((void*)0), 0);
 }

 FUNC_0(VAR_0, VAR_1, &VAR_4);
 *VAR_2 = FUNC_1(VAR_4.s_addr);
}
