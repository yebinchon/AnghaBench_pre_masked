
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int,char*,int,int ,struct sockaddr*,int ) ;
 int FUNC_4 (char*,size_t,char*,scalar_t__) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* VAR_11 ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int,char*,int) ;

__attribute__((used)) static int
FUNC_9(int VAR_12, char *VAR_13, size_t VAR_14, ssize_t VAR_15, struct sockaddr *VAR_16,
    socklen_t VAR_17)
{
 ssize_t VAR_18;

 if (VAR_15 == -1)
  FUNC_0(VAR_3, "read()");
 if (VAR_15 == 0)
  FUNC_1(VAR_2, "EOF");
 if ((size_t)VAR_15 > (VAR_14 - 1))
  FUNC_1(VAR_1, "Input too long");

 VAR_13[VAR_15-1] = '\0';
 if (VAR_5 == 0 && VAR_8 == 0) {
  if (FUNC_6(VAR_13, "START ", 6) != 0)
   FUNC_1(VAR_4, "Not received START on first "
       "connect: %s", VAR_13);
  if (VAR_15 < 8)
   FUNC_1(VAR_4, "START without test case name: %s",
       VAR_13);
  if (FUNC_5(VAR_13+6, VAR_11) != 0)
   FUNC_1(VAR_4, "START test case does not match "
       "'%s': '%s'", VAR_11, VAR_13+6);
 }

 if (VAR_6 > 0)
  FUNC_2(VAR_10, "<< %s: %s\n", VAR_11, VAR_13);

 if (VAR_9 != (u_int)-1)
  VAR_15 = FUNC_4(VAR_13, VAR_14, "FIB %u\n", VAR_9);


 if (VAR_6 > 0) {
  VAR_13[VAR_15-1] = '\0';
  FUNC_2(VAR_10, ">> %s: %s\n", VAR_11, VAR_13);
 }


 VAR_13[VAR_15-1] = '\n';

 if (VAR_16 != ((void*)0)) {
  VAR_18 = FUNC_3(VAR_12, VAR_13, VAR_15, 0, VAR_16, VAR_17);
 } else
  VAR_18 = FUNC_8(VAR_12, VAR_13, VAR_15);

 if (VAR_18 == -1 && VAR_16 != ((void*)0) && VAR_7 == VAR_0)
  FUNC_7("ignored expected: sendto(%s, %zd)", VAR_13, VAR_15);
 else if (VAR_18 == -1 && (VAR_16 == ((void*)0) || VAR_7 != VAR_0))
  FUNC_0(VAR_3, "write(%s, %zd)", VAR_13, VAR_15);
 else if (VAR_18 != VAR_15)
  FUNC_0(VAR_3, "short write(%s, %zd) %zd", VAR_13, VAR_15, VAR_18);


 VAR_5++;


 if (FUNC_6(VAR_13, "DONE", 4) == 0)
  return (-2);
 return (0);
}
