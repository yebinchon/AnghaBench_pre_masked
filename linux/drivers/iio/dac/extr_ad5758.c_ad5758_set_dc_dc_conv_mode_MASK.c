
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5758_state {int dc_dc_mode; } ;
typedef enum ad5758_dc_dc_mode { ____Placeholder_ad5758_dc_dc_mode } ad5758_dc_dc_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ad5758_state*,int ,int ,int ) ;
 int FUNC_3 (struct ad5758_state*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ad5758_state *VAR_7,
          enum ad5758_dc_dc_mode VAR_8)
{
 int VAR_9;





 if (VAR_8 == VAR_6) {
  VAR_9 = FUNC_2(VAR_7, VAR_0,
        VAR_1,
        FUNC_0(1));
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_2,
        VAR_3,
        FUNC_1(VAR_8));
 if (VAR_9 < 0)
  return VAR_9;





 VAR_9 = FUNC_3(VAR_7, VAR_4,
         VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->dc_dc_mode = VAR_8;

 return VAR_9;
}
