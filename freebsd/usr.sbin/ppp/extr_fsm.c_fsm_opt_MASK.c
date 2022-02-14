
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u_char ;
struct fsm_opt_hdr {int dummy; } ;
struct TYPE_2__ {unsigned int len; } ;
struct fsm_opt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (unsigned int*,struct fsm_opt const*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(u_char *VAR_1, int VAR_2, const struct fsm_opt *VAR_3)
{
  unsigned VAR_4 = VAR_3->hdr.len;

  if (VAR_2 < (int)sizeof(struct fsm_opt_hdr))
    VAR_2 = 0;

  if ((int)VAR_4 > VAR_2) {
    FUNC_0(VAR_0, "Can't REJ length %d - trunating to %d\n",
      VAR_4, VAR_2);
    VAR_4 = VAR_2;
  }
  FUNC_1(VAR_1, VAR_3, VAR_4);
  if (VAR_4)
    VAR_1[1] = VAR_4;

  return VAR_4;
}
