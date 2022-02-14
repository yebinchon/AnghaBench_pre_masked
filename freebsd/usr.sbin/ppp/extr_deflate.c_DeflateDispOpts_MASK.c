
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsm_opt {int* data; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(struct fsm_opt *VAR_0)
{
  static char VAR_1[7];

  FUNC_0(VAR_1, "win %d", (VAR_0->data[0]>>4) + 8);
  return VAR_1;
}
