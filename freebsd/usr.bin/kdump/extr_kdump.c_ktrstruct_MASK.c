
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t ss_len; } ;
struct sockaddr_storage {size_t ss_len; } ;
struct sockaddr {int dummy; } ;
struct itimerval {size_t ss_len; } ;
typedef int ss ;
typedef struct stat cap_rights_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (struct stat*) ;
 int FUNC_2 (struct stat*) ;
 int FUNC_3 (struct sockaddr*) ;
 int FUNC_4 (struct stat*) ;
 int FUNC_5 (struct stat*,char*,size_t) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

void
FUNC_8(char *VAR_0, size_t VAR_1)
{
 char *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;
 int VAR_6;
 cap_rights_t VAR_7;
 struct itimerval VAR_8;
 struct stat VAR_9;
 struct sockaddr_storage VAR_10;

 for (VAR_2 = VAR_0, VAR_4 = 0;
      VAR_4 < VAR_1 && VAR_2[VAR_4] != '\0';
      ++VAR_4)
               ;
 if (VAR_4 == VAR_1)
  goto invalid;
 if (VAR_2[VAR_4] != '\0')
  goto invalid;
 VAR_3 = VAR_0 + VAR_4 + 1;
 VAR_5 = VAR_1 - VAR_4 - 1;
 if (VAR_5 == 0)
  goto invalid;

 for (VAR_6 = 0; VAR_6 < (int)VAR_4; ++VAR_6)
  if (!FUNC_0(VAR_2[VAR_6]))
   goto invalid;
 if (FUNC_7(VAR_2, "caprights") == 0) {
  if (VAR_5 != sizeof(cap_rights_t))
   goto invalid;
  FUNC_5(&VAR_7, VAR_3, VAR_5);
  FUNC_1(&VAR_7);
 } else if (FUNC_7(VAR_2, "itimerval") == 0) {
  if (VAR_5 != sizeof(struct itimerval))
   goto invalid;
  FUNC_5(&VAR_8, VAR_3, VAR_5);
  FUNC_2(&VAR_8);
 } else if (FUNC_7(VAR_2, "stat") == 0) {
  if (VAR_5 != sizeof(struct stat))
   goto invalid;
  FUNC_5(&VAR_9, VAR_3, VAR_5);
  FUNC_4(&VAR_9);
 } else if (FUNC_7(VAR_2, "sockaddr") == 0) {
  if (VAR_5 > sizeof(VAR_10))
   goto invalid;
  FUNC_5(&VAR_10, VAR_3, VAR_5);
  if (VAR_5 != VAR_10.ss_len)
   goto invalid;
  FUNC_3((struct sockaddr *)&VAR_10);
 } else {
  FUNC_6("unknown structure\n");
 }
 return;
invalid:
 FUNC_6("invalid record\n");
}
