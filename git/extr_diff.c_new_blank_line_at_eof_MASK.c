
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emit_callback {int ws_rule; scalar_t__ blank_at_eof_in_preimage; scalar_t__ blank_at_eof_in_postimage; scalar_t__ lno_in_preimage; scalar_t__ lno_in_postimage; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,int) ;

__attribute__((used)) static int FUNC_1(struct emit_callback *VAR_1, const char *VAR_2, int VAR_3)
{
 if (!((VAR_1->ws_rule & VAR_0) &&
       VAR_1->blank_at_eof_in_preimage &&
       VAR_1->blank_at_eof_in_postimage &&
       VAR_1->blank_at_eof_in_preimage <= VAR_1->lno_in_preimage &&
       VAR_1->blank_at_eof_in_postimage <= VAR_1->lno_in_postimage))
  return 0;
 return FUNC_0(VAR_2, VAR_3, VAR_1->ws_rule);
}
