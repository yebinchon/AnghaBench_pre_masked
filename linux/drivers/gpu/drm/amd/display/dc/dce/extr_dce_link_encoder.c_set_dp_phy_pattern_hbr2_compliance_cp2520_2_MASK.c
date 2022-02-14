
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* funcs; } ;
struct dce110_link_encoder {TYPE_2__ base; } ;
struct TYPE_3__ {int (* setup ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,int,int ,int,int ,int) ;
 int VAR_10 ;
 int FUNC_4 (struct dce110_link_encoder*,int) ;
 int FUNC_5 (struct dce110_link_encoder*,int) ;
 int FUNC_6 (struct dce110_link_encoder*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_8(
 struct dce110_link_encoder *VAR_11,
 unsigned int VAR_12)
{
 FUNC_4(VAR_11, 0);


 VAR_11->base.funcs->setup(&VAR_11->base, VAR_10);


 FUNC_6(VAR_11, VAR_5);




 FUNC_3(VAR_4,
   VAR_3, 0xFC,
   VAR_6, 1,
   VAR_7, 1);


 FUNC_2(VAR_2, VAR_0, 0);


 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1,
    VAR_1, VAR_12);
 else

  FUNC_0(VAR_12 == 2);


 FUNC_5(VAR_11, 1);


 FUNC_2(VAR_8, VAR_9, 0);


 FUNC_4(VAR_11, 0);
}
