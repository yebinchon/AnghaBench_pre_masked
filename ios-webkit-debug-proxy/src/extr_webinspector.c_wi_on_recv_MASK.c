
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* wi_t ;
typedef int wi_status ;
typedef TYPE_2__* wi_private_t ;
typedef int ssize_t ;
struct TYPE_9__ {int in; } ;
struct TYPE_8__ {int (* on_error ) (TYPE_1__*,char*) ;TYPE_2__* private_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,char const*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

wi_status FUNC_6(wi_t VAR_2, const char *VAR_3, ssize_t VAR_4) {
  wi_private_t VAR_5 = VAR_2->private_state;
  if (VAR_4 < 0) {
    return VAR_0;
  } else if (VAR_4 == 0) {
    return VAR_1;
  }
  FUNC_4(VAR_2, "wi.recv", VAR_3, VAR_4);
  if (FUNC_0(VAR_5->in, VAR_3, VAR_4)) {
    return VAR_2->on_error(VAR_2, "begin_input buffer error");
  }
  wi_status VAR_6 = FUNC_5(VAR_2);
  if (FUNC_1(VAR_5->in)) {
    return VAR_2->on_error(VAR_2, "end_input buffer error");
  }
  return VAR_6;
}
