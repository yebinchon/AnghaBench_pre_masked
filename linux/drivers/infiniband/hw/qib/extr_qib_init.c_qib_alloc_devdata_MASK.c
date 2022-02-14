
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qib_pportdata {int dummy; } ;
struct TYPE_2__ {int rdi; } ;
struct qib_devdata {TYPE_1__ verbs_dev; int list; int int_counter; int unit; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 struct qib_devdata* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_8 (int *,char*,...) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,char*,int ) ;
 int VAR_5 ;
 int FUNC_12 (int *,int *,struct qib_devdata*,int ,int ) ;
 int VAR_6 ;

struct qib_devdata *FUNC_13(struct pci_dev *VAR_7, size_t VAR_8)
{
 struct qib_devdata *VAR_9;
 int VAR_10, VAR_11;


 VAR_11 = VAR_8 / sizeof(struct qib_pportdata);
 VAR_9 = (struct qib_devdata *)FUNC_9(sizeof(*VAR_9) + VAR_8,
          VAR_11);
 if (!VAR_9)
  return FUNC_1(-VAR_0);

 VAR_10 = FUNC_12(&VAR_4, &VAR_9->unit, VAR_9, VAR_6,
   VAR_1);
 if (VAR_10 < 0) {
  FUNC_8(&VAR_7->dev,
         "Could not allocate unit ID: error %d\n", -VAR_10);
  goto bail;
 }
 FUNC_11(&VAR_9->verbs_dev.rdi, "%s%d", "qib", VAR_9->unit);

 VAR_9->int_counter = FUNC_2(VAR_5);
 if (!VAR_9->int_counter) {
  VAR_10 = -VAR_0;
  FUNC_8(&VAR_7->dev,
         "Could not allocate per-cpu int_counter\n");
  goto bail;
 }

 if (!VAR_3) {
  u32 VAR_12 = FUNC_6();

  VAR_2 = FUNC_3(FUNC_0(VAR_12), sizeof(long),
          VAR_1);
  if (VAR_2)
   VAR_3 = VAR_12;
 }



 return VAR_9;
bail:
 if (!FUNC_5(&VAR_9->list))
  FUNC_4(&VAR_9->list);
 FUNC_10(&VAR_9->verbs_dev.rdi);
 return FUNC_1(VAR_10);
}
