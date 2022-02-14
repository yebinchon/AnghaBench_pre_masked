
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifr_name; } ;
struct athaggrstatfoo_p {TYPE_1__ ifr; } ;
struct athaggrstatfoo {int dummy; } ;


 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_1(struct athaggrstatfoo *VAR_0, const char *VAR_1)
{
 struct athaggrstatfoo_p *VAR_2 = (struct athaggrstatfoo_p *) VAR_0;

 FUNC_0(VAR_2->ifr.ifr_name, VAR_1, sizeof (VAR_2->ifr.ifr_name));
}
