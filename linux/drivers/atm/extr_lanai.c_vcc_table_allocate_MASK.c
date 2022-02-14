
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lanai_vcc {int dummy; } ;
struct lanai_dev {int num_vci; struct lanai_vcc** vccs; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct lanai_vcc** FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct lanai_dev *VAR_3)
{






 int VAR_4 = (VAR_3->num_vci) * sizeof(struct lanai_vcc *);
 VAR_3->vccs = FUNC_3(VAR_4);
 if (FUNC_2(VAR_3->vccs == ((void*)0)))
  return -VAR_0;
 return 0;

}
