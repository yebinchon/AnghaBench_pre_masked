
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ git_pkt ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,char const*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,char const**,char const*,size_t) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1)
{
 size_t VAR_2 = FUNC_5(VAR_1) + 1;
 const char *VAR_3;
 git_pkt *VAR_4;

 FUNC_2(FUNC_4((git_pkt **) &VAR_4, &VAR_3, VAR_1, VAR_2));
 FUNC_0(VAR_4->type, VAR_0);
 FUNC_1(VAR_3, VAR_1 + 7, VAR_2 - 7);

 FUNC_3((git_pkt *) VAR_4);
}
