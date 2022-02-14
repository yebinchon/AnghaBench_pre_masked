
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {int dlid_path_bits; int sl; int slid; } ;
struct cm_req_msg {scalar_t__ primary_local_lid; scalar_t__ primary_remote_lid; scalar_t__ alt_local_lid; scalar_t__ alt_remote_lid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cm_req_msg*) ;
 int FUNC_1 (struct cm_req_msg*) ;
 int FUNC_2 (struct cm_req_msg*,int ) ;
 int FUNC_3 (struct cm_req_msg*,int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct cm_req_msg *VAR_1, struct ib_wc *VAR_2)
{
 if (!FUNC_1(VAR_1)) {
  if (VAR_1->primary_local_lid == VAR_0) {
   VAR_1->primary_local_lid = FUNC_5(VAR_2->slid);
   FUNC_3(VAR_1, VAR_2->sl);
  }

  if (VAR_1->primary_remote_lid == VAR_0)
   VAR_1->primary_remote_lid = FUNC_4(VAR_2->dlid_path_bits);
 }

 if (!FUNC_0(VAR_1)) {
  if (VAR_1->alt_local_lid == VAR_0) {
   VAR_1->alt_local_lid = FUNC_5(VAR_2->slid);
   FUNC_2(VAR_1, VAR_2->sl);
  }

  if (VAR_1->alt_remote_lid == VAR_0)
   VAR_1->alt_remote_lid = FUNC_4(VAR_2->dlid_path_bits);
 }
}
