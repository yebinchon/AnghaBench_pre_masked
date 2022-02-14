
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handshake; scalar_t__ ack; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int VAR_5 ;
 int FUNC_6 (int ,int,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11=0, VAR_12=5000, VAR_13=1000;

 FUNC_5("Software timebase sync\n");


 VAR_6 = FUNC_3( sizeof(*VAR_6), VAR_0 );
 FUNC_4();
 VAR_5 = 1;

 while (!VAR_6->ack)
  FUNC_1();

 FUNC_5("Got ack\n");


 for (VAR_10 = -1; VAR_10 != VAR_13 ; VAR_13 = (VAR_11+VAR_12) / 2) {
  VAR_8 = FUNC_6(VAR_3, VAR_13, VAR_1);

  FUNC_5("score %d, offset %d\n", VAR_8, VAR_13 );

  if( VAR_8 > 0 )
   VAR_12 = VAR_13;
  else
   VAR_11 = VAR_13;
  VAR_10 = VAR_13;
 }
 VAR_8 = FUNC_6(VAR_3, VAR_11, VAR_1);
 VAR_9 = FUNC_6(VAR_3, VAR_12, VAR_1);

 FUNC_5("Min %d (score %d), Max %d (score %d)\n",
   VAR_11, VAR_8, VAR_12, VAR_9);
 VAR_8 = FUNC_0(VAR_8);
 VAR_9 = FUNC_0(VAR_9);
 VAR_13 = (VAR_8 < VAR_9) ? VAR_11 : VAR_12;


 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  FUNC_6(VAR_3, VAR_13, VAR_1/10);

  if ((VAR_9 = FUNC_6(VAR_4, VAR_13, VAR_1)) < 0)
   VAR_9 = -VAR_9;
  if (VAR_9 <= VAR_8 || VAR_9 < 20)
   break;
 }
 FUNC_5("Final offset: %d (%d/%d)\n", VAR_13, VAR_9, VAR_1 );


 VAR_6->cmd = VAR_2;
 FUNC_7();
 VAR_6->handshake = 1;
 while (VAR_6->ack)
  FUNC_1();
 VAR_6->handshake = 0;
 FUNC_2(VAR_6);
 VAR_6 = ((void*)0);
 VAR_5 = 0;
}
