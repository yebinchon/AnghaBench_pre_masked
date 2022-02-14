
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracking_name_data {int dst_ref; struct object_id* default_dst_oid; int dst_oid; int default_dst_ref; scalar_t__ default_remote; int num_matches; int src_ref; } ;
struct remote {int name; } ;
struct refspec_item {int dst; int src; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct refspec_item*,int ,int) ;
 int FUNC_3 (struct object_id*,int ) ;
 scalar_t__ FUNC_4 (struct remote*,struct refspec_item*) ;
 int FUNC_5 (int ,scalar_t__) ;
 struct object_id* FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct remote *VAR_0, void *VAR_1)
{
 struct tracking_name_data *VAR_2 = VAR_1;
 struct refspec_item VAR_3;
 FUNC_2(&VAR_3, 0, sizeof(struct refspec_item));
 VAR_3.src = VAR_2->src_ref;
 if (FUNC_4(VAR_0, &VAR_3) ||
     FUNC_1(VAR_3.dst, VAR_2->dst_oid)) {
  FUNC_0(VAR_3.dst);
  return 0;
 }
 VAR_2->num_matches++;
 if (VAR_2->default_remote && !FUNC_5(VAR_0->name, VAR_2->default_remote)) {
  struct object_id *VAR_4 = FUNC_6(sizeof(*VAR_2->default_dst_oid));
  VAR_2->default_dst_ref = FUNC_7(VAR_3.dst);
  FUNC_3(VAR_4, VAR_2->dst_oid);
  VAR_2->default_dst_oid = VAR_4;
 }
 if (VAR_2->dst_ref) {
  FUNC_0(VAR_3.dst);
  return 0;
 }
 VAR_2->dst_ref = VAR_3.dst;
 return 0;
}
