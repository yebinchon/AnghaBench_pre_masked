
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct emit_callback {unsigned int ws_rule; int blank_at_eof_in_preimage; int blank_at_eof_in_postimage; } ;
struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ mmfile_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_2(mmfile_t *VAR_0, mmfile_t *VAR_1,
          struct emit_callback *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 unsigned VAR_6 = VAR_2->ws_rule;
 VAR_3 = FUNC_1(VAR_0, VAR_6);
 VAR_4 = FUNC_1(VAR_1, VAR_6);
 if (VAR_4 <= VAR_3) {
  VAR_2->blank_at_eof_in_preimage = 0;
  VAR_2->blank_at_eof_in_postimage = 0;
  return;
 }
 VAR_5 = FUNC_0(VAR_0->ptr, VAR_0->size);
 VAR_2->blank_at_eof_in_preimage = (VAR_5 - VAR_3) + 1;

 VAR_5 = FUNC_0(VAR_1->ptr, VAR_1->size);
 VAR_2->blank_at_eof_in_postimage = (VAR_5 - VAR_4) + 1;
}
