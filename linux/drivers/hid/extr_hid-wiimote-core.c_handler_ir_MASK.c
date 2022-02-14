
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t exttype; size_t devtype; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct wiimod_ops {int (* in_ir ) (struct wiimote_data*,size_t const*,int,unsigned int) ;} ;
typedef size_t __u8 ;


 size_t const VAR_0 ;
 int FUNC_0 (struct wiimote_data*,size_t const*,int,unsigned int) ;
 int FUNC_1 (struct wiimote_data*,size_t const*,int,unsigned int) ;
 struct wiimod_ops** VAR_1 ;
 struct wiimod_ops** VAR_2 ;
 size_t** VAR_3 ;

__attribute__((used)) static void FUNC_2(struct wiimote_data *VAR_4, const __u8 *VAR_5,
         bool VAR_6, unsigned int VAR_7)
{
 const __u8 *VAR_8, *VAR_9;
 const struct wiimod_ops *VAR_10;

 VAR_10 = VAR_1[VAR_4->state.exttype];
 if (VAR_10->in_ir) {
  VAR_10->in_ir(VAR_4, VAR_5, VAR_6, VAR_7);
  return;
 }

 VAR_9 = VAR_3[VAR_4->state.devtype];
 for (VAR_8 = VAR_9; *VAR_8 != VAR_0; ++VAR_8) {
  VAR_10 = VAR_2[*VAR_8];
  if (VAR_10->in_ir) {
   VAR_10->in_ir(VAR_4, VAR_5, VAR_6, VAR_7);
   break;
  }
 }
}
