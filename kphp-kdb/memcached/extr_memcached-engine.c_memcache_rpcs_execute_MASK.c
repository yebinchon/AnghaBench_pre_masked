
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_query_header {int op; scalar_t__ actor_id; int qid; } ;
struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct connection*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct tl_query_header*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,char*,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (struct connection*,int ) ;

int FUNC_15 (struct connection *VAR_7, int VAR_8, int VAR_9) {
  if (VAR_8 != VAR_0) {
    return VAR_1;
  }
  FUNC_3 (VAR_7, VAR_9 - 4);
  struct tl_query_header VAR_10;
  FUNC_5 (&VAR_10);
  FUNC_14 (VAR_7, VAR_10.qid);
  FUNC_1 (VAR_10.op == VAR_8 || FUNC_2 ());

  if (VAR_10.actor_id) {
    FUNC_6 ("Memcached only support actor_id = 0", 0);
  }

  int VAR_11 = FUNC_4 ();
  int VAR_12 = -1;

  switch (VAR_11) {
  case 128:
    VAR_12 = FUNC_12 (VAR_6);
    break;
  case 134:
    VAR_12 = FUNC_12 (VAR_4);
    break;
  case 129:
    VAR_12 = FUNC_12 (VAR_5);
    break;
  case 130:
    VAR_12 = FUNC_11 (0);
    break;
  case 133:
    VAR_12 = FUNC_11 (1);
    break;
  case 132:
    VAR_12 = FUNC_9 ();
    break;
  case 131:
    VAR_12 = FUNC_10 ();
    break;
  default:
    FUNC_7 (VAR_3, "Unknown function id 0x%08x", VAR_11);
  }

  if (VAR_12 < 0) {
    FUNC_6 ("Unknown error occured", VAR_2);
  }
  FUNC_13 ();
  FUNC_1 (FUNC_0 (&VAR_7->In, 4 + FUNC_8 ()) == 4 + FUNC_8 ());
  return 0;

}
