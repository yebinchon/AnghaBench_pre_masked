
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * par; } ;
struct dn_fsk {TYPE_1__ fs; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int,int,char*) ;

__attribute__((used)) static int
FUNC_2(struct dn_fsk *VAR_1)
{
 FUNC_1(&VAR_1->fs.par[0], 1, 1, VAR_0, "qfq weight");
 FUNC_1(&VAR_1->fs.par[1], 1500, 1, 2000, "qfq maxlen");
 FUNC_0("weight %d len %d\n", VAR_1->fs.par[0], VAR_1->fs.par[1]);
 return 0;
}
