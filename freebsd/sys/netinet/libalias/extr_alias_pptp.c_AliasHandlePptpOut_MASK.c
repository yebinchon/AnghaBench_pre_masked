
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
 struct alias_link* FUNC_1 (struct libalias*,int ,int ,int ,int) ;
 TYPE_2__* FUNC_2 (struct ip*,int*) ;
 struct alias_link* FUNC_3 (struct libalias*,int ,int ,int) ;
 int FUNC_4 (struct alias_link*) ;
 int FUNC_5 (struct alias_link*) ;
 int FUNC_6 (struct alias_link*) ;
 int FUNC_7 (struct alias_link*) ;






 int FUNC_8 (struct alias_link*,int ) ;
 int FUNC_9 (struct alias_link*,int ) ;
 scalar_t__ FUNC_10 (struct ip*) ;

__attribute__((used)) static void
FUNC_11(struct libalias *VAR_0,
    struct ip *VAR_1,
    struct alias_link *VAR_2)
{
 struct alias_link *VAR_3;
 PptpCallId VAR_4;
 PptpCode VAR_5;
 u_int16_t VAR_6;
 struct tcphdr *VAR_7;


 if ((VAR_4 = FUNC_2(VAR_1, &VAR_6)) == ((void*)0))
  return;


 switch (VAR_6) {
 case 128:
 case 129:
 case 130:
 case 131:




  VAR_3 = FUNC_1(VAR_0, FUNC_7(VAR_2), FUNC_6(VAR_2),
      FUNC_4(VAR_2), VAR_4->cid1);
  break;
 case 133:
 case 132:




  VAR_3 = FUNC_3(VAR_0, FUNC_7(VAR_2),
      FUNC_6(VAR_2),
      VAR_4->cid1);
  break;
 default:
  return;
 }

 if (VAR_3 != ((void*)0)) {
  int VAR_8 = VAR_4->cid1;


  VAR_4->cid1 = FUNC_5(VAR_3);


  VAR_7 = (struct tcphdr *)FUNC_10(VAR_1);
  VAR_8 -= VAR_4->cid1;
  FUNC_0(VAR_8, VAR_7->th_sum);

  switch (VAR_6) {
  case 129:
  case 131:
   VAR_5 = (PptpCode) (VAR_4 + 1);
   if (VAR_5->resCode == 1)

    FUNC_8(VAR_3,

        VAR_4->cid2);
   else
    FUNC_9(VAR_3, 0);
   break;
  case 132:
   FUNC_9(VAR_3, 0);
   break;
  }
 }
}
