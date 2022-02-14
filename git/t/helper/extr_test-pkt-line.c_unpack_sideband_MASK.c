
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_reader {int status; int* line; int pktlen; } ;


 int VAR_0 ;



 int VAR_1 ;

 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct packet_reader*,int ,int *,int ,int) ;
 scalar_t__ FUNC_2 (struct packet_reader*) ;
 int FUNC_3 (int,int ,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct packet_reader VAR_2;
 FUNC_1(&VAR_2, 0, ((void*)0), 0,
      VAR_1 |
      VAR_0);

 while (FUNC_2(&VAR_2) != 130) {
  int VAR_3;
  int VAR_4;

  switch (VAR_2.status) {
  case 130:
   break;
  case 128:
   VAR_3 = VAR_2.line[0] & 0xff;
   if (VAR_3 < 1 || VAR_3 > 2)
    FUNC_0("unexpected side band %d", VAR_3);
   VAR_4 = VAR_3;

   FUNC_3(VAR_4, *(VAR_2.line + 1), VAR_2.pktlen - 1);
   break;
  case 129:
   return;
  case 131:
   break;
  }
 }
}
