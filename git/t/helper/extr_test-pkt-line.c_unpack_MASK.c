
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_reader {int status; char* line; } ;


 int VAR_0 ;



 int VAR_1 ;

 int FUNC_0 (struct packet_reader*,int ,int *,int ,int) ;
 scalar_t__ FUNC_1 (struct packet_reader*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct packet_reader VAR_2;
 FUNC_0(&VAR_2, 0, ((void*)0), 0,
      VAR_1 |
      VAR_0);

 while (FUNC_1(&VAR_2) != 130) {
  switch (VAR_2.status) {
  case 130:
   break;
  case 128:
   FUNC_2("%s\n", VAR_2.line);
   break;
  case 129:
   FUNC_2("0000\n");
   break;
  case 131:
   FUNC_2("0001\n");
   break;
  }
 }
}
