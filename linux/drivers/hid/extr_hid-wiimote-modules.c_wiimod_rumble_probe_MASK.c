
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiimote_data {TYPE_1__* input; int rumble_worker; } ;
struct wiimod_ops {int dummy; } ;
struct TYPE_2__ {int ffbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(const struct wiimod_ops *VAR_4,
          struct wiimote_data *VAR_5)
{
 FUNC_0(&VAR_5->rumble_worker, VAR_3);

 FUNC_2(VAR_1, VAR_5->input->ffbit);
 if (FUNC_1(VAR_5->input, ((void*)0), VAR_2))
  return -VAR_0;

 return 0;
}
