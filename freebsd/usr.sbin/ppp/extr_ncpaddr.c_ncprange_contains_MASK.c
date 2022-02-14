
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {scalar_t__ s6_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct ncprange {int ncprange_family; int ncprange_ip6width; TYPE_4__ ncprange_ip6addr; TYPE_3__ ncprange_ip4mask; TYPE_2__ ncprange_ip4addr; } ;
struct TYPE_10__ {scalar_t__ s6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct ncpaddr {int ncpaddr_family; TYPE_5__ ncpaddr_ip6addr; TYPE_1__ ncpaddr_ip4addr; } ;





int
FUNC_0(const struct ncprange *VAR_0, const struct ncpaddr *VAR_1)
{

  const u_char VAR_2[] = { 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff };
  const u_char *VAR_3, *VAR_4;
  int VAR_5;


  if (VAR_0->ncprange_family != VAR_1->ncpaddr_family)
    return 0;

  switch (VAR_0->ncprange_family) {
  case 129:
    return !((VAR_1->ncpaddr_ip4addr.s_addr ^ VAR_0->ncprange_ip4addr.s_addr) &
             VAR_0->ncprange_ip4mask.s_addr);


  case 128:
    VAR_4 = (const u_char *)VAR_0->ncprange_ip6addr.s6_addr;
    VAR_3 = (const u_char *)VAR_1->ncpaddr_ip6addr.s6_addr;

    for (VAR_5 = VAR_0->ncprange_ip6width; VAR_5 > 0; VAR_5 -= 8)
      if ((*VAR_3++ ^ *VAR_4++) & VAR_2[VAR_5 > 7 ? 7 : VAR_5 - 1])
        return 0;

    return 1;

  }

  return 0;
}
