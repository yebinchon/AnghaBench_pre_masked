
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct t4_cqe {int len; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_6__ {TYPE_2__ lldi; } ;
struct c4iw_dev {TYPE_3__ rdev; } ;
typedef int __be64 ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (struct t4_cqe*) ;
 int FUNC_1 (struct t4_cqe*) ;
 int FUNC_2 (struct t4_cqe*) ;
 int FUNC_3 (struct t4_cqe*) ;
 int FUNC_4 (struct t4_cqe*) ;
 int FUNC_5 (struct t4_cqe*) ;
 int FUNC_6 (struct t4_cqe*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (struct t4_cqe*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,char*,int ,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct c4iw_dev*,int ) ;

__attribute__((used)) static void FUNC_13(struct c4iw_dev *VAR_2, struct t4_cqe *VAR_3)
{
 __be64 *VAR_4 = (void *)VAR_3;

 FUNC_9(&VAR_2->rdev.lldi.pdev->dev,
  "AE qpid %d opcode %d status 0x%x "
  "type %d len 0x%x wrid.hi 0x%x wrid.lo 0x%x\n",
  FUNC_1(VAR_3), FUNC_0(VAR_3),
  FUNC_2(VAR_3), FUNC_3(VAR_3), FUNC_10(VAR_3->len),
  FUNC_4(VAR_3), FUNC_5(VAR_3));

 FUNC_11("%016llx %016llx %016llx %016llx - %016llx %016llx %016llx %016llx\n",
   FUNC_8(VAR_4[0]), FUNC_8(VAR_4[1]), FUNC_8(VAR_4[2]),
   FUNC_8(VAR_4[3]), FUNC_8(VAR_4[4]), FUNC_8(VAR_4[5]),
   FUNC_8(VAR_4[6]), FUNC_8(VAR_4[7]));





 if (FUNC_7(VAR_3) && (FUNC_0(VAR_3) == VAR_0 ||
     FUNC_0(VAR_3) == VAR_1))
  FUNC_12(VAR_2, FUNC_6(VAR_3));
}
