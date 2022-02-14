
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_cm_sidr_req_param {scalar_t__ private_data_len; scalar_t__ private_data; int service_id; TYPE_1__* path; } ;
struct cm_sidr_req_msg {int private_data; int service_id; int pkey; int request_id; int hdr; } ;
struct TYPE_4__ {int local_id; } ;
struct cm_id_private {TYPE_2__ id; } ;
struct TYPE_3__ {int pkey; } ;


 int VAR_0 ;
 int FUNC_0 (struct cm_id_private*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cm_sidr_req_msg *VAR_1,
          struct cm_id_private *VAR_2,
          struct ib_cm_sidr_req_param *VAR_3)
{
 FUNC_1(&VAR_1->hdr, VAR_0,
     FUNC_0(VAR_2));
 VAR_1->request_id = VAR_2->id.local_id;
 VAR_1->pkey = VAR_3->path->pkey;
 VAR_1->service_id = VAR_3->service_id;

 if (VAR_3->private_data && VAR_3->private_data_len)
  FUNC_2(VAR_1->private_data, VAR_3->private_data,
         VAR_3->private_data_len);
}
