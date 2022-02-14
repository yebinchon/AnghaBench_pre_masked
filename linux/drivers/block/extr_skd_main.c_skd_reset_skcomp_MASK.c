
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_device {int skcomp_cycle; scalar_t__ skcomp_ix; int skcomp_table; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct skd_device *VAR_1)
{
 FUNC_0(VAR_1->skcomp_table, 0, VAR_0);

 VAR_1->skcomp_ix = 0;
 VAR_1->skcomp_cycle = 1;
}
