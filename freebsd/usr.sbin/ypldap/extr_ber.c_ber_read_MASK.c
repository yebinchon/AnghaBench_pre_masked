
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ber {int fd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ber*,int *,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int,int *,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_2(struct ber *VAR_3, void *VAR_4, size_t VAR_5)
{
 u_char *VAR_6 = VAR_4;
 ssize_t VAR_7, VAR_8 = VAR_5;







 while (VAR_8 > 0) {
  if (VAR_3->fd == -1)
   VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_8);
  else
   VAR_7 = FUNC_1(VAR_3->fd, VAR_6, VAR_8);
  if (VAR_7 == -1) {
   if (VAR_2 == VAR_1 || VAR_2 == VAR_0)
    continue;
   return -1;
  }
  if (VAR_7 == 0)
   return (VAR_6 - (u_char *)VAR_4);
  VAR_6 += VAR_7;
  VAR_8 -= VAR_7;
 }
 return (VAR_6 - (u_char *)VAR_4);
}
