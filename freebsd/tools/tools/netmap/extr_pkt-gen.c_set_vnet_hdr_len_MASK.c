
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nmreq {int nr_arg1; int nr_cmd; int nr_version; int nr_name; } ;
struct glob_arg {int virt_header; int main_fd; TYPE_2__* nmd; } ;
typedef int req ;
struct TYPE_3__ {int nr_name; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,struct nmreq*) ;
 int FUNC_3 (struct nmreq*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct glob_arg *VAR_3)
{
 int VAR_4, VAR_5 = VAR_3->virt_header;
 struct nmreq VAR_6;

 if (VAR_5 == 0)
  return;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_3->nmd->req.nr_name, VAR_6.nr_name, sizeof(VAR_6.nr_name));
 VAR_6.nr_version = VAR_0;
 VAR_6.nr_cmd = VAR_1;
 VAR_6.nr_arg1 = VAR_5;
 VAR_4 = FUNC_2(VAR_3->main_fd, VAR_2, &VAR_6);
 if (VAR_4) {
  FUNC_0("Unable to set virtio-net header length %d", VAR_5);
 }
}
