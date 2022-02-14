
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_7__ {scalar_t__ cf_stat; } ;
struct TYPE_6__ {int cl_auth; } ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int,int ,char*,int ,char*,struct timeval) ;
 TYPE_1__* FUNC_3 (char*,int,int,char*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static enum clnt_stat
FUNC_4(char *VAR_2, int VAR_3, int VAR_4, int VAR_5,
    xdrproc_t VAR_6, char *VAR_7, xdrproc_t VAR_8, char *VAR_9)
{
 enum clnt_stat VAR_10;
 struct timeval VAR_11, VAR_12;

 CLIENT *VAR_13 = ((void*)0);

  VAR_13 = FUNC_3(VAR_2, VAR_3, VAR_4, "udp");
 if (VAR_13 == ((void*)0))
  return ((int)VAR_1.cf_stat);
 VAR_11.tv_usec = 0;
 VAR_11.tv_sec = 6;
 FUNC_0(VAR_13, VAR_0, (char *)(void *)&VAR_11);

 VAR_13->cl_auth = FUNC_1();
 VAR_12.tv_sec = 25;
 VAR_12.tv_usec = 0;
 VAR_10 = FUNC_2(VAR_13, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_12);
 return (VAR_10);
}
