
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int t_wdata ;
struct lg4ff_wheel_data {char const* real_tag; char const* real_name; int alternate_modes; int set_range; int max_range; int min_range; int combine; int const real_product_id; int product_id; } ;
struct lg4ff_wheel {int set_range; int max_range; int min_range; int product_id; } ;
struct lg4ff_multimode_wheel {char* real_tag; char* real_name; int alternate_modes; } ;


 int FUNC_0 (struct lg4ff_wheel_data* const,struct lg4ff_wheel_data*,int) ;

__attribute__((used)) static void FUNC_1(struct lg4ff_wheel_data * const VAR_0, const struct lg4ff_wheel *VAR_1,
      const struct lg4ff_multimode_wheel *VAR_2,
      const u16 VAR_3)
{
 u32 VAR_4 = 0;
 const char *VAR_5 = ((void*)0);
 const char *VAR_6 = ((void*)0);

 if (VAR_2) {
  VAR_4 = VAR_2->alternate_modes;
  VAR_5 = VAR_2->real_tag;
  VAR_6 = VAR_2->real_name;
 }

 {
  struct lg4ff_wheel_data VAR_7 = { .product_id = VAR_1->product_id,
           .real_product_id = VAR_3,
           .combine = 0,
           .min_range = VAR_1->min_range,
           .max_range = VAR_1->max_range,
           .set_range = VAR_1->set_range,
           .alternate_modes = VAR_4,
           .real_tag = VAR_5,
           .real_name = VAR_6 };

  FUNC_0(VAR_0, &VAR_7, sizeof(VAR_7));
 }
}
