
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct transport {struct helper_data* data; } ;
struct helper_data {TYPE_1__* helper; int out; int no_disconnect_req; } ;
struct TYPE_3__ {int out; int in; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct transport *VAR_4)
{
 struct helper_data *VAR_5 = VAR_4->data;
 int VAR_6 = 0;

 if (VAR_5->helper) {
  if (VAR_2)
   FUNC_4(VAR_3, "Debug: Disconnecting.\n");
  if (!VAR_5->no_disconnect_req) {






   FUNC_6(VAR_0, VAR_1);
   FUNC_7(VAR_5->helper->in, "\n", 1);
   FUNC_5(VAR_0);
  }
  FUNC_1(VAR_5->helper->in);
  FUNC_1(VAR_5->helper->out);
  FUNC_2(VAR_5->out);
  VAR_6 = FUNC_3(VAR_5->helper);
  FUNC_0(VAR_5->helper);
 }
 return VAR_6;
}
