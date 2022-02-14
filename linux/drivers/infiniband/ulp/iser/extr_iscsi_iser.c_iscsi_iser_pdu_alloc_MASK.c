
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct iscsi_task {int hdr_max; struct iscsi_hdr* hdr; struct iscsi_iser_task* dd_data; } ;
struct TYPE_2__ {int iscsi_header; } ;
struct iscsi_iser_task {TYPE_1__ desc; } ;
struct iscsi_hdr {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct iscsi_task *VAR_0, uint8_t VAR_1)
{
 struct iscsi_iser_task *VAR_2 = VAR_0->dd_data;

 VAR_0->hdr = (struct iscsi_hdr *)&VAR_2->desc.iscsi_header;
 VAR_0->hdr_max = sizeof(VAR_2->desc.iscsi_header);

 return 0;
}
