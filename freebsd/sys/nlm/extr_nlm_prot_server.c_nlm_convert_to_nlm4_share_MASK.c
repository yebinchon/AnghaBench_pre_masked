
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_share {int access; int mode; int oh; int fh; int caller_name; } ;
struct nlm4_share {int access; int mode; int oh; int fh; int caller_name; } ;



__attribute__((used)) static void
FUNC_0(struct nlm4_share *VAR_0, struct nlm_share *VAR_1)
{

 VAR_0->caller_name = VAR_1->caller_name;
 VAR_0->fh = VAR_1->fh;
 VAR_0->oh = VAR_1->oh;
 VAR_0->mode = VAR_1->mode;
 VAR_0->access = VAR_1->access;
}
