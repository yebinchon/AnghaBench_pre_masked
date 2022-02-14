
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
typedef int utmpidlearr ;
typedef int up ;
typedef int resultproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_4(void)
{
 utmpidlearr VAR_8;
 enum clnt_stat VAR_9;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_9 = FUNC_0(VAR_3, VAR_4,
     VAR_2, (xdrproc_t)VAR_7, ((void*)0),
     (xdrproc_t)VAR_6, (char *)&VAR_8,
     (resultproc_t)VAR_5);
 if (VAR_9 != VAR_0 && VAR_9 != VAR_1)
  FUNC_2(1, "%s", FUNC_1(VAR_9));
}
