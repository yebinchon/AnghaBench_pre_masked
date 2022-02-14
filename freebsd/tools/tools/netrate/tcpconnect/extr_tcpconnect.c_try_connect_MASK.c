
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct fd_set {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,struct fd_set*) ;
 int FUNC_1 (struct fd_set*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int,int ,int ,int*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,struct fd_set*,struct fd_set*,struct fd_set*,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(struct sockaddr_in *VAR_8)
{
 struct
 fd_set VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_8(VAR_4, VAR_5, 0);
 if (VAR_11 < 0)
  FUNC_4(-1, "socket(PF_INET, SOCK_STREAM)");

 VAR_10 = 1;
 if (FUNC_5(VAR_11, VAR_3, VAR_2, &VAR_10) < 0)
  FUNC_4(-1, "fcntl(s, FIOBIO, 1)");

 FUNC_1(&VAR_9);
 FUNC_0(VAR_11, &VAR_9);

 if (FUNC_3(VAR_11, (struct sockaddr *)VAR_8, sizeof(*VAR_8)) < 0 &&
     VAR_6 != VAR_0)
  FUNC_4(-1, "connect(%s)", FUNC_6(VAR_8->sin_addr));

 if (FUNC_7(VAR_11 + 1, &VAR_9, &VAR_9, &VAR_9, ((void*)0)) < 0) {
  if ((VAR_6 == VAR_1 && !VAR_7) || (VAR_6 != VAR_1))
   FUNC_4(-1, "select");
  return (-1);
 }

 FUNC_2(VAR_11);
 return (0);
}
