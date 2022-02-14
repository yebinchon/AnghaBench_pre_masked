
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int u_long ;
typedef int resultproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ,int ,int ,char*,int ,char*,int ,int *) ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_7(int VAR_5, char **VAR_6)
{
 enum clnt_stat VAR_7;
 u_long VAR_8, VAR_9;

 if (VAR_5 != 2)
  FUNC_6();
 VAR_8 = FUNC_3(VAR_6[0]);
 VAR_9 = FUNC_4(VAR_6[1]);
 VAR_7 = FUNC_5(VAR_8, VAR_9, VAR_0,
  (xdrproc_t) VAR_4, (char *)((void*)0), (xdrproc_t) VAR_4,
  (char *)((void*)0), (resultproc_t) VAR_3, ((void*)0));
 if ((VAR_7 != VAR_1) && (VAR_7 != VAR_2))
  FUNC_1(1, "broadcast failed: %s", FUNC_0(VAR_7));
 FUNC_2(0);
}
