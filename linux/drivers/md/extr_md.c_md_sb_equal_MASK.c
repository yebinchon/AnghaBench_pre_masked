
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nr_disks; } ;
typedef TYPE_1__ mdp_super_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(mdp_super_t *VAR_2, mdp_super_t *VAR_3)
{
 int VAR_4;
 mdp_super_t *VAR_5, *VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5),VAR_0);
 VAR_6 = FUNC_1(sizeof(*VAR_6),VAR_0);

 if (!VAR_5 || !VAR_6) {
  VAR_4 = 0;
  goto abort;
 }

 *VAR_5 = *VAR_2;
 *VAR_6 = *VAR_3;




 VAR_5->nr_disks = 0;
 VAR_6->nr_disks = 0;

 VAR_4 = (FUNC_2(VAR_5, VAR_6, VAR_1 * 4) == 0);
abort:
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 return VAR_4;
}
