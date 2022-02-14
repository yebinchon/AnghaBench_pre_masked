
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct komeda_kms_dev {int base; } ;
struct TYPE_4__ {int obj; TYPE_1__* component; } ;
struct komeda_improc_state {TYPE_2__ base; } ;
struct TYPE_3__ {int obj; } ;
struct komeda_improc {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *) ;
 int VAR_2 ;
 struct komeda_improc_state* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct komeda_kms_dev *VAR_3,
     struct komeda_improc *VAR_4)
{
 struct komeda_improc_state *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->base.component = &VAR_4->base;
 FUNC_0(&VAR_3->base, &VAR_4->base.obj, &VAR_5->base.obj,
        &VAR_2);

 return 0;
}
