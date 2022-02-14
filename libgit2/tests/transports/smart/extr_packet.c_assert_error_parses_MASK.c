
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; int len; int type; } ;
typedef TYPE_1__ git_pkt_err ;
typedef int git_pkt ;


 size_t VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,char const*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const**,char const*,size_t) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = FUNC_5(VAR_1) + 1;
 const char *VAR_5;
 git_pkt_err *VAR_6;

 FUNC_2(FUNC_4((git_pkt **) &VAR_6, &VAR_5, VAR_1, VAR_4));
 FUNC_0(VAR_6->type, VAR_0);
 FUNC_0(VAR_6->len, VAR_3);
 FUNC_1(VAR_6->error, VAR_2, VAR_3);

 FUNC_3((git_pkt *) VAR_6);
}
