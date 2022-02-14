
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int op; int qid; } ;
struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct tl_query_header*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct connection*,int) ;
 int FUNC_6 (struct tl_query_header*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct connection*,int ) ;
 struct tl_query_header* FUNC_9 (int) ;

int FUNC_10 (struct connection *VAR_2, int VAR_3, int VAR_4) {
  if (VAR_3 != VAR_0) {
    return VAR_1;
  }



  FUNC_0 ();
  FUNC_5 (VAR_2, VAR_4 - 4);
  struct tl_query_header *VAR_5 = FUNC_9 (sizeof (*VAR_5));
  FUNC_6 (VAR_5);
  FUNC_8 (VAR_2, VAR_5->qid);
  FUNC_3 (VAR_5->op == VAR_3 || FUNC_4 ());

  FUNC_1 (VAR_5);
  FUNC_3 (FUNC_2 (&VAR_2->In, 4 + FUNC_7 ()) == 4 + FUNC_7 ());
  return 0;
}
