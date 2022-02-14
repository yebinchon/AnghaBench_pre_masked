
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_4__ {int valdat_len; int valdat_val; } ;
struct TYPE_3__ {int keydat_len; int keydat_val; } ;
struct ypresp_key_val {TYPE_2__ val; TYPE_1__ key; int stat; } ;
struct ypreq_nokey {char* domain; char* map; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct ypreq_nokey*,int ,struct ypresp_key_val*,struct timeval) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct ypresp_key_val*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;

int
FUNC_7(CLIENT *VAR_5, char *VAR_6, char *VAR_7, char **VAR_8,
    int *VAR_9, char **VAR_10, int *VAR_11)
{
 struct ypresp_key_val VAR_12;
 struct ypreq_nokey VAR_13;
 struct timeval VAR_14;
 int VAR_15;

 *VAR_8 = *VAR_10 = ((void*)0);
 *VAR_9 = *VAR_11 = 0;

 VAR_14.tv_sec = VAR_2;
 VAR_14.tv_usec = 0;

 VAR_13.domain = VAR_6;
 VAR_13.map = VAR_7;
 FUNC_4(&VAR_12, 0, sizeof VAR_12);

 VAR_15 = FUNC_0(VAR_5, VAR_1,
     (xdrproc_t)VAR_3, &VAR_13,
     (xdrproc_t)VAR_4, &VAR_12, VAR_14);
 if (VAR_15 != VAR_0)
  FUNC_1(VAR_5, "yp_first_host: clnt_call");
 if ( !(VAR_15 = FUNC_6(VAR_12.stat)) ) {
  *VAR_9 = VAR_12.key.keydat_len;
  *VAR_8 = FUNC_2(*VAR_9+1);
  FUNC_3(*VAR_8, VAR_12.key.keydat_val, *VAR_9);
  (*VAR_8)[*VAR_9] = '\0';
  *VAR_11 = VAR_12.val.valdat_len;
  *VAR_10 = FUNC_2(*VAR_11+1);
  FUNC_3(*VAR_10, VAR_12.val.valdat_val, *VAR_11);
  (*VAR_10)[*VAR_11] = '\0';
 }
 FUNC_5((xdrproc_t)VAR_4, (char *)&VAR_12);

 return (VAR_15);
}
