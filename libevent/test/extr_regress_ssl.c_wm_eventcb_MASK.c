
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_context {scalar_t__ get; scalar_t__ server; } ;
struct bufferevent {int dummy; } ;


 short VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent *VAR_1, short VAR_2, void *VAR_3)
{
 struct wm_context *VAR_4 = VAR_3;
 FUNC_0(("wm_eventcb-%s(%p): %i",
  VAR_4->server ? "server" : "client", VAR_1, VAR_2));
 if (VAR_2 & VAR_0) {
 } else {
  VAR_4->get = 0;
 }
}
