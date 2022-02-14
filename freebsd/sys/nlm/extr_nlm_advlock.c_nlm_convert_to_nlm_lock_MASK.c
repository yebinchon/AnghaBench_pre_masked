
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_lock {int l_len; int l_offset; int svid; int oh; int fh; int caller_name; } ;
struct nlm4_lock {int l_len; int l_offset; int svid; int oh; int fh; int caller_name; } ;



__attribute__((used)) static void
FUNC_0(struct nlm_lock *VAR_0, struct nlm4_lock *VAR_1)
{

 VAR_0->caller_name = VAR_1->caller_name;
 VAR_0->fh = VAR_1->fh;
 VAR_0->oh = VAR_1->oh;
 VAR_0->svid = VAR_1->svid;
 VAR_0->l_offset = VAR_1->l_offset;
 VAR_0->l_len = VAR_1->l_len;
}
