
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_holder {int l_len; int l_offset; int oh; int svid; int exclusive; } ;
struct nlm4_holder {int l_len; int l_offset; int oh; int svid; int exclusive; } ;



__attribute__((used)) static void
FUNC_0(struct nlm4_holder *VAR_0, struct nlm_holder *VAR_1)
{

 VAR_0->exclusive = VAR_1->exclusive;
 VAR_0->svid = VAR_1->svid;
 VAR_0->oh = VAR_1->oh;
 VAR_0->l_offset = VAR_1->l_offset;
 VAR_0->l_len = VAR_1->l_len;
}
