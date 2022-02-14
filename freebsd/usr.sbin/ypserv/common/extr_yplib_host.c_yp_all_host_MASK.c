
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef scalar_t__ u_long ;
struct ypreq_nokey {char* domain; char* map; } ;
struct ypall_callback {scalar_t__ data; int foreach; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int CLIENT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct ypreq_nokey*,int ,scalar_t__*,struct timeval) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 void* VAR_6 ;

int
FUNC_2(CLIENT *VAR_7, char *VAR_8, char *VAR_9,
    struct ypall_callback *VAR_10)
{
 struct ypreq_nokey VAR_11;
 struct timeval VAR_12;
 u_long VAR_13;

 VAR_12.tv_sec = VAR_2;
 VAR_12.tv_usec = 0;

 VAR_11.domain = VAR_8;
 VAR_11.map = VAR_9;
 VAR_5 = VAR_10->foreach;
 VAR_6 = (void *)VAR_10->data;

 (void) FUNC_0(VAR_7, VAR_0,
     (xdrproc_t)VAR_3, &VAR_11,
     (xdrproc_t)VAR_4, &VAR_13, VAR_12);
 if (VAR_13 != VAR_1)
  return FUNC_1(VAR_13);

 return (0);
}
