
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct ypresp_maplist {int stat; struct ypmaplist* maps; } ;
struct ypmaplist {int dummy; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,char**,int ,struct ypresp_maplist*,struct timeval) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ypresp_maplist*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;

int
FUNC_4(CLIENT *VAR_5, char *VAR_6, struct ypmaplist **VAR_7)
{
 struct ypresp_maplist VAR_8;
 struct timeval VAR_9;
 int VAR_10;

 VAR_9.tv_sec = VAR_2;
 VAR_9.tv_usec = 0;

 FUNC_2(&VAR_8, 0, sizeof VAR_8);

 VAR_10 = FUNC_0(VAR_5, VAR_1,
     (xdrproc_t)VAR_3, &VAR_6,
     (xdrproc_t)VAR_4, &VAR_8, VAR_9);
 if (VAR_10 != VAR_0)
  FUNC_1(VAR_5, "yp_maplist: clnt_call");
 *VAR_7 = VAR_8.maps;


 return FUNC_3(VAR_8.stat);
}
