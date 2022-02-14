
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa_path_rec {scalar_t__ rec_type; } ;
struct cm_lap_msg {int alt_remote_gid; int alt_local_gid; int alt_remote_lid; int alt_local_lid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sa_path_rec*,int ) ;
 int FUNC_3 (struct sa_path_rec*,int ) ;

__attribute__((used)) static void FUNC_4(struct cm_lap_msg *VAR_1,
     struct sa_path_rec *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->rec_type != VAR_0) {
  FUNC_2(VAR_2, FUNC_0(VAR_1->alt_local_lid));
  FUNC_3(VAR_2, FUNC_0(VAR_1->alt_remote_lid));
 } else {
  VAR_3 = FUNC_1(&VAR_1->alt_local_gid);
  FUNC_2(VAR_2, VAR_3);

  VAR_3 = FUNC_1(&VAR_1->alt_remote_gid);
  FUNC_3(VAR_2, VAR_3);
 }
}
