
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_6__ {int valdat_len; int valdat_val; } ;
struct TYPE_5__ {int keydat_len; int keydat_val; } ;
struct ypresp_key_val {TYPE_3__ val; TYPE_2__ key; int stat; } ;
struct TYPE_4__ {char* keydat_val; int keydat_len; } ;
struct ypreq_key {char* domain; char* map; TYPE_1__ key; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct ypreq_key*,int ,struct ypresp_key_val*,struct timeval) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct ypresp_key_val*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;

int
FUNC_7(CLIENT *VAR_5, char *VAR_6, char *VAR_7, char *VAR_8,
    int VAR_9, char **VAR_10, int *VAR_11, char **VAR_12, int *VAR_13)
{
 struct ypresp_key_val VAR_14;
 struct ypreq_key VAR_15;
 struct timeval VAR_16;
 int VAR_17;

 *VAR_10 = *VAR_12 = ((void*)0);
 *VAR_11 = *VAR_13 = 0;

 VAR_16.tv_sec = VAR_2;
 VAR_16.tv_usec = 0;

 VAR_15.domain = VAR_6;
 VAR_15.map = VAR_7;
 VAR_15.key.keydat_val = VAR_8;
 VAR_15.key.keydat_len = VAR_9;
 FUNC_4(&VAR_14, 0, sizeof VAR_14);

 VAR_17 = FUNC_0(VAR_5, VAR_1,
     (xdrproc_t)VAR_3, &VAR_15,
     (xdrproc_t)VAR_4, &VAR_14, VAR_16);
 if (VAR_17 != VAR_0)
  FUNC_1(VAR_5, "yp_next_host: clnt_call");
 if ( !(VAR_17 = FUNC_6(VAR_14.stat)) ) {
  *VAR_11 = VAR_14.key.keydat_len;
  *VAR_10 = FUNC_2(*VAR_11+1);
  FUNC_3(*VAR_10, VAR_14.key.keydat_val, *VAR_11);
  (*VAR_10)[*VAR_11] = '\0';
  *VAR_13 = VAR_14.val.valdat_len;
  *VAR_12 = FUNC_2(*VAR_13+1);
  FUNC_3(*VAR_12, VAR_14.val.valdat_val, *VAR_13);
  (*VAR_12)[*VAR_13] = '\0';
 }
 FUNC_5((xdrproc_t)VAR_4, (char *)&VAR_14);

 return (VAR_17);
}
