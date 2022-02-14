
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct fsm_opt_hdr {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct fsm_opt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;

struct fsm_opt *
FUNC_1(u_char **VAR_1)
{
  struct fsm_opt *VAR_2 = (struct fsm_opt *)*VAR_1;

  if (VAR_2->hdr.len < sizeof(struct fsm_opt_hdr)) {
    FUNC_0(VAR_0, "Bad option length %d (out of phase?)\n", VAR_2->hdr.len);
    return ((void*)0);
  }

  *VAR_1 += VAR_2->hdr.len;

  if (VAR_2->hdr.len > sizeof(struct fsm_opt)) {
    FUNC_0(VAR_0, "Warning: Truncating option length from %d to %d\n",
               VAR_2->hdr.len, (int)sizeof(struct fsm_opt));
    VAR_2->hdr.len = sizeof(struct fsm_opt);
  }

  return VAR_2;
}
