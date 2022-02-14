
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct ypresp_master {int peer; int stat; } ;
struct ypreq_nokey {char* domain; char* map; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct ypreq_nokey*,int ,struct ypresp_master*,struct timeval) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ypresp_master*,int ,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;

int
FUNC_6(CLIENT *VAR_5, char *VAR_6, char *VAR_7, char **VAR_8)
{
 struct ypresp_master VAR_9;
 struct ypreq_nokey VAR_10;
 struct timeval VAR_11;
 int VAR_12;

 VAR_11.tv_sec = VAR_2;
 VAR_11.tv_usec = 0;
 VAR_10.domain = VAR_6;
 VAR_10.map = VAR_7;

 FUNC_2(&VAR_9, 0, sizeof VAR_9);

 VAR_12 = FUNC_0(VAR_5, VAR_1,
     (xdrproc_t)VAR_3, &VAR_10,
     (xdrproc_t)VAR_4, &VAR_9, VAR_11);
 if (VAR_12 != VAR_0)
  FUNC_1(VAR_5, "yp_master: clnt_call");
 if (!(VAR_12 = FUNC_5(VAR_9.stat)))
  *VAR_8 = FUNC_3(VAR_9.peer);
 FUNC_4((xdrproc_t)VAR_4, (char *)&VAR_9);

 return (VAR_12);
}
