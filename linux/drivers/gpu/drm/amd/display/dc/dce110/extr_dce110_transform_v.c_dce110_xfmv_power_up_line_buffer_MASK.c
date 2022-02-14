
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct transform {int dummy; } ;
struct TYPE_2__ {int ctx; } ;
struct dce_transform {TYPE_1__ base; int lb_memory_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce_transform* FUNC_0 (struct transform*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct transform *VAR_4)
{
 struct dce_transform *VAR_5 = FUNC_0(VAR_4);
 uint32_t VAR_6;

 VAR_6 = FUNC_1(VAR_5->base.ctx, VAR_3);


 FUNC_3(VAR_6, 0, VAR_0, VAR_1);

 FUNC_3(VAR_6, VAR_5->lb_memory_size, VAR_0,
   VAR_2);

 FUNC_2(VAR_5->base.ctx, VAR_3, VAR_6);

 return 1;
}
