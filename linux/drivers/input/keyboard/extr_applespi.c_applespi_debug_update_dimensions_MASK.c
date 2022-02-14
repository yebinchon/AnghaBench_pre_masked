
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_finger {int abs_y; int abs_x; } ;
struct applespi_data {void* tp_dim_max_y; void* tp_dim_min_y; void* tp_dim_max_x; void* tp_dim_min_x; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (void*,int ) ;
 void* FUNC_2 (void*,int ) ;

__attribute__((used)) static void FUNC_3(struct applespi_data *VAR_0,
          const struct tp_finger *VAR_1)
{
 VAR_0->tp_dim_min_x = FUNC_2(VAR_0->tp_dim_min_x,
         FUNC_0(VAR_1->abs_x));
 VAR_0->tp_dim_max_x = FUNC_1(VAR_0->tp_dim_max_x,
         FUNC_0(VAR_1->abs_x));
 VAR_0->tp_dim_min_y = FUNC_2(VAR_0->tp_dim_min_y,
         FUNC_0(VAR_1->abs_y));
 VAR_0->tp_dim_max_y = FUNC_1(VAR_0->tp_dim_max_y,
         FUNC_0(VAR_1->abs_y));
}
