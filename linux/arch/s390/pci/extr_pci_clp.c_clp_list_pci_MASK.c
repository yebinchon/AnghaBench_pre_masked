
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_7__ {int len; scalar_t__ rsp; } ;
struct TYPE_8__ {int entry_size; struct clp_fh_list_entry* fh_list; scalar_t__ resume_token; TYPE_3__ hdr; int uid_checking; } ;
struct TYPE_5__ {int len; int cmd; } ;
struct TYPE_6__ {scalar_t__ resume_token; TYPE_1__ hdr; } ;
struct clp_req_rsp_list_pci {TYPE_4__ response; TYPE_2__ request; } ;
struct clp_fh_list_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clp_req_rsp_list_pci*,int ) ;
 int FUNC_2 (struct clp_req_rsp_list_pci*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct clp_req_rsp_list_pci *VAR_6, void *VAR_7,
   void (*VAR_8)(struct clp_fh_list_entry *, void *))
{
 u64 VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;

 do {
  FUNC_2(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->request.hdr.len = sizeof(VAR_6->request);
  VAR_6->request.hdr.cmd = VAR_1;

  VAR_6->response.hdr.len = VAR_0 - VAR_5;
  VAR_6->request.resume_token = VAR_9;


  VAR_12 = FUNC_1(VAR_6, VAR_2);
  if (VAR_12 || VAR_6->response.hdr.rsp != VAR_3) {
   FUNC_4("List PCI FN:\n");
   FUNC_5(VAR_6->response.hdr.rsp, VAR_12);
   VAR_12 = -VAR_4;
   goto out;
  }

  FUNC_3(VAR_6->response.uid_checking);
  FUNC_0(VAR_6->response.entry_size !=
   sizeof(struct clp_fh_list_entry));

  VAR_10 = (VAR_6->response.hdr.len - VAR_5) /
   VAR_6->response.entry_size;

  VAR_9 = VAR_6->response.resume_token;
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   VAR_8(&VAR_6->response.fh_list[VAR_11], VAR_7);
 } while (VAR_9);
out:
 return VAR_12;
}
