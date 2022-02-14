
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct hfi1_devdata {int dummy; } ;
struct TYPE_3__ {int val; int off; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_2)
{
 int VAR_3;
 int VAR_4;
 u64 VAR_5;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, VAR_1[VAR_3].off, &VAR_5);


  if (FUNC_1(VAR_4 != -VAR_0))
   VAR_1[VAR_3].val = VAR_5;
 }
}
