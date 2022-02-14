
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pport {int pp_ctl_port; int pp_name; } ;
struct conf {int dummy; } ;


 struct pport* FUNC_0 (struct conf*,int ,int ) ;

struct pport *
FUNC_1(struct pport *VAR_0, struct conf *VAR_1)
{
 struct pport *VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0->pp_name, VAR_0->pp_ctl_port);
 return (VAR_2);
}
