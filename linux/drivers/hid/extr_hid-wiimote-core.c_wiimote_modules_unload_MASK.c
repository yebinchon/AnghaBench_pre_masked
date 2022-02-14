
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t devtype; int lock; } ;
struct wiimote_data {int * input; TYPE_1__ state; } ;
struct wiimod_ops {int (* remove ) (struct wiimod_ops const*,struct wiimote_data*) ;} ;
typedef size_t __u8 ;


 size_t const VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct wiimod_ops const*,struct wiimote_data*) ;
 struct wiimod_ops** VAR_2 ;
 size_t** VAR_3 ;

__attribute__((used)) static void FUNC_6(struct wiimote_data *VAR_4)
{
 const __u8 *VAR_5, *VAR_6;
 const struct wiimod_ops *VAR_7;
 unsigned long VAR_8;

 VAR_5 = VAR_3[VAR_4->state.devtype];

 FUNC_3(&VAR_4->state.lock, VAR_8);
 VAR_4->state.devtype = VAR_1;
 FUNC_4(&VAR_4->state.lock, VAR_8);


 for (VAR_6 = VAR_5; *VAR_6 != VAR_0; ++VAR_6)
              ;

 if (VAR_4->input) {
  FUNC_0(VAR_4->input);
  FUNC_2(VAR_4->input);
 }

 for ( ; VAR_6-- != VAR_5; ) {
  VAR_7 = VAR_2[*VAR_6];
  if (VAR_7->remove)
   VAR_7->remove(VAR_7, VAR_4);
 }

 if (VAR_4->input) {
  FUNC_1(VAR_4->input);
  VAR_4->input = ((void*)0);
 }
}
