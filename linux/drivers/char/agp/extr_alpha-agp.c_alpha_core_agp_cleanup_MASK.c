
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
typedef TYPE_2__ alpha_agp_info ;
struct TYPE_7__ {TYPE_2__* dev_private_data; } ;
struct TYPE_5__ {int (* cleanup ) (TYPE_2__*) ;} ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void)
{
 alpha_agp_info *VAR_1 = VAR_0->dev_private_data;

 VAR_1->ops->cleanup(VAR_1);
}
