
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {TYPE_1__* device; struct request* request; } ;
struct request {int dummy; } ;
struct TYPE_2__ {int sector_size; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static bool FUNC_2(struct scsi_cmnd *VAR_0, u32 VAR_1)
{
 struct request *VAR_2 = VAR_0->request;
 u32 VAR_3;

 if (!FUNC_1(VAR_2))
  return 1;

 VAR_3 = FUNC_0(VAR_2) / VAR_0->device->sector_size;
 if (VAR_1 > VAR_3)
  return 0;

 return 1;
}
