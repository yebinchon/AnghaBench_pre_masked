
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct iser_mem_reg {struct iser_fr_desc* mem_h; } ;
struct TYPE_6__ {int sig_mr; } ;
struct iser_fr_desc {TYPE_2__ rsc; scalar_t__ sig_protected; } ;
struct iscsi_iser_task {TYPE_4__* sc; struct iser_mem_reg* rdma_reg; } ;
struct TYPE_7__ {int err_type; int actual; int expected; scalar_t__ sig_err_offset; } ;
struct ib_mr_status {int fail_status; TYPE_3__ sig_err; } ;
typedef scalar_t__ sector_t ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;
struct TYPE_8__ {TYPE_1__* device; } ;
struct TYPE_5__ {unsigned long sector_size; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int,struct ib_mr_status*) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (scalar_t__,unsigned long) ;

u8 FUNC_4(struct iscsi_iser_task *VAR_1,
        enum iser_data_dir VAR_2, sector_t *VAR_3)
{
 struct iser_mem_reg *VAR_4 = &VAR_1->rdma_reg[VAR_2];
 struct iser_fr_desc *VAR_5 = VAR_4->mem_h;
 unsigned long VAR_6 = VAR_1->sc->device->sector_size;
 struct ib_mr_status VAR_7;
 int VAR_8;

 if (VAR_5 && VAR_5->sig_protected) {
  VAR_5->sig_protected = 0;
  VAR_8 = FUNC_0(VAR_5->rsc.sig_mr,
      VAR_0, &VAR_7);
  if (VAR_8) {
   FUNC_1("ib_check_mr_status failed, ret %d\n", VAR_8);

   *VAR_3 = 0;
   return 0x1;
  }

  if (VAR_7.fail_status & VAR_0) {
   sector_t VAR_9 = VAR_7.sig_err.sig_err_offset;

   FUNC_3(VAR_9, VAR_6 + 8);
   *VAR_3 = FUNC_2(VAR_1->sc) + VAR_9;

   FUNC_1("PI error found type %d at sector %llx "
          "expected %x vs actual %x\n",
          VAR_7.sig_err.err_type,
          (unsigned long long)*VAR_3,
          VAR_7.sig_err.expected,
          VAR_7.sig_err.actual);

   switch (VAR_7.sig_err.err_type) {
   case 129:
    return 0x1;
   case 128:
    return 0x3;
   case 130:
    return 0x2;
   }
  }
 }

 return 0;
}
