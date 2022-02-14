
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct TYPE_2__ {int kobj; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int *,char*,char*) ;

int FUNC_4(struct mapped_device *VAR_1)
{
 return FUNC_3(FUNC_2(VAR_1), &VAR_0,
        &FUNC_0(FUNC_1(VAR_1))->kobj,
        "%s", "dm");
}
