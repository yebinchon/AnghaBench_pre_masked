
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct work_struct {int dummy; } ;
struct ib_header {int dummy; } ;
struct hfi1_packet {int rhf_addr; int rcd; int rhf; } ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {TYPE_1__* ppd; } ;
struct hfi1_16b_header {int dummy; } ;
struct TYPE_2__ {int link_wq; struct work_struct linkstate_active_work; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct hfi1_16b_header*) ;
 scalar_t__ FUNC_3 (struct ib_header*,int ) ;
 struct hfi1_16b_header* FUNC_4 (int ,int ) ;
 struct ib_header* FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,struct work_struct*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static inline int FUNC_9(struct hfi1_ctxtdata *VAR_4,
          struct hfi1_packet *VAR_5,
          struct hfi1_devdata *VAR_6)
{
 struct work_struct *VAR_7 = &VAR_4->ppd->linkstate_active_work;
 u8 VAR_8 = FUNC_8(VAR_5->rhf);
 u8 VAR_9 = VAR_3;

 if (VAR_8 == VAR_2) {
  struct ib_header *VAR_10 = FUNC_5(VAR_5->rcd,
          VAR_5->rhf_addr);
  VAR_9 = FUNC_3(VAR_10, VAR_5->rhf);
 } else if (VAR_8 == VAR_1) {
  struct hfi1_16b_header *VAR_11 = FUNC_4(
      VAR_5->rcd,
      VAR_5->rhf_addr);
  VAR_9 = FUNC_2(VAR_11);
 }
 if (VAR_9 != VAR_3) {
  int VAR_12 = FUNC_1(VAR_4->ppd);

  if (VAR_12 != VAR_0) {
   FUNC_0(VAR_6,
        "Unexpected link state %s\n",
        FUNC_6(VAR_12));
   return 0;
  }

  FUNC_7(VAR_4->ppd->link_wq, VAR_7);
  return 1;
 }
 return 0;
}
