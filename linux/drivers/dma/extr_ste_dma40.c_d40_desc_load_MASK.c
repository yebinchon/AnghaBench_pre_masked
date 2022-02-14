
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d40_desc {int lli_len; int lli_current; } ;
struct d40_chan {int dummy; } ;


 scalar_t__ FUNC_0 (struct d40_chan*) ;
 int FUNC_1 (struct d40_chan*,struct d40_desc*) ;
 int FUNC_2 (struct d40_chan*,struct d40_desc*) ;

__attribute__((used)) static void FUNC_3(struct d40_chan *VAR_0, struct d40_desc *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_0, VAR_1);
  VAR_1->lli_current = VAR_1->lli_len;
 } else
  FUNC_1(VAR_0, VAR_1);
}
