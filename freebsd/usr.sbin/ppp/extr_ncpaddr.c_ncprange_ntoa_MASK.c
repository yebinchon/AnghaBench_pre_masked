
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct ncprange {int ncprange_family; int ncprange_ip4width; int ncprange_ip6width; TYPE_1__ ncprange_ip4mask; } ;
struct ncpaddr {int dummy; } ;




 int VAR_0 ;
 char* FUNC_0 (struct ncpaddr*) ;
 int FUNC_1 (struct ncprange const*,struct ncpaddr*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,unsigned long) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

const char *
FUNC_6(const struct ncprange *VAR_1)
{
  char *VAR_2;
  struct ncpaddr VAR_3;
  int VAR_4;

  if (!FUNC_1(VAR_1, &VAR_3))
    return "<AF_UNSPEC>";

  VAR_2 = FUNC_0(&VAR_3);
  VAR_4 = FUNC_5(VAR_2);
  if (VAR_4 >= VAR_0 - 1)
    return VAR_2;

  switch (VAR_1->ncprange_family) {
  case 129:
    if (VAR_1->ncprange_ip4width == -1) {

      for (; VAR_4 >= 3; VAR_2[VAR_4 -= 2] = '\0')
        if (FUNC_4(VAR_2 + VAR_4 - 2, ".0"))
          break;
      FUNC_3(VAR_2 + VAR_4, sizeof VAR_2 - VAR_4, "&0x%08lx",
               (unsigned long)FUNC_2(VAR_1->ncprange_ip4mask.s_addr));
    } else if (VAR_1->ncprange_ip4width < 32)
      FUNC_3(VAR_2 + VAR_4, sizeof VAR_2 - VAR_4, "/%d", VAR_1->ncprange_ip4width);

    return VAR_2;


  case 128:
    if (VAR_1->ncprange_ip6width != 128)
      FUNC_3(VAR_2 + VAR_4, sizeof VAR_2 - VAR_4, "/%d", VAR_1->ncprange_ip6width);

    return VAR_2;

  }

  return "<AF_UNSPEC>";
}
