
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protocol_capability {int (* command ) (int ,struct argv_array*,struct packet_reader*) ;} ;
struct packet_reader {int options; int line; } ;
struct argv_array {int argc; } ;
typedef enum request_state { ____Placeholder_request_state } request_state ;


 struct argv_array VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,struct protocol_capability**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct packet_reader*,int ,int *,int ,int) ;
 int FUNC_7 (struct packet_reader*) ;
 int FUNC_8 (struct packet_reader*) ;
 int FUNC_9 (int ,struct argv_array*,struct packet_reader*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(void)
{
 enum request_state VAR_7 = VAR_5;
 struct packet_reader VAR_8;
 struct argv_array VAR_9 = VAR_0;
 struct protocol_capability *VAR_10 = ((void*)0);

 FUNC_6(&VAR_8, 0, ((void*)0), 0,
      VAR_1 |
      VAR_3 |
      VAR_2);





 if (FUNC_7(&VAR_8) == 130)
  return 1;
 VAR_8.options &= ~VAR_3;

 while (VAR_7 != VAR_4) {
  switch (FUNC_7(&VAR_8)) {
  case 130:
   FUNC_0("Should have already died when seeing EOF");
  case 128:

   if (FUNC_4(VAR_8.line, &VAR_10) ||
       FUNC_5(VAR_8.line))
    FUNC_2(&VAR_9, VAR_8.line);
   else
    FUNC_3("unknown capability '%s'", VAR_8.line);


   FUNC_8(&VAR_8);
   break;
  case 129:




   if (!VAR_9.argc)
    return 1;
   VAR_7 = VAR_4;
   break;
  case 131:

   FUNC_8(&VAR_8);

   VAR_7 = VAR_4;
   break;
  }
 }

 if (!VAR_10)
  FUNC_3("no command requested");

 VAR_10->command(VAR_6, &VAR_9, &VAR_8);

 FUNC_1(&VAR_9);
 return 0;
}
