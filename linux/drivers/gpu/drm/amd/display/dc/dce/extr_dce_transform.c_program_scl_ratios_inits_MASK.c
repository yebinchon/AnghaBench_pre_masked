
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fraction; int integer; } ;
struct TYPE_4__ {int fraction; int integer; } ;
struct scl_ratios_inits {TYPE_1__ v_init; TYPE_2__ h_init; int v_int_scale_ratio; int h_int_scale_ratio; } ;
struct dce_transform {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
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
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(
 struct dce_transform *VAR_11,
 struct scl_ratios_inits *VAR_12)
{

 FUNC_0(VAR_2, 0,
   VAR_5, VAR_12->h_int_scale_ratio);

 FUNC_0(VAR_7, 0,
   VAR_10, VAR_12->v_int_scale_ratio);

 FUNC_1(VAR_1, 0,
   VAR_4, VAR_12->h_init.integer,
   VAR_3, VAR_12->h_init.fraction);

 FUNC_1(VAR_6, 0,
   VAR_9, VAR_12->v_init.integer,
   VAR_8, VAR_12->v_init.fraction);

 FUNC_2(VAR_0, 0);
}
