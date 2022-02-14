
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa_path_rec {scalar_t__ rec_type; } ;
struct cm_req_msg {int alt_remote_gid; int alt_local_gid; int alt_remote_lid; int alt_local_lid; int primary_remote_gid; int primary_local_gid; int primary_remote_lid; int primary_local_lid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cm_req_msg*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sa_path_rec*,int ) ;
 int FUNC_4 (struct sa_path_rec*,int ) ;

__attribute__((used)) static void FUNC_5(struct cm_req_msg *VAR_1,
     struct sa_path_rec *VAR_2,
     struct sa_path_rec *VAR_3)
{
 u32 VAR_4;

 if (VAR_2->rec_type != VAR_0) {
  FUNC_3(VAR_2,
     FUNC_1(VAR_1->primary_local_lid));
  FUNC_4(VAR_2,
     FUNC_1(VAR_1->primary_remote_lid));
 } else {
  VAR_4 = FUNC_2(&VAR_1->primary_local_gid);
  FUNC_3(VAR_2, VAR_4);

  VAR_4 = FUNC_2(&VAR_1->primary_remote_gid);
  FUNC_4(VAR_2, VAR_4);
 }

 if (!FUNC_0(VAR_1))
  return;

 if (VAR_3->rec_type != VAR_0) {
  FUNC_3(VAR_3, FUNC_1(VAR_1->alt_local_lid));
  FUNC_4(VAR_3, FUNC_1(VAR_1->alt_remote_lid));
 } else {
  VAR_4 = FUNC_2(&VAR_1->alt_local_gid);
  FUNC_3(VAR_3, VAR_4);

  VAR_4 = FUNC_2(&VAR_1->alt_remote_gid);
  FUNC_4(VAR_3, VAR_4);
 }
}
