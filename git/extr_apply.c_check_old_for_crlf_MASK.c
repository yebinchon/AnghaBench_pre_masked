
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int crlf_in_old; int ws_rule; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct patch *VAR_1, const char *VAR_2, int VAR_3)
{
 if (VAR_3 >= 2 && VAR_2[VAR_3-1] == '\n' && VAR_2[VAR_3-2] == '\r') {
  VAR_1->ws_rule |= VAR_0;
  VAR_1->crlf_in_old = 1;
 }
}
