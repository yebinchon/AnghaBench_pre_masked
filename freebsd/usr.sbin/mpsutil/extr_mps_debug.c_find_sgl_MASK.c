
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Function; } ;
struct TYPE_3__ {int SGLOffset0; } ;
typedef TYPE_1__ MPI2_SCSI_IO_REQUEST ;
typedef TYPE_2__ MPI2_REQUEST_HEADER ;




__attribute__((used)) static int
FUNC_0(char *VAR_0)
{
 MPI2_REQUEST_HEADER *VAR_1;
 MPI2_SCSI_IO_REQUEST *VAR_2;
 int VAR_3 = 0;

 VAR_1 = (MPI2_REQUEST_HEADER *)VAR_0;

 switch (VAR_1->Function) {
 case 128:
  VAR_2 = (MPI2_SCSI_IO_REQUEST *)VAR_0;
  VAR_3 = VAR_2->SGLOffset0;
  break;
 default:
  VAR_3 = -1;
 }

 return (VAR_3);
}
