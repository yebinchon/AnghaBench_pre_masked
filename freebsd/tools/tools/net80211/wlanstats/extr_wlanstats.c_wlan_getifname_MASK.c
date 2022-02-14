
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* ifr_name; } ;
struct wlanstatfoo_p {TYPE_1__ ifr; } ;
struct wlanstatfoo {int dummy; } ;



__attribute__((used)) static const char *
FUNC_0(struct wlanstatfoo *VAR_0)
{
 struct wlanstatfoo_p *VAR_1 = (struct wlanstatfoo_p *) VAR_0;

 return VAR_1->ifr.ifr_name;
}
