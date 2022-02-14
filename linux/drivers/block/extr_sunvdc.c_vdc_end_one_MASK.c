
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vio_dring_state {int cons; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct vio_disk_desc {scalar_t__ status; TYPE_2__ hdr; int ncookies; int cookies; } ;
struct vdc_req_entry {struct request* req; } ;
struct TYPE_3__ {int lp; } ;
struct vdc_port {TYPE_1__ vio; struct vdc_req_entry* rq_arr; } ;
struct request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vdc_port*) ;
 int FUNC_4 (struct vdc_port*,struct vio_disk_desc*) ;
 struct vio_disk_desc* FUNC_5 (struct vio_dring_state*,unsigned int) ;
 int FUNC_6 (struct vio_dring_state*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct vdc_port *VAR_3, struct vio_dring_state *VAR_4,
   unsigned int VAR_5)
{
 struct vio_disk_desc *VAR_6 = FUNC_5(VAR_4, VAR_5);
 struct vdc_req_entry *VAR_7 = &VAR_3->rq_arr[VAR_5];
 struct request *VAR_8;

 if (FUNC_2(VAR_6->hdr.state != VAR_1))
  return;

 FUNC_1(VAR_3->vio.lp, VAR_6->cookies, VAR_6->ncookies);
 VAR_6->hdr.state = VAR_2;
 VAR_4->cons = FUNC_6(VAR_4, VAR_5);

 VAR_8 = VAR_7->req;
 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_3, VAR_6);
  return;
 }

 VAR_7->req = ((void*)0);

 FUNC_0(VAR_8, VAR_6->status ? VAR_0 : 0);

 FUNC_3(VAR_3);
}
