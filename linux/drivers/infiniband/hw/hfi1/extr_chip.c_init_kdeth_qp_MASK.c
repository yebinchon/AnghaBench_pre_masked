
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int VAR_7 ;
 int FUNC_1 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_8)
{

 if (VAR_7 != 0 && VAR_7 >= 0xff) {

  FUNC_0(VAR_8, "Invalid KDETH queue pair prefix, ignoring");
  VAR_7 = 0;
 }
 if (VAR_7 == 0)
  VAR_7 = VAR_0;

 FUNC_1(VAR_8, VAR_4,
    (VAR_7 & VAR_5) <<
    VAR_6);

 FUNC_1(VAR_8, VAR_1,
    (VAR_7 & VAR_2) <<
    VAR_3);
}
