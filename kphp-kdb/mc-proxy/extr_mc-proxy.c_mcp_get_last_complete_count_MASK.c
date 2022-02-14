
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int last_complete_count; } ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (struct connection*,char const*,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3 (struct connection *VAR_1, const char *VAR_2, int VAR_3) {
  return FUNC_1 (VAR_1, VAR_2, VAR_0, FUNC_2 (VAR_0, "%d", FUNC_0(VAR_1)->last_complete_count));
}
