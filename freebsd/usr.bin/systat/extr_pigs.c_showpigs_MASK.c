
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct p_times {int dummy; } ;
typedef int pidname ;
struct TYPE_5__ {double pt_pctcpu; TYPE_1__* pt_kp; } ;
struct TYPE_4__ {char* ki_comm; int ki_uid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,char const*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,int,int ) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int) ;
 int VAR_3 ;

void
FUNC_9(void)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 const char *VAR_8, *VAR_9;
 char VAR_10[30];

 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(VAR_2, VAR_1, sizeof (struct p_times), VAR_0);
 VAR_6 = 1;
 VAR_4 = VAR_1;
 if (VAR_4 > FUNC_0(VAR_3)-2)
  VAR_4 = FUNC_0(VAR_3)-2;
 for (VAR_7 = 0; VAR_4 > 0 && VAR_2[VAR_7].pt_pctcpu > 0.01; VAR_4--, VAR_6++, VAR_7++) {
  VAR_8 = FUNC_4(VAR_2[VAR_7].pt_kp->ki_uid, 0);
  VAR_9 = VAR_2[VAR_7].pt_kp->ki_comm;
  FUNC_8(VAR_3, VAR_6, 0);
  FUNC_7(VAR_3);
  FUNC_1(VAR_3, VAR_6, 0, VAR_8);
  FUNC_3(VAR_10, sizeof(VAR_10), "%10.10s", VAR_9);
  FUNC_1(VAR_3, VAR_6, 9, VAR_10);
  FUNC_8(VAR_3, VAR_6, 20);
  for (VAR_5 = VAR_2[VAR_7].pt_pctcpu * 50 + 0.5; VAR_5 > 0; VAR_5--)
   FUNC_5(VAR_3, 'X');
 }
 FUNC_8(VAR_3, VAR_6, 0); FUNC_6(VAR_3);
}
