
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mailinfo {int log_message; int *** content_top; int *** content; int ** s_hdr_data; int ** p_hdr_data; int ** message_id; int inbody_header_accum; int charset; int email; int name; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mailinfo *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->name);
 FUNC_1(&VAR_0->email);
 FUNC_1(&VAR_0->charset);
 FUNC_1(&VAR_0->inbody_header_accum);
 FUNC_0(VAR_0->message_id);

 if (VAR_0->p_hdr_data)
  for (VAR_1 = 0; VAR_0->p_hdr_data[VAR_1]; VAR_1++)
   FUNC_1(VAR_0->p_hdr_data[VAR_1]);
 FUNC_0(VAR_0->p_hdr_data);
 if (VAR_0->s_hdr_data)
  for (VAR_1 = 0; VAR_0->s_hdr_data[VAR_1]; VAR_1++)
   FUNC_1(VAR_0->s_hdr_data[VAR_1]);
 FUNC_0(VAR_0->s_hdr_data);

 while (VAR_0->content < VAR_0->content_top) {
  FUNC_0(*(VAR_0->content_top));
  VAR_0->content_top--;
 }

 FUNC_1(&VAR_0->log_message);
}
