
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_len; int sin_port; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int md5enable ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (long) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 long FUNC_10 (char*,char**,int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(int VAR_10, char *VAR_11[])
{
 struct sockaddr_in VAR_12;
 long VAR_13, VAR_14, VAR_15;
 char *VAR_16;
 int VAR_17;
 int VAR_18 = 0, VAR_19 = 0;

 if (VAR_10 < 3 || VAR_10 > 5)
  FUNC_11();
 for (VAR_14=3; VAR_14 < VAR_10; VAR_14++) {
  if (FUNC_9(VAR_11[VAR_14], "nonblock") == 0)
   VAR_18 = 1;
  if (FUNC_9(VAR_11[VAR_14], "tcpmd5") == 0)
   VAR_19 = 1;
 }

 FUNC_0(&VAR_12, sizeof(VAR_12));
 VAR_12.sin_len = sizeof(VAR_12);
 VAR_12.sin_family = VAR_0;
 if (FUNC_6(VAR_11[0], &VAR_12.sin_addr) == 0)
  FUNC_3(-1, "listen");

 VAR_15 = FUNC_10(VAR_11[1], &VAR_16, 10);
 if (VAR_15 < 1 || VAR_15 > 65535 || *VAR_16 != '\0')
  FUNC_11();
 VAR_12.sin_port = FUNC_5(VAR_15);

 VAR_13 = FUNC_10(VAR_11[2], &VAR_16, 10);
 if (VAR_13 < 1 || VAR_13 > 100000 || *VAR_16 != '\0')
  FUNC_11();

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_17 = FUNC_8(VAR_6, VAR_7, 0);
  if (VAR_17 == -1)
   FUNC_3(-1, "socket");


  if (FUNC_7(VAR_17, VAR_4, VAR_8,
      &VAR_19, sizeof(VAR_19)) != 0) {
   if (VAR_9 == VAR_2 && VAR_19 > 0)
    FUNC_3(-1, "setsockopt(TCP_MD5SIG)");
   else if (VAR_9 != VAR_2)
    FUNC_12("setsockopt(TCP_MD5SIG)");
  }

  if (VAR_18) {
   if (FUNC_4(VAR_17, VAR_3, VAR_5) != 0)
    FUNC_3(-1, "fcntl(F_SETFL)");

   if (FUNC_2(VAR_17, (struct sockaddr *)&VAR_12,
       sizeof(VAR_12)) == -1 && VAR_9 != VAR_1)
    FUNC_3(-1, "connect");
  } else {
   if (FUNC_2(VAR_17, (struct sockaddr *)&VAR_12,
       sizeof(VAR_12)) == -1)
    FUNC_3(-1, "connect");
  }

  FUNC_1(VAR_17);
 }
}
