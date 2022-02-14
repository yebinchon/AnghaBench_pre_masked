
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
typedef int bool_t ;
struct TYPE_2__ {int dom_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static bool_t
FUNC_5(bool_t *VAR_8, struct sockaddr_in *VAR_9)
{
 if (VAR_6 >= VAR_3) {
  FUNC_0(VAR_9, sizeof(struct sockaddr_in));
  if (FUNC_3(VAR_5->dom_domain, VAR_9))
   FUNC_2(VAR_2, "lost connection to parent");
  return (VAR_4);
 }

 if (VAR_7 && FUNC_4(VAR_9->sin_addr)) {
  VAR_6++;
  FUNC_2(VAR_1, "NIS server at %s not in restricted mode access list -- rejecting.\n",FUNC_1(VAR_9->sin_addr));
  return (VAR_0);
 } else {
  if (FUNC_3(VAR_5->dom_domain, VAR_9))
   FUNC_2(VAR_2, "lost connection to parent");
  return (VAR_4);
 }
}
