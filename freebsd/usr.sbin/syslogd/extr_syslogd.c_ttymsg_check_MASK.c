
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct iovec {int dummy; } ;
typedef int errbuf ;
typedef int device ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 char* FUNC_2 (int ) ;
 char const* FUNC_3 (struct iovec*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_4(struct iovec *VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
 static char VAR_7[1024];
 static char VAR_8[1024];
 struct stat VAR_9;

 (void) FUNC_0(VAR_7, sizeof(VAR_7), "%s%s", VAR_1, VAR_5);

 if (FUNC_1(VAR_7, &VAR_9) < 0) {
  (void) FUNC_0(VAR_8, sizeof(VAR_8),
      "%s: %s", VAR_7, FUNC_2(VAR_2));
  return (VAR_8);
 }
 if ((VAR_9.st_mode & VAR_0) == 0)

  return (((void*)0));
 return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
}
