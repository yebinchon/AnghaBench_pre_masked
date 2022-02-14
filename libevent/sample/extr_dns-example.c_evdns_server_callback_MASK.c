
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct evdns_server_request {int nquestions; TYPE_1__** questions; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ dns_question_class; char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct evdns_server_request*,char*,int,int *,int) ;
 int FUNC_1 (struct evdns_server_request*,int *,char*,char*,int) ;
 int FUNC_2 (struct evdns_server_request*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(struct evdns_server_request *VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;
 (void)VAR_4;


 for (VAR_5 = 0; VAR_5 < VAR_3->nquestions; ++VAR_5) {
  u32 VAR_7 = FUNC_3(0xc0a80b0bUL);
  if (VAR_3->questions[VAR_5]->type == VAR_1 &&
      VAR_3->questions[VAR_5]->dns_question_class == VAR_0) {
   FUNC_4(" -- replying for %s (A)\n", VAR_3->questions[VAR_5]->name);
   VAR_6 = FUNC_0(VAR_3, VAR_3->questions[VAR_5]->name,
            1, &VAR_7, 10);
   if (VAR_6<0)
    FUNC_4("eeep, didn't work.\n");
  } else if (VAR_3->questions[VAR_5]->type == VAR_2 &&
      VAR_3->questions[VAR_5]->dns_question_class == VAR_0) {
   FUNC_4(" -- replying for %s (PTR)\n", VAR_3->questions[VAR_5]->name);
   VAR_6 = FUNC_1(VAR_3, ((void*)0), VAR_3->questions[VAR_5]->name,
           "foo.bar.example.com", 10);
   if (VAR_6<0)
    FUNC_4("ugh, no luck");
  } else {
   FUNC_4(" -- skipping %s [%d %d]\n", VAR_3->questions[VAR_5]->name,
       VAR_3->questions[VAR_5]->type, VAR_3->questions[VAR_5]->dns_question_class);
  }
 }

 VAR_6 = FUNC_2(VAR_3, 0);
 if (VAR_6<0)
  FUNC_4("eeek, couldn't send reply.\n");
}
