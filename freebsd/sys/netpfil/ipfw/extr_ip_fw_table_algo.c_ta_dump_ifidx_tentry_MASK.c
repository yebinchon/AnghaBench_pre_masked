
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_info {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct ifentry {int value; TYPE_1__ no; } ;
struct TYPE_6__ {int kidx; } ;
struct TYPE_7__ {int masklen; TYPE_2__ v; int k; } ;
typedef TYPE_3__ ipfw_obj_tentry ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, struct table_info *VAR_2, void *VAR_3,
    ipfw_obj_tentry *VAR_4)
{
 struct ifentry *VAR_5;

 VAR_5 = (struct ifentry *)VAR_3;

 VAR_4->masklen = 8 * VAR_0;
 FUNC_0(&VAR_4->k, VAR_5->no.name, VAR_0);
 VAR_4->v.kidx = VAR_5->value;

 return (0);
}
