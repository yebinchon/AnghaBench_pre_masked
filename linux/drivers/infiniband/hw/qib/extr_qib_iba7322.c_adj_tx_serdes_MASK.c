
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txdds_ent {int dummy; } ;
struct qib_pportdata {scalar_t__ link_speed_active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qib_pportdata*,struct txdds_ent const**,struct txdds_ent const**,struct txdds_ent const**,int) ;
 int FUNC_1 (struct qib_pportdata*,struct txdds_ent*) ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_2)
{
 const struct txdds_ent *VAR_3, *VAR_4, *VAR_5;
 struct txdds_ent *VAR_6;

 FUNC_0(VAR_2, &VAR_3, &VAR_4, &VAR_5, 1);
 VAR_6 = (struct txdds_ent *)(VAR_2->link_speed_active == VAR_1 ?
  VAR_5 : (VAR_2->link_speed_active == VAR_0 ?
    VAR_4 : VAR_3));
 FUNC_1(VAR_2, VAR_6);
}
