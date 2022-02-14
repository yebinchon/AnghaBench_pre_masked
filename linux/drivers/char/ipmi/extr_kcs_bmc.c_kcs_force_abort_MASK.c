
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcs_bmc {int data_in_avail; scalar_t__ data_in_idx; int phase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kcs_bmc*) ;
 int FUNC_1 (struct kcs_bmc*,int ) ;
 int FUNC_2 (struct kcs_bmc*,int ) ;

__attribute__((used)) static void FUNC_3(struct kcs_bmc *VAR_3)
{
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_2);

 VAR_3->phase = VAR_1;
 VAR_3->data_in_avail = 0;
 VAR_3->data_in_idx = 0;
}
