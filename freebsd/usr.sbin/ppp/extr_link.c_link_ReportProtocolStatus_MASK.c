
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prompt {int dummy; } ;
struct link {int * proto_out; int * proto_in; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct prompt*,char*,...) ;

void
FUNC_1(struct link *VAR_2, struct prompt *VAR_3)
{
  int VAR_4;

  FUNC_0(VAR_3, "    Protocol     in        out      "
                "Protocol      in       out\n");
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    FUNC_0(VAR_3, "   %-9s: %8lu, %8lu",
     VAR_1[VAR_4].name, VAR_2->proto_in[VAR_4], VAR_2->proto_out[VAR_4]);
    if ((VAR_4 % 2) == 0)
      FUNC_0(VAR_3, "\n");
  }
  if (!(VAR_4 % 2))
    FUNC_0(VAR_3, "\n");
}
