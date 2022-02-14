
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {void* fs_csum; void* fs_size; void* fs_offs; void* kernel_csum; void* kernel_size; void* kernel_offs; void* id; void* type; } ;
struct TYPE_10__ {void* magic3; void* magic2; void* magic1; void* kernel_csum; void* kernel_size; void* kernel_offs; void* id; void* type; } ;
union file_hdr {TYPE_4__ nfs; TYPE_2__ cas; } ;
typedef int uint8_t ;
struct TYPE_16__ {int header_type; } ;
struct TYPE_15__ {int out_size; int csum; } ;
struct TYPE_11__ {int type; int id; } ;
struct TYPE_9__ {int type; int id; } ;
struct TYPE_14__ {TYPE_3__ nfs; TYPE_1__ cas; } ;
struct TYPE_13__ {int out_size; int csum; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;


 void* FUNC_1 (int) ;
 int VAR_4 ;
 TYPE_8__* VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_7__ VAR_7 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 TYPE_6__ VAR_8 ;
 TYPE_5__ VAR_9 ;
 int FUNC_3 (int *,int *,int,int *) ;

int
FUNC_4(FILE *VAR_10)
{
 union file_hdr VAR_11;
 int VAR_12;

 VAR_6 = 0;
 if (FUNC_2(VAR_10, 0, VAR_4) != 0) {
  FUNC_0("fseek failed on output file");
  return VAR_3;
 }

 switch (VAR_5->header_type) {
 case 129:
  VAR_11.cas.type = FUNC_1(VAR_8.cas.type);
  VAR_11.cas.id = FUNC_1(VAR_8.cas.id);
  VAR_11.cas.kernel_offs = FUNC_1(sizeof(VAR_11.cas));
  VAR_11.cas.kernel_size = FUNC_1(VAR_9.out_size);
  VAR_11.cas.kernel_csum = FUNC_1(VAR_9.csum);
  VAR_11.cas.magic1 = FUNC_1(VAR_0);
  VAR_11.cas.magic2 = FUNC_1(VAR_1);
  VAR_11.cas.magic3 = FUNC_1(VAR_2);
  VAR_12 = FUNC_3(VAR_10, (uint8_t *)&VAR_11.cas,
     sizeof(VAR_11.cas), ((void*)0));
  break;
 case 128:
  VAR_11.nfs.type = FUNC_1(VAR_8.nfs.type);
  VAR_11.nfs.id = FUNC_1(VAR_8.nfs.id);
  VAR_11.nfs.kernel_offs = FUNC_1(sizeof(VAR_11.nfs));
  VAR_11.nfs.kernel_size = FUNC_1(VAR_9.out_size);
  VAR_11.nfs.kernel_csum = FUNC_1(VAR_9.csum);
  VAR_11.nfs.fs_offs = FUNC_1(sizeof(VAR_11.nfs)
     + VAR_9.out_size);
  VAR_11.nfs.fs_size = FUNC_1(VAR_7.out_size);
  VAR_11.nfs.fs_csum = FUNC_1(VAR_7.csum);
  VAR_12 = FUNC_3(VAR_10, (uint8_t *)&VAR_11.nfs,
     sizeof(VAR_11.nfs), ((void*)0));
  break;
 }

 return VAR_12;
}
