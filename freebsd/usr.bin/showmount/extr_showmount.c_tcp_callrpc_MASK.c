
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {scalar_t__ cf_stat; } ;
typedef int CLIENT ;


 scalar_t__ FUNC_0 (int *,int,int ,char*,int ,char*,struct timeval) ;
 int * FUNC_1 (char const*,int,int,char*) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;

int
FUNC_3(const char *VAR_1, int VAR_2, int VAR_3, int VAR_4,
    xdrproc_t VAR_5, char *VAR_6, xdrproc_t VAR_7, char *VAR_8)
{
 CLIENT *VAR_9;
 struct timeval VAR_10;
 int VAR_11;

 if ((VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, "tcp")) == ((void*)0) &&
     (VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, "udp")) == ((void*)0))
  return ((int) VAR_0.cf_stat);

 VAR_10.tv_sec = 25;
 VAR_10.tv_usec = 0;
 VAR_11 = (int) FUNC_0(VAR_9, VAR_4,
          VAR_5, VAR_6,
          VAR_7, VAR_8,
          VAR_10);
 FUNC_2(VAR_9);
  return VAR_11;
}
