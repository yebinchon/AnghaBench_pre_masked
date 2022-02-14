
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct se_cmd {scalar_t__ bad_sector; scalar_t__ t_task_lba; int pi_err; TYPE_2__* se_dev; } ;
struct TYPE_6__ {int err_type; int actual; int expected; scalar_t__ sig_err_offset; } ;
struct ib_mr_status {int fail_status; TYPE_3__ sig_err; } ;
struct ib_mr {int dummy; } ;
struct TYPE_4__ {scalar_t__ block_size; } ;
struct TYPE_5__ {TYPE_1__ dev_attrib; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ib_mr*,int,struct ib_mr_status*) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int
FUNC_3(struct se_cmd *VAR_4, struct ib_mr *VAR_5)
{
 struct ib_mr_status VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_0, &VAR_6);
 if (VAR_7) {
  FUNC_2("ib_check_mr_status failed, ret %d\n", VAR_7);
  goto fail_mr_status;
 }

 if (VAR_6.fail_status & VAR_0) {
  u64 VAR_8;
  u32 VAR_9 = VAR_4->se_dev->dev_attrib.block_size + 8;

  switch (VAR_6.sig_err.err_type) {
  case 129:
   VAR_4->pi_err = VAR_2;
   break;
  case 128:
   VAR_4->pi_err = VAR_3;
   break;
  case 130:
   VAR_4->pi_err = VAR_1;
   break;
  }
  VAR_8 = VAR_6.sig_err.sig_err_offset;
  FUNC_0(VAR_8, VAR_9);
  VAR_4->bad_sector = VAR_8 + VAR_4->t_task_lba;

  FUNC_2("PI error found type %d at sector 0x%llx "
     "expected 0x%x vs actual 0x%x\n",
     VAR_6.sig_err.err_type,
     (unsigned long long)VAR_4->bad_sector,
     VAR_6.sig_err.expected,
     VAR_6.sig_err.actual);
  VAR_7 = 1;
 }

fail_mr_status:
 return VAR_7;
}
