
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_cm_sidr_rep_param {scalar_t__ private_data_len; scalar_t__ private_data; scalar_t__ info_length; scalar_t__ info; int qkey; int qp_num; int status; } ;
struct cm_sidr_rep_msg {int private_data; int info; int qkey; int service_id; int status; int request_id; int hdr; } ;
struct TYPE_2__ {int service_id; int remote_id; } ;
struct cm_id_private {TYPE_1__ id; int tid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct cm_sidr_rep_msg*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cm_sidr_rep_msg *VAR_1,
          struct cm_id_private *VAR_2,
          struct ib_cm_sidr_rep_param *VAR_3)
{
 FUNC_0(&VAR_1->hdr, VAR_0,
     VAR_2->tid);
 VAR_1->request_id = VAR_2->id.remote_id;
 VAR_1->status = VAR_3->status;
 FUNC_1(VAR_1, FUNC_2(VAR_3->qp_num));
 VAR_1->service_id = VAR_2->id.service_id;
 VAR_1->qkey = FUNC_2(VAR_3->qkey);

 if (VAR_3->info && VAR_3->info_length)
  FUNC_3(VAR_1->info, VAR_3->info, VAR_3->info_length);

 if (VAR_3->private_data && VAR_3->private_data_len)
  FUNC_3(VAR_1->private_data, VAR_3->private_data,
         VAR_3->private_data_len);
}
