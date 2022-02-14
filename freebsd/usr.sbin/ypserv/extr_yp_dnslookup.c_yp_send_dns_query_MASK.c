
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int buf ;
struct TYPE_4__ {int nscount; int * nsaddr_list; } ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int,int *,int ,int *,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static unsigned long
FUNC_5(char *VAR_5, int VAR_6)
{
 char VAR_7[VAR_1];
 int VAR_8;
 HEADER *VAR_9;
 int VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 FUNC_0(VAR_7, sizeof(VAR_7));

 VAR_8 = FUNC_2(VAR_2,VAR_5,VAR_0,VAR_6,((void*)0),0,((void*)0),VAR_7,sizeof(VAR_7));

 if (VAR_8 <= 0) {
  FUNC_4("res_mkquery failed for %s type %d", VAR_5, VAR_6);
  return(0);
 }

 VAR_9 = (HEADER *)&VAR_7;
 VAR_12 = FUNC_1(VAR_9->id);

 for (VAR_10 = 0; VAR_10 < VAR_3.nscount; VAR_10++) {
  VAR_11 = FUNC_3(VAR_4, VAR_7, VAR_8, 0,
   (struct sockaddr *)&VAR_3.nsaddr_list[VAR_10],
    sizeof(struct sockaddr));
  if (VAR_11 == -1) {
   FUNC_4("sendto failed");
   return(0);
  }
 }

 return(VAR_12);
}
