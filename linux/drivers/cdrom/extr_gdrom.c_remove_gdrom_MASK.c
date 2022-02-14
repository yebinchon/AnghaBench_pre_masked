
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {int cd_info; int disk; int tag_set; int gdrom_rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 FUNC_0(VAR_3.gdrom_rq);
 FUNC_1(&VAR_3.tag_set);
 FUNC_3(VAR_1, &VAR_3);
 FUNC_3(VAR_2, &VAR_3);
 FUNC_2(VAR_3.disk);
 if (VAR_4)
  FUNC_4(VAR_4, VAR_0);
 FUNC_5(VAR_3.cd_info);

 return 0;
}
