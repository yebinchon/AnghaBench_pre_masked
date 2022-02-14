
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qib_devdata*,char*) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int ,int ,int ) ;
 int FUNC_3 (struct qib_devdata*,int ,int ) ;
 int FUNC_4 (int) ;

void FUNC_5(struct qib_devdata *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_2(VAR_7, VAR_0, VAR_1,
  VAR_3, VAR_4);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7, "Failed clearing IBSerDes Parity err\n");
  goto bail;
 }
 VAR_8 = FUNC_2(VAR_7, VAR_0, VAR_1, 0,
  VAR_4);

 FUNC_1(VAR_7, VAR_6);
 FUNC_4(4);
 FUNC_3(VAR_7, VAR_5,
  VAR_2);
 FUNC_1(VAR_7, VAR_6);
bail:
 return;
}
