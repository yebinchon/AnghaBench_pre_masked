
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(int *VAR_3, int *VAR_4, int *VAR_5)
{

 if ((*VAR_3 = FUNC_1(VAR_0, VAR_1, 0)) < 0)
  FUNC_0(-1, "%s: socket", VAR_2);
 if (FUNC_2(VAR_0, VAR_1, 0, VAR_4) < 0)
  FUNC_0(-1, "%s: socketpair", VAR_2);
 if (FUNC_2(VAR_0, VAR_1, 0, VAR_5) < 0)
  FUNC_0(-1, "%s: socketpair", VAR_2);
}
