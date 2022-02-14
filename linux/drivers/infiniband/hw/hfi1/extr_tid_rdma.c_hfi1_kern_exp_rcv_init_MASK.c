
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ctxtdata {scalar_t__ jkey; int dd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (int ,struct hfi1_ctxtdata*,scalar_t__) ;

int FUNC_3(struct hfi1_ctxtdata *VAR_3, int VAR_4)
{
 if (VAR_4)
  return 0;

 FUNC_0(VAR_2 < VAR_1);
 FUNC_0(VAR_2 > VAR_0);
 VAR_3->jkey = VAR_2;
 FUNC_2(VAR_3->dd, VAR_3, VAR_3->jkey);
 return FUNC_1(VAR_3);
}
