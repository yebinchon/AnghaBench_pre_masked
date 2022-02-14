
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryptkop {int krp_crid; } ;
struct TYPE_2__ {int cs_kops; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,struct cryptkop*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct cryptkop*,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct cryptkop *VAR_6)
{
 int VAR_7;

 VAR_4.cs_kops++;

 VAR_7 = FUNC_3(VAR_6, VAR_6->krp_crid);
 if (VAR_7 == VAR_0) {
  FUNC_0();
  FUNC_2(&VAR_1, VAR_6, VAR_5);
  if (VAR_3)
   FUNC_4(&VAR_2);
  FUNC_1();
  VAR_7 = 0;
 }
 return VAR_7;
}
