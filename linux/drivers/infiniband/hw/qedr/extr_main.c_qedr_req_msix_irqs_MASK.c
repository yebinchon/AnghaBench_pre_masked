
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_6__ {int msix_cnt; int used_cnt; TYPE_1__* msix; } ;
struct qedr_dev {int num_cnq; int num_hwfns; size_t affin_hwfn_idx; TYPE_2__ int_info; TYPE_3__* cnq_array; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_5__ {int vector; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int ,int,TYPE_3__*) ;
 int FUNC_1 (struct qedr_dev*,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qedr_dev*) ;
 int FUNC_3 (int ,int ,int ,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct qedr_dev *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 u16 VAR_6;

 if (VAR_3->num_cnq > VAR_3->int_info.msix_cnt) {
  FUNC_1(VAR_3,
         "Interrupt mismatch: %d CNQ queues > %d MSI-x vectors\n",
         VAR_3->num_cnq, VAR_3->int_info.msix_cnt);
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->num_cnq; VAR_4++) {
  VAR_6 = VAR_4 * VAR_3->num_hwfns + VAR_3->affin_hwfn_idx;
  VAR_5 = FUNC_3(VAR_3->int_info.msix[VAR_6].vector,
     VAR_2, 0, VAR_3->cnq_array[VAR_4].name,
     &VAR_3->cnq_array[VAR_4]);
  if (VAR_5) {
   FUNC_1(VAR_3, "Request cnq %d irq failed\n", VAR_4);
   FUNC_2(VAR_3);
  } else {
   FUNC_0(VAR_3, VAR_1,
     "Requested cnq irq for %s [entry %d]. Cookie is at %p\n",
     VAR_3->cnq_array[VAR_4].name, VAR_4,
     &VAR_3->cnq_array[VAR_4]);
   VAR_3->int_info.used_cnt++;
  }
 }

 return VAR_5;
}
