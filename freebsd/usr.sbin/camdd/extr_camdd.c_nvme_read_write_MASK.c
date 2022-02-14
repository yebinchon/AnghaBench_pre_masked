
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct nvme_command {int nsid; int cdw10; int cdw11; int cdw12; int opc; } ;
struct ccb_nvmeio {struct nvme_command cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ccb_nvmeio*,int,void (*) (struct cam_periph*,union ccb*),int ,int *,int,int) ;

void
FUNC_1(struct ccb_nvmeio *VAR_6, uint32_t VAR_7,
  void (*VAR_8)(struct cam_periph *, union ccb *),
  uint32_t VAR_9, int VAR_10, uint64_t VAR_11,
  uint32_t VAR_12, uint8_t *VAR_13, uint32_t VAR_14,
  uint32_t VAR_15)
{
 struct nvme_command *VAR_16 = &VAR_6->cmd;

 VAR_16->opc = VAR_10 ? VAR_2 : VAR_3;

 VAR_16->nsid = VAR_9;

 VAR_16->cdw10 = VAR_11 & VAR_5;
 VAR_16->cdw11 = VAR_11 >> 32;


 VAR_16->cdw12 = (VAR_12 - 1) & VAR_4;

 FUNC_0(VAR_6,
   VAR_7,
   VAR_8,
   VAR_10 ? VAR_0 : VAR_1,
   VAR_13,
   VAR_14,
   VAR_15);
}
