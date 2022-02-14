
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_msg {int size; int buffer; } ;
struct drm_dp_aux {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_dp_aux*,struct drm_dp_aux_msg*) ;

__attribute__((used)) static int FUNC_2(struct drm_dp_aux *VAR_1, struct drm_dp_aux_msg *VAR_2)
{
 int VAR_3, VAR_4 = VAR_2->size;
 struct drm_dp_aux_msg VAR_5 = *VAR_2;

 while (VAR_5.size > 0) {
  VAR_3 = FUNC_1(VAR_1, &VAR_5);
  if (VAR_3 <= 0)
   return VAR_3 == 0 ? -VAR_0 : VAR_3;

  if (VAR_3 < VAR_5.size && VAR_3 < VAR_4) {
   FUNC_0("Partial I2C reply: requested %zu bytes got %d bytes\n",
          VAR_5.size, VAR_3);
   VAR_4 = VAR_3;
  }

  VAR_5.size -= VAR_3;
  VAR_5.buffer += VAR_3;
 }

 return VAR_4;
}
