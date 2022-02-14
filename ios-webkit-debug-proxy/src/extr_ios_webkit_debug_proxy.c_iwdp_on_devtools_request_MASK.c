
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* ws_t ;
typedef int ws_status ;
typedef TYPE_3__* iwdp_iws_t ;
typedef TYPE_4__* iwdp_iwi_t ;
typedef int * iwdp_ipage_t ;
struct TYPE_12__ {int max_page_num; int page_num_to_ipage; } ;
struct TYPE_11__ {TYPE_1__* iport; } ;
struct TYPE_10__ {int (* on_error ) (TYPE_2__*,char*,char const*) ;int state; } ;
struct TYPE_9__ {TYPE_4__* iwi; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int,char const*,char*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*,char**,int ) ;
 int FUNC_6 (TYPE_2__*,char*,char const*) ;

ws_status FUNC_7(ws_t VAR_0, const char *VAR_1) {
  iwdp_iws_t VAR_2 = (iwdp_iws_t)VAR_0->state;
  if (!VAR_1 || FUNC_4(VAR_1, "/devtools/page/", 15)) {
    return VAR_0->on_error(VAR_0, "Internal error: %s", VAR_1);
  }

  const char *VAR_3 = VAR_1 + 15;
  char *VAR_4 = ((void*)0);
  int VAR_5 = FUNC_5(VAR_3, &VAR_4, 0);
  if (*VAR_4 != '\0' || *VAR_3 == '\0') {
    VAR_5 = -1;
  }

  iwdp_iwi_t VAR_6 = VAR_2->iport->iwi;
  iwdp_ipage_t VAR_7 =
    (VAR_6 && VAR_5 > 0 && VAR_5 <= VAR_6->max_page_num ?
     (iwdp_ipage_t)FUNC_1(VAR_6->page_num_to_ipage,
       FUNC_0(VAR_5)) : ((void*)0));
  if (!VAR_7) {
    return FUNC_2(VAR_0, 0, VAR_1, "Unknown page id");
  }
  return FUNC_3(VAR_7, VAR_2);
}
