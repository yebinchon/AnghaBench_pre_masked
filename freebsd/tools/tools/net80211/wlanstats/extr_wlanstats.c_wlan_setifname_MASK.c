
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int i_name; } ;
struct TYPE_3__ {int ifr_name; } ;
struct wlanstatfoo_p {TYPE_2__ ireq; TYPE_1__ ifr; } ;
struct wlanstatfoo {int dummy; } ;


 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_1(struct wlanstatfoo *VAR_0, const char *VAR_1)
{
 struct wlanstatfoo_p *VAR_2 = (struct wlanstatfoo_p *) VAR_0;

 FUNC_0(VAR_2->ifr.ifr_name, VAR_1, sizeof (VAR_2->ifr.ifr_name));
 FUNC_0(VAR_2->ireq.i_name, VAR_1, sizeof (VAR_2->ireq.i_name));
}
