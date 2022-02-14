
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ref; int type; } ;
typedef TYPE_1__ git_pkt_ok ;
typedef int git_pkt ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const**,char const*,size_t) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, const char *VAR_2)
{
 size_t VAR_3 = FUNC_5(VAR_1) + 1;
 const char *VAR_4;
 git_pkt_ok *VAR_5;

 FUNC_2(FUNC_4((git_pkt **) &VAR_5, &VAR_4, VAR_1, VAR_3));
 FUNC_0(VAR_5->type, VAR_0);
 FUNC_1(VAR_5->ref, VAR_2, FUNC_5(VAR_2));

 FUNC_3((git_pkt *) VAR_5);
}
