
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_11__ {int state; } ;
typedef TYPE_3__ sm_stat ;
struct TYPE_12__ {char* my_name; } ;
typedef TYPE_4__ my_id ;
typedef int id ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_9__ {int my_proc; int my_vers; int my_prog; int my_name; } ;
struct TYPE_10__ {TYPE_1__ my_id; } ;
struct TYPE_13__ {TYPE_2__ mon_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,int ,int ,int ,TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 TYPE_5__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

void
FUNC_6(void)
{
 enum clnt_stat VAR_14;
 my_id VAR_15;
 sm_stat VAR_16;
 char VAR_17[] = "NFS NLM";






 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.my_name = VAR_17;





 do {
  VAR_14 = FUNC_0("localhost", VAR_6, VAR_8, VAR_7,
      (xdrproc_t)VAR_12, &VAR_15, (xdrproc_t)VAR_13, &VAR_16);
  if (VAR_14 == VAR_5) {
   FUNC_5(VAR_1, "%lu %s", VAR_6,
       FUNC_1(VAR_14));
   FUNC_4(2);
   continue;
  }
  break;
 } while (0);

 if (VAR_14 != 0) {
  FUNC_5(VAR_0, "%lu %s", VAR_6, FUNC_1(VAR_14));
  FUNC_2(1);
 }

 VAR_11 = VAR_16.state;


 VAR_10.mon_id.my_id.my_name = VAR_9;
 VAR_10.mon_id.my_id.my_prog = VAR_2;
 VAR_10.mon_id.my_id.my_vers = VAR_3;
 VAR_10.mon_id.my_id.my_proc = VAR_4;
}
