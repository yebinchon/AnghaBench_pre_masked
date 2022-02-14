
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mailinfo {int header_stage; int use_inbody_headers; int content; int content_top; int inbody_header_accum; int log_message; int charset; int email; int name; } ;


 int FUNC_0 (int ,struct mailinfo*) ;
 int VAR_0 ;
 int FUNC_1 (struct mailinfo*,int ,int) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct mailinfo *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_2(&VAR_1->name, 0);
 FUNC_2(&VAR_1->email, 0);
 FUNC_2(&VAR_1->charset, 0);
 FUNC_2(&VAR_1->log_message, 0);
 FUNC_2(&VAR_1->inbody_header_accum, 0);
 VAR_1->header_stage = 1;
 VAR_1->use_inbody_headers = 1;
 VAR_1->content_top = VAR_1->content;
 FUNC_0(VAR_0, VAR_1);
}
