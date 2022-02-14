
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* h_name; } ;
struct TYPE_4__ {int sin_addr; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 TYPE_2__* FUNC_4 (char*,int,int ) ;
 TYPE_2__* VAR_2 ;
 long FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_9 (char*,char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(char *VAR_5)
{
 char VAR_6[256];
 char VAR_7[1024];
 char VAR_8[80], VAR_9[80];
 long VAR_10;
 FILE *VAR_11;

 FUNC_11(VAR_6,FUNC_6(VAR_4.sin_addr));
 FUNC_9(VAR_9, "REMOTE_ADDR=%s",VAR_6);

 VAR_10=FUNC_5(VAR_6);

 FUNC_11(VAR_7,FUNC_0());
 FUNC_10(VAR_7,"    ");
 VAR_2=FUNC_4((char*) &VAR_10, 4, VAR_0);


 if (VAR_2) {
   FUNC_10(VAR_7,VAR_2->h_name);
   FUNC_9(VAR_8, "REMOTE_HOST=%s",VAR_2->h_name);
 }
 FUNC_10(VAR_7," (");
 FUNC_10(VAR_7,VAR_6);
 FUNC_10(VAR_7,")   ");
 FUNC_10(VAR_7,VAR_5);

 if (VAR_1) {
   VAR_11=FUNC_2(VAR_3,"a");
   FUNC_3(VAR_11,"%s\n",VAR_7);
   FUNC_1(VAR_11);
 } else
   FUNC_7("%s\n",VAR_7);


 FUNC_8(VAR_9);
 FUNC_8(VAR_8);
}
