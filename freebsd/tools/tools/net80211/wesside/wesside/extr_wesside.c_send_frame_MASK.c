
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_usec; int tv_sec; } ;
struct TYPE_3__ {int retries; int waiting_ack; TYPE_2__ tsent; int psent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (int,unsigned char*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (char*,int) ;
 TYPE_1__ VAR_0 ;

void FUNC_11(int VAR_1, unsigned char* VAR_2, int VAR_3) {
 static unsigned char* VAR_4 = 0;
 static int VAR_5 = 0;
 static int VAR_6 = 0;


 if (VAR_3 == -1) {
  VAR_0.retries++;

  if (VAR_0.retries > 10) {
   FUNC_10("ERROR Max retransmists for (%d bytes):\n",
          VAR_6);
   FUNC_4(&VAR_4[0], VAR_6);

  }
  VAR_3 = VAR_6;

 }

 else {
  FUNC_0(!VAR_0.waiting_ack);

  if (VAR_3 > VAR_5) {
   if (VAR_4)
    FUNC_2(VAR_4);

   VAR_4 = (unsigned char*) FUNC_6(VAR_3);
   if(!VAR_4) {
    FUNC_8("malloc()");
    FUNC_1(1);
   }

   VAR_5 = VAR_3;
  }

  FUNC_7(VAR_4, VAR_2, VAR_3);
  VAR_0.retries = 0;
  VAR_6 = VAR_3;
 }

 FUNC_5(VAR_1, VAR_4, VAR_3);

 VAR_0.waiting_ack = 1;
 VAR_0.psent++;
 if (FUNC_3(&VAR_0.tsent, ((void*)0)) == -1) {
  FUNC_8("gettimeofday()");
  FUNC_1(1);
 }





}
