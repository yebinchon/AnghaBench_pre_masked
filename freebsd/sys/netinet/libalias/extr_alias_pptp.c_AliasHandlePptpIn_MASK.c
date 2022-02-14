
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct tcphdr {int th_sum; } ;
struct libalias {int dummy; } ;
struct ip {int dummy; } ;
struct alias_link {int dummy; } ;
struct TYPE_5__ {int cid1; int cid2; } ;
struct TYPE_4__ {int resCode; } ;
typedef TYPE_1__* PptpCode ;
typedef TYPE_2__* PptpCallId ;


 int FUNC_0 (int,int ) ;
 TYPE_2__* FUNC_1 (struct ip*,int*) ;
 struct alias_link* FUNC_2 (struct libalias*,int ,int ,int) ;
 struct alias_link* FUNC_3 (struct libalias*,int ,int ,int) ;
 int FUNC_4 (struct alias_link*) ;
 int FUNC_5 (struct alias_link*) ;
 int FUNC_6 (struct alias_link*) ;






 int FUNC_7 (struct alias_link*,int) ;
 int FUNC_8 (struct alias_link*,int ) ;
 scalar_t__ FUNC_9 (struct ip*) ;

__attribute__((used)) static void
FUNC_10(struct libalias *VAR_0,
    struct ip *VAR_1,
    struct alias_link *VAR_2)
{
 struct alias_link *VAR_3;
 PptpCallId VAR_4;
 u_int16_t *VAR_5;
 u_int16_t VAR_6;
 struct tcphdr *VAR_7;


 if ((VAR_4 = FUNC_1(VAR_1, &VAR_6)) == ((void*)0))
  return;


 switch (VAR_6) {
 case 132:
 case 128:
 case 129:
  VAR_5 = &VAR_4->cid1;
  break;
 case 130:
 case 131:
  VAR_5 = &VAR_4->cid2;
  break;
 case 133:
  VAR_3 = FUNC_2(VAR_0, FUNC_5(VAR_2),
      FUNC_4(VAR_2),
      VAR_4->cid1);
  if (VAR_3 != ((void*)0))
   FUNC_8(VAR_3, 0);
  return;
 default:
  return;
 }


 VAR_3 = FUNC_3(VAR_0, FUNC_5(VAR_2),
     FUNC_4(VAR_2),
     *VAR_5);

 if (VAR_3 != ((void*)0)) {
  int VAR_8 = *VAR_5;


  *VAR_5 = FUNC_6(VAR_3);


  VAR_7 = (struct tcphdr *)FUNC_9(VAR_1);
  VAR_8 -= *VAR_5;
  FUNC_0(VAR_8, VAR_7->th_sum);

  if (VAR_6 == 130 || VAR_6 == 131) {
   PptpCode VAR_9 = (PptpCode) (VAR_4 + 1);

   if (VAR_9->resCode == 1)

    FUNC_7(VAR_3,
        VAR_4->cid1);
   else
    FUNC_8(VAR_3, 0);
  }
 }
}
