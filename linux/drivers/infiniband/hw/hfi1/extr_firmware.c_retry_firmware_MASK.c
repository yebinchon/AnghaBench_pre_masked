
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hfi1_devdata *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_2);

 if (VAR_5 == 0) {




  if (VAR_3 == VAR_1)
   VAR_3 = VAR_0;
  VAR_6 = 0;
 } else if (VAR_3 == VAR_1) {

  FUNC_0(VAR_4);
  VAR_6 = (VAR_3 == VAR_0);
 } else {

  VAR_6 = 0;
 }

 FUNC_2(&VAR_2);
 return VAR_6;
}
