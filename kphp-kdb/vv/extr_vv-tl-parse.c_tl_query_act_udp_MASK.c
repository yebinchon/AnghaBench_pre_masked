
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_bytes; } ;
struct udp_msg {int S; TYPE_1__ raw; } ;
struct tl_query_header {scalar_t__ op; int qid; } ;
struct raw_message {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct tl_query_header*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct raw_message*,TYPE_1__*) ;
 int FUNC_4 (struct raw_message*) ;
 int FUNC_5 (struct raw_message*,int ) ;
 int FUNC_6 (struct tl_query_header*) ;
 int FUNC_7 (int ,int ) ;
 struct tl_query_header* FUNC_8 (int) ;

int FUNC_9 (struct udp_msg *VAR_1) {



  FUNC_0 ();
  struct raw_message VAR_2;
  FUNC_3 (&VAR_2, &VAR_1->raw);
  FUNC_5 (&VAR_2, VAR_1->raw.total_bytes);
  FUNC_4 (&VAR_2);
  struct tl_query_header *VAR_3 = FUNC_8 (sizeof (*VAR_3));
  FUNC_6 (VAR_3);
  FUNC_2 (VAR_1->S);
  FUNC_7 (VAR_1->S, VAR_3->qid);

  if (VAR_3->op != VAR_0) {
    return 0;
  }

  FUNC_1 (VAR_3);
  return 0;
}
