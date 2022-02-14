
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hfi1_packet {int rhf; TYPE_1__* rcd; } ;
struct TYPE_4__ {int verbs_dev; } ;
struct TYPE_3__ {TYPE_2__* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct hfi1_packet*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_packet*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct hfi1_packet *VAR_3)
{

 if (FUNC_6(
   FUNC_2(&VAR_3->rcd->dd->verbs_dev) &&
   (FUNC_5(VAR_3->rhf) == VAR_2 ||
    VAR_3->rhf & VAR_0)))
  return VAR_1;

 FUNC_3(VAR_3);
 FUNC_1(VAR_3);

 if (FUNC_6(FUNC_4(VAR_3->rhf)))
  FUNC_0(VAR_3->rcd->dd,
      "Unhandled error packet received. Dropping.\n");

 return VAR_1;
}
