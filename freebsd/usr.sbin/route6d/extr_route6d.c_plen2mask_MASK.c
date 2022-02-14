
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct in6_addr*,int ,int) ;
 int* VAR_0 ;

__attribute__((used)) static struct in6_addr *
FUNC_1(int VAR_1)
{
 static struct in6_addr VAR_2;
 u_char *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2, 0, sizeof(struct in6_addr));
 VAR_3 = (u_char *)&VAR_2;
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++, VAR_3++, VAR_1 -= 8) {
  if (VAR_1 >= 8) {
   *VAR_3 = 0xff;
   continue;
  }
  *VAR_3 = VAR_0[VAR_1];
  break;
 }
 return &VAR_2;
}
