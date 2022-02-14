
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct edp_aux {scalar_t__ base; } ;
struct drm_dp_aux_msg {int size; scalar_t__* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct edp_aux *VAR_3, struct drm_dp_aux_msg *VAR_4)
{
 u32 VAR_5;
 u8 *VAR_6;
 int VAR_7;
 u32 VAR_8 = VAR_4->size;

 FUNC_1(VAR_3->base + VAR_2,
  VAR_0 | VAR_1);

 VAR_6 = VAR_4->buffer;


 VAR_5 = FUNC_0(VAR_3->base + VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_5 = FUNC_0(VAR_3->base + VAR_2);
  VAR_6[VAR_7] = (u8)((VAR_5 >> 8) & 0xff);
 }

 return 0;
}
