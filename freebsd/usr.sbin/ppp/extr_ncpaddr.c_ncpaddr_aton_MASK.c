
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct ncprange {int ncprange_family; int ncprange_ip4width; int ncprange_ip6width; int ncprange_ip6addr; TYPE_1__ ncprange_ip4addr; } ;
struct ncpaddr {int ncpaddr_family; int ncpaddr_ip6addr; TYPE_1__ ncpaddr_ip4addr; } ;
struct ncp {int dummy; } ;




 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (struct ncprange*,struct ncp*,char const*) ;

int
FUNC_3(struct ncpaddr *VAR_2, struct ncp *VAR_3, const char *VAR_4)
{
  struct ncprange VAR_5;

  if (!FUNC_2(&VAR_5, VAR_3, VAR_4))
    return 0;

  if (VAR_5.ncprange_family == 129 && VAR_5.ncprange_ip4width != 32 &&
      VAR_5.ncprange_ip4addr.s_addr != VAR_0) {
    FUNC_1(VAR_1, "ncpaddr_aton: %s: Only 32 bits allowed\n", VAR_4);
    return 0;
  }


  if (VAR_5.ncprange_family == 128 && VAR_5.ncprange_ip6width != 128 &&
      !FUNC_0(&VAR_5.ncprange_ip6addr)) {
    FUNC_1(VAR_1, "ncpaddr_aton: %s: Only 128 bits allowed\n", VAR_4);
    return 0;
  }


  switch (VAR_5.ncprange_family) {
  case 129:
    VAR_2->ncpaddr_family = VAR_5.ncprange_family;
    VAR_2->ncpaddr_ip4addr = VAR_5.ncprange_ip4addr;
    return 1;


  case 128:
    VAR_2->ncpaddr_family = VAR_5.ncprange_family;
    VAR_2->ncpaddr_ip6addr = VAR_5.ncprange_ip6addr;
    return 1;

  }

  return 0;
}
