
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sockaddr_storage {int dummy; } ;
struct iwpm_mapping_info {int hlist_node; int mapped_sockaddr; int local_sockaddr; int map_flags; int nl_client; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hlist_head* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwpm_mapping_info*) ;
 struct iwpm_mapping_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct sockaddr_storage*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct sockaddr_storage *VAR_5,
   struct sockaddr_storage *VAR_6,
   u8 VAR_7, u32 VAR_8)
{
 struct hlist_head *VAR_9 = ((void*)0);
 struct iwpm_mapping_info *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = -VAR_0;

 if (!FUNC_2(VAR_7))
  return VAR_12;
 VAR_10 = FUNC_4(sizeof(struct iwpm_mapping_info), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_5(&VAR_10->local_sockaddr, VAR_5,
        sizeof(struct sockaddr_storage));
 FUNC_5(&VAR_10->mapped_sockaddr, VAR_6,
        sizeof(struct sockaddr_storage));
 VAR_10->nl_client = VAR_7;
 VAR_10->map_flags = VAR_8;

 FUNC_6(&VAR_4, VAR_11);
 if (VAR_3) {
  VAR_9 = FUNC_0(
     &VAR_10->local_sockaddr,
     &VAR_10->mapped_sockaddr);
  if (VAR_9) {
   FUNC_1(&VAR_10->hlist_node, VAR_9);
   VAR_12 = 0;
  }
 }
 FUNC_7(&VAR_4, VAR_11);

 if (!VAR_9)
  FUNC_3(VAR_10);
 return VAR_12;
}
