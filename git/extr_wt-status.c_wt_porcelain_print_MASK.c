
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int no_gettext; int * prefix; scalar_t__ relative_paths; scalar_t__ use_color; } ;


 int FUNC_0 (struct wt_status*) ;

__attribute__((used)) static void FUNC_1(struct wt_status *VAR_0)
{
 VAR_0->use_color = 0;
 VAR_0->relative_paths = 0;
 VAR_0->prefix = ((void*)0);
 VAR_0->no_gettext = 1;
 FUNC_0(VAR_0);
}
