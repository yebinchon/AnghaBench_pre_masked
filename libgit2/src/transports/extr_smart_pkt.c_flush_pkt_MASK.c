
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
typedef TYPE_1__ git_pkt ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(git_pkt **VAR_1)
{
 git_pkt *VAR_2;

 VAR_2 = FUNC_1(sizeof(git_pkt));
 FUNC_0(VAR_2);

 VAR_2->type = VAR_0;
 *VAR_1 = VAR_2;

 return 0;
}
