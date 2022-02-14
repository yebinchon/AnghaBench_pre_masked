
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int slot_number; int state; int completion; } ;
struct dlm_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, struct dlm_slot *VAR_3,
  int VAR_4, int VAR_5,
  uint32_t VAR_6)
{
 struct mddev *VAR_7 = VAR_2;
 struct md_cluster_info *VAR_8 = VAR_7->cluster_info;

 VAR_8->slot_number = VAR_5;


 if (FUNC_2(VAR_0, &VAR_8->state)) {
  FUNC_1(&VAR_8->completion);
  FUNC_0(VAR_0, &VAR_8->state);
 }
 FUNC_0(VAR_1, &VAR_8->state);
}
