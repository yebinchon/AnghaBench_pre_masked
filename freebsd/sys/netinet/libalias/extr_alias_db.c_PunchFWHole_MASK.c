
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct libalias {int packetAliasMode; scalar_t__ fireWallFD; int fireWallActiveNum; int fireWallBaseNum; int fireWallNumNums; int fireWallField; } ;
struct ip_fw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* tcp; } ;
struct alias_link {scalar_t__ link_type; TYPE_2__ data; struct libalias* la; } ;
typedef int rulebuf ;
struct TYPE_3__ {int fwhole; } ;


 int FUNC_0 (struct alias_link*) ;
 scalar_t__ FUNC_1 (struct alias_link*) ;
 int FUNC_2 (struct alias_link*) ;
 scalar_t__ FUNC_3 (struct alias_link*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *,int,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct libalias*,int ,int) ;
 scalar_t__ FUNC_8 (struct libalias*,int ,int) ;
 int FUNC_9 (struct ip_fw*,int ,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,int ,int *,int) ;
 int VAR_6 ;

void
FUNC_12(struct alias_link *VAR_7)
{
 struct libalias *VAR_8;
 int VAR_9;
 struct ip_fw VAR_10;
 int VAR_11;

 VAR_8 = VAR_7->la;


 if (!(VAR_8->packetAliasMode & VAR_5) ||
     VAR_8->fireWallFD < 0 ||
     VAR_7->link_type != VAR_3)
  return;

 FUNC_9(&VAR_10, 0, sizeof VAR_10);




 for (VAR_11 = VAR_8->fireWallActiveNum;
     VAR_11 < VAR_8->fireWallBaseNum + VAR_8->fireWallNumNums &&
     FUNC_8(VAR_8, VAR_8->fireWallField, VAR_11);
     VAR_11++);
 if (VAR_11 == VAR_8->fireWallBaseNum + VAR_8->fireWallNumNums) {
  for (VAR_11 = VAR_8->fireWallBaseNum;
      VAR_11 < VAR_8->fireWallActiveNum &&
      FUNC_8(VAR_8, VAR_8->fireWallField, VAR_11);
      VAR_11++);
  if (VAR_11 == VAR_8->fireWallActiveNum) {

   VAR_8->fireWallActiveNum = VAR_8->fireWallBaseNum;



   return;
  }
 }

 VAR_8->fireWallActiveNum = VAR_11 + 1;







 if (FUNC_3(VAR_7) != 0 && FUNC_1(VAR_7) != 0) {
  u_int32_t VAR_12[255];
  int VAR_13;

  VAR_13 = FUNC_5(VAR_12, sizeof(VAR_12), VAR_11,
      VAR_4, VAR_1,
      FUNC_2(VAR_7), FUNC_10(FUNC_3(VAR_7)),
      FUNC_0(VAR_7), FUNC_10(FUNC_1(VAR_7)));
  VAR_9 = FUNC_11(VAR_8->fireWallFD, VAR_0, VAR_2, VAR_12, VAR_13);
  if (VAR_9)
   FUNC_4(1, "alias punch inbound(1) setsockopt(IP_FW_ADD)");

  VAR_13 = FUNC_5(VAR_12, sizeof(VAR_12), VAR_11,
      VAR_4, VAR_1,
      FUNC_0(VAR_7), FUNC_10(FUNC_1(VAR_7)),
      FUNC_2(VAR_7), FUNC_10(FUNC_3(VAR_7)));
  VAR_9 = FUNC_11(VAR_8->fireWallFD, VAR_0, VAR_2, VAR_12, VAR_13);
  if (VAR_9)
   FUNC_4(1, "alias punch inbound(2) setsockopt(IP_FW_ADD)");
 }


 VAR_7->data.tcp->fwhole = VAR_11;
 FUNC_7(VAR_8, VAR_8->fireWallField, VAR_11);
}
