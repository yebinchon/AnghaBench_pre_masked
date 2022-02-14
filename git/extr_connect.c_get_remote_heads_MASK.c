
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int dummy; } ;
struct packet_reader {int pktlen; int line; } ;
struct oid_array {int dummy; } ;
typedef enum get_remote_heads_state { ____Placeholder_get_remote_heads_state } get_remote_heads_state ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ref*) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct packet_reader*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,struct ref***,unsigned int,struct oid_array*) ;
 int FUNC_8 (int ,int,struct oid_array*) ;

struct ref **FUNC_9(struct packet_reader *VAR_0,
         struct ref **VAR_1, unsigned int VAR_2,
         struct oid_array *VAR_3,
         struct oid_array *VAR_4)
{
 struct ref **VAR_5 = VAR_1;
 int VAR_6 = 0;
 enum get_remote_heads_state VAR_7 = 134;

 *VAR_1 = ((void*)0);

 while (VAR_7 != 135) {
  switch (FUNC_4(VAR_0)) {
  case 130:
   FUNC_3(1);
  case 128:
   VAR_6 = VAR_0->pktlen;
   break;
  case 129:
   VAR_7 = 135;
   break;
  case 131:
   FUNC_2(FUNC_0("invalid packet"));
  }

  switch (VAR_7) {
  case 134:
   FUNC_5(VAR_0->line, &VAR_6);
   if (FUNC_6(VAR_0->line)) {
    VAR_7 = 132;
    break;
   }
   VAR_7 = 133;

  case 133:
   if (FUNC_7(VAR_0->line, VAR_6, &VAR_1, VAR_2, VAR_3))
    break;
   VAR_7 = 132;

  case 132:
   if (FUNC_8(VAR_0->line, VAR_6, VAR_4))
    break;
   FUNC_2(FUNC_0("protocol error: unexpected '%s'"), VAR_0->line);
  case 135:
   break;
  }
 }

 FUNC_1(*VAR_5);

 return VAR_1;
}
