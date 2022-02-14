
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int flags; int nquestions; TYPE_1__** questions; } ;
struct server_request {int trans_id; int n_answer; int n_authority; int n_additional; int response_len; unsigned char* response; struct server_reply_item* additional; struct server_reply_item* authority; struct server_reply_item* answer; TYPE_2__ base; } ;
struct server_reply_item {char const* name; int type; int dns_question_class; char const* data; int datalen; struct server_reply_item* next; scalar_t__ is_name; int ttl; } ;
struct dnslabel_table {int dummy; } ;
typedef int off_t ;
typedef int buf ;
struct TYPE_3__ {char* name; int type; int dns_question_class; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct dnslabel_table*) ;
 int FUNC_3 (struct dnslabel_table*) ;
 int FUNC_4 (unsigned char*,size_t,int,char const*,int ,struct dnslabel_table*) ;
 int FUNC_5 (short) ;
 int FUNC_6 (unsigned char*,...) ;
 unsigned char* FUNC_7 (int) ;
 int FUNC_8 (struct server_request*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int
FUNC_10(struct server_request *VAR_1, int VAR_2)
{
 unsigned char VAR_3[1500];
 size_t VAR_4 = sizeof(VAR_3);
 off_t VAR_5 = 0, VAR_6;
 u16 VAR_7;
 u32 VAR_8;
 int VAR_9;
 u16 VAR_10;
 struct dnslabel_table VAR_11;

 if (VAR_2 < 0 || VAR_2 > 15) return -1;



 VAR_10 = VAR_1->base.flags;
 VAR_10 |= (VAR_0 | VAR_2);

 FUNC_3(&VAR_11);
 FUNC_0(VAR_1->trans_id);
 FUNC_0(VAR_10);
 FUNC_0(VAR_1->base.nquestions);
 FUNC_0(VAR_1->n_answer);
 FUNC_0(VAR_1->n_authority);
 FUNC_0(VAR_1->n_additional);


 for (VAR_9=0; VAR_9 < VAR_1->base.nquestions; ++VAR_9) {
  const char *VAR_12 = VAR_1->base.questions[VAR_9]->name;
  VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_12, FUNC_9(VAR_12), &VAR_11);
  if (VAR_5 < 0) {
   FUNC_2(&VAR_11);
   return (int) VAR_5;
  }
  FUNC_0(VAR_1->base.questions[VAR_9]->type);
  FUNC_0(VAR_1->base.questions[VAR_9]->dns_question_class);
 }


 for (VAR_9=0; VAR_9<3; ++VAR_9) {
  struct server_reply_item *VAR_13;
  if (VAR_9==0)
   VAR_13 = VAR_1->answer;
  else if (VAR_9==1)
   VAR_13 = VAR_1->authority;
  else
   VAR_13 = VAR_1->additional;
  while (VAR_13) {
   VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_13->name, FUNC_9(VAR_13->name), &VAR_11);
   if (VAR_6 < 0)
    goto overflow;
   VAR_5 = VAR_6;

   FUNC_0(VAR_13->type);
   FUNC_0(VAR_13->dns_question_class);
   FUNC_1(VAR_13->ttl);
   if (VAR_13->is_name) {
    off_t VAR_14 = VAR_5, VAR_15;
    VAR_5 += 2;
    VAR_15 = VAR_5;
    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_13->data, FUNC_9(VAR_13->data), &VAR_11);
    if (VAR_6 < 0)
     goto overflow;
    VAR_5 = VAR_6;
    VAR_7 = FUNC_5( (short) (VAR_5-VAR_15) );
    FUNC_6(VAR_3+VAR_14, &VAR_7, 2);
   } else {
    FUNC_0(VAR_13->datalen);
    if (VAR_5+VAR_13->datalen > (off_t)VAR_4)
     goto overflow;
    FUNC_6(VAR_3+VAR_5, VAR_13->data, VAR_13->datalen);
    VAR_5 += VAR_13->datalen;
   }
   VAR_13 = VAR_13->next;
  }
 }

 if (VAR_5 > 512) {
overflow:
  VAR_5 = 512;
  VAR_3[2] |= 0x02;
 }

 VAR_1->response_len = VAR_5;

 if (!(VAR_1->response = FUNC_7(VAR_1->response_len))) {
  FUNC_8(VAR_1);
  FUNC_2(&VAR_11);
  return (-1);
 }
 FUNC_6(VAR_1->response, VAR_3, VAR_1->response_len);
 FUNC_8(VAR_1);
 FUNC_2(&VAR_11);
 return (0);
}
