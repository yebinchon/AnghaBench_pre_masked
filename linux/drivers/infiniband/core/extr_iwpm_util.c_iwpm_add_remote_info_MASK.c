
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwpm_remote_info {int hlist_node; int mapped_rem_sockaddr; int mapped_loc_sockaddr; } ;
struct hlist_head {int dummy; } ;


 struct hlist_head* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct iwpm_remote_info *VAR_2)
{
 struct hlist_head *VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_1, VAR_4);
 if (VAR_0) {
  VAR_3 = FUNC_0(
     &VAR_2->mapped_loc_sockaddr,
     &VAR_2->mapped_rem_sockaddr);
  if (VAR_3)
   FUNC_1(&VAR_2->hlist_node, VAR_3);
 }
 FUNC_3(&VAR_1, VAR_4);
}
