
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int member_0; int member_1; } ;
struct TYPE_4__ {char* mon_name; int state; } ;
typedef TYPE_1__ stat_chge ;
typedef int our_hostname ;
struct TYPE_5__ {int ourState; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ,int ,TYPE_1__*,int ,char*,struct timeval) ;
 int * FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*,int) ;
 TYPE_2__* VAR_10 ;
 int FUNC_5 (int ,char*,char*,...) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_6(char *VAR_13, int VAR_14)
{
  struct timeval VAR_15 = { 20, 0 };
  CLIENT *VAR_16;
  char VAR_17;
  stat_chge VAR_18;
  char VAR_19[VAR_4+1];

  FUNC_4(VAR_19, sizeof(VAR_19));
  VAR_19[VAR_4] = '\0';
  VAR_18.mon_name = VAR_19;
  VAR_18.state = VAR_10->ourState;

  if (VAR_9) FUNC_5 (VAR_1, "Sending SM_NOTIFY to host %s from %s", VAR_13, VAR_19);

  VAR_16 = FUNC_1(VAR_13, VAR_6, VAR_7, "udp");
  if (!VAR_16)
  {
    FUNC_5(VAR_2, "Failed to contact host %s%s", VAR_13,
      FUNC_3(""));
    return (VAR_0);
  }

  if (FUNC_0(VAR_16, VAR_5, (xdrproc_t)VAR_11, &VAR_18,
      (xdrproc_t)VAR_12, &VAR_17, VAR_15)
    != VAR_3)
  {
    if (VAR_14)
      FUNC_5(VAR_2, "Failed to contact rpc.statd at host %s", VAR_13);
    FUNC_2(VAR_16);
    return (VAR_0);
  }

  FUNC_2(VAR_16);
  return (VAR_8);
}
