
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* ws_t ;
typedef int ws_status ;
typedef TYPE_3__* iwdp_t ;
typedef TYPE_4__* iwdp_private_t ;
typedef TYPE_5__* iwdp_iws_t ;
struct TYPE_15__ {TYPE_1__* iport; } ;
struct TYPE_14__ {char* frontend; } ;
struct TYPE_13__ {TYPE_4__* private_state; int (* on_error ) (TYPE_3__*,char*,char const*) ;} ;
struct TYPE_12__ {int state; } ;
struct TYPE_11__ {TYPE_3__* self; } ;


 int FUNC_0 (TYPE_2__*,int,char const*,char*) ;
 int FUNC_1 (TYPE_2__*,int,char const*,char const*,int*) ;
 int FUNC_2 (TYPE_2__*,int,char const*,int*) ;
 int FUNC_3 (char const*,char*,int) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (TYPE_3__*,char*,char const*) ;

ws_status FUNC_7(ws_t VAR_0, bool VAR_1, const char *VAR_2,
    bool *VAR_3) {
  iwdp_iws_t VAR_4 = (iwdp_iws_t)VAR_0->state;
  iwdp_t VAR_5 = VAR_4->iport->self;
  if (!VAR_2 || FUNC_4(VAR_2, "/devtools/", 10)) {
    return VAR_5->on_error(VAR_5, "Internal error: %s", VAR_2);
  }

  iwdp_private_t VAR_6 = VAR_5->private_state;
  const char *VAR_7 = VAR_6->frontend;
  if (!VAR_7) {
    return FUNC_0(VAR_0, VAR_1, VAR_2, "Frontend is disabled.");
  }
  bool VAR_8 = !FUNC_5(VAR_7, "://");
  if (VAR_8 || !FUNC_3(VAR_7, "file://", 7)) {
    return FUNC_1(VAR_0, VAR_1, VAR_2,
        VAR_7 + (VAR_8 ? 0 : 7), VAR_3);
  } else if (!FUNC_3(VAR_7, "http://", 7)) {
    return FUNC_2(VAR_0, VAR_1, VAR_2,
        VAR_3);
  }
  return FUNC_0(VAR_0, VAR_1, VAR_2, "Invalid frontend URL?");
}
