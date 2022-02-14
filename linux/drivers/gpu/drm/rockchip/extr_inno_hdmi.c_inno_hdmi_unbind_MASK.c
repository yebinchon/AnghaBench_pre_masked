
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* funcs; } ;
struct TYPE_8__ {TYPE_1__* funcs; } ;
struct inno_hdmi {int pclk; int ddc; TYPE_3__ encoder; TYPE_4__ connector; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int (* destroy ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int (* destroy ) (TYPE_4__*) ;} ;


 int FUNC_0 (int ) ;
 struct inno_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, struct device *VAR_1,
        void *VAR_2)
{
 struct inno_hdmi *VAR_3 = FUNC_1(VAR_0);

 VAR_3->connector.funcs->destroy(&VAR_3->connector);
 VAR_3->encoder.funcs->destroy(&VAR_3->encoder);

 FUNC_2(VAR_3->ddc);
 FUNC_0(VAR_3->pclk);
}
