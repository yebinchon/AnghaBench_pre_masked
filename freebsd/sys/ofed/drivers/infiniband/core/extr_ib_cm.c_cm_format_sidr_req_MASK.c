
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
 int VAR_1 ;
 int FUNC_0 (struct cm_id_private*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cm_sidr_req_msg *VAR_2,
          struct cm_id_private *VAR_3,
          struct ib_cm_sidr_req_param *VAR_4)
{
 FUNC_1(&VAR_2->hdr, VAR_1,
     FUNC_0(VAR_3, VAR_0));
 VAR_2->request_id = VAR_3->id.local_id;
 VAR_2->pkey = VAR_4->path->pkey;
 VAR_2->service_id = VAR_4->service_id;

 if (VAR_4->private_data && VAR_4->private_data_len)
  FUNC_2(VAR_2->private_data, VAR_4->private_data,
         VAR_4->private_data_len);
}
