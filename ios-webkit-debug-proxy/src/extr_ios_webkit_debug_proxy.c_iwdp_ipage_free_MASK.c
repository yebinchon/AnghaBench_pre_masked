
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct iwdp_ipage_struct {int dummy; } ;
typedef TYPE_1__* iwdp_ipage_t ;
struct TYPE_5__ {struct TYPE_5__* sender_id; struct TYPE_5__* url; struct TYPE_5__* title; struct TYPE_5__* connection_id; struct TYPE_5__* app_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(iwdp_ipage_t VAR_0) {
  if (VAR_0) {
    FUNC_0(VAR_0->app_id);
    FUNC_0(VAR_0->connection_id);
    FUNC_0(VAR_0->title);
    FUNC_0(VAR_0->url);
    FUNC_0(VAR_0->sender_id);
    FUNC_1(VAR_0, 0, sizeof(struct iwdp_ipage_struct));
    FUNC_0(VAR_0);
  }
}
