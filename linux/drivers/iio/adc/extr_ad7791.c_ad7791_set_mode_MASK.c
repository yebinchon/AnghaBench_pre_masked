
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_sigma_delta {int dummy; } ;
struct ad7791_state {int mode; } ;
typedef enum ad_sigma_delta_mode { ____Placeholder_ad_sigma_delta_mode } ad_sigma_delta_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (struct ad_sigma_delta*,int ,int,int ) ;
 struct ad7791_state* FUNC_2 (struct ad_sigma_delta*) ;

__attribute__((used)) static int FUNC_3(struct ad_sigma_delta *VAR_5,
 enum ad_sigma_delta_mode VAR_6)
{
 struct ad7791_state *VAR_7 = FUNC_2(VAR_5);

 switch (VAR_6) {
 case 131:
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_3;
  break;
 case 130:
 case 129:
  VAR_6 = VAR_1;
  break;
 }

 VAR_7->mode &= ~VAR_2;
 VAR_7->mode |= FUNC_0(VAR_6);

 return FUNC_1(VAR_5, VAR_4, sizeof(VAR_7->mode), VAR_7->mode);
}
