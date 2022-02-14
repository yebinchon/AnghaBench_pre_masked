
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracking_name_data {char const* default_remote; char* src_ref; int num_matches; char* default_dst_ref; char* default_dst_oid; char const* dst_ref; struct object_id* dst_oid; } ;
struct object_id {int dummy; } ;


 struct tracking_name_data VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct tracking_name_data*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const**) ;
 int FUNC_3 (struct object_id*,char*) ;
 char* FUNC_4 (char*,char const*) ;

const char *FUNC_5(const char *VAR_2, struct object_id *VAR_3,
     int *VAR_4)
{
 struct tracking_name_data VAR_5 = VAR_0;
 const char *VAR_6 = ((void*)0);
 if (!FUNC_2("checkout.defaultremote", &VAR_6))
  VAR_5.default_remote = VAR_6;
 VAR_5.src_ref = FUNC_4("refs/heads/%s", VAR_2);
 VAR_5.dst_oid = VAR_3;
 FUNC_0(VAR_1, &VAR_5);
 if (VAR_4)
  *VAR_4 = VAR_5.num_matches;
 FUNC_1(VAR_5.src_ref);
 FUNC_1((char *)VAR_6);
 if (VAR_5.num_matches == 1) {
  FUNC_1(VAR_5.default_dst_ref);
  FUNC_1(VAR_5.default_dst_oid);
  return VAR_5.dst_ref;
 }
 FUNC_1(VAR_5.dst_ref);
 if (VAR_5.default_dst_ref) {
  FUNC_3(VAR_3, VAR_5.default_dst_oid);
  FUNC_1(VAR_5.default_dst_oid);
  return VAR_5.default_dst_ref;
 }
 return ((void*)0);
}
