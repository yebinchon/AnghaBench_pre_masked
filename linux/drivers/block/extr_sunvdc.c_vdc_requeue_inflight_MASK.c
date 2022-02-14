
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct vio_dring_state {size_t cons; size_t prod; } ;
struct TYPE_4__ {int state; } ;
struct vio_disk_desc {TYPE_2__ hdr; int ncookies; int cookies; } ;
struct vdc_req_entry {struct request* req; } ;
struct TYPE_3__ {int lp; struct vio_dring_state* drings; } ;
struct vdc_port {TYPE_1__ vio; struct vdc_req_entry* rq_arr; } ;
struct request {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct request*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct vdc_port*,struct vio_disk_desc*) ;
 struct vio_disk_desc* FUNC_3 (struct vio_dring_state*,size_t) ;
 void* FUNC_4 (struct vio_dring_state*,size_t) ;

__attribute__((used)) static void FUNC_5(struct vdc_port *VAR_2)
{
 struct vio_dring_state *VAR_3 = &VAR_2->vio.drings[VAR_1];
 u32 VAR_4;

 for (VAR_4 = VAR_3->cons; VAR_4 != VAR_3->prod; VAR_4 = FUNC_4(VAR_3, VAR_4)) {
  struct vio_disk_desc *VAR_5 = FUNC_3(VAR_3, VAR_4);
  struct vdc_req_entry *VAR_6 = &VAR_2->rq_arr[VAR_4];
  struct request *VAR_7;

  FUNC_1(VAR_2->vio.lp, VAR_5->cookies, VAR_5->ncookies);
  VAR_5->hdr.state = VAR_0;
  VAR_3->cons = FUNC_4(VAR_3, VAR_4);

  VAR_7 = VAR_6->req;
  if (VAR_7 == ((void*)0)) {
   FUNC_2(VAR_2, VAR_5);
   continue;
  }

  VAR_6->req = ((void*)0);
  FUNC_0(VAR_7, 0);
 }
}
