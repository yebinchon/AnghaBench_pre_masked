
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_scsi_request {scalar_t__* cdb; } ;
struct skd_request_context {int flush_cmd; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct skd_scsi_request *VAR_1,
       struct skd_request_context *VAR_2)
{
 VAR_2->flush_cmd = 1;

 VAR_1->cdb[0] = VAR_0;
 VAR_1->cdb[1] = 0;
 VAR_1->cdb[2] = 0;
 VAR_1->cdb[3] = 0;
 VAR_1->cdb[4] = 0;
 VAR_1->cdb[5] = 0;
 VAR_1->cdb[6] = 0;
 VAR_1->cdb[7] = 0;
 VAR_1->cdb[8] = 0;
 VAR_1->cdb[9] = 0;
}
