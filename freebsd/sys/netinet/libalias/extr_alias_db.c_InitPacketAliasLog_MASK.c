
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int packetAliasMode; int logDesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libalias*) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct libalias *VAR_3)
{

 FUNC_0(VAR_3);
 if (~VAR_3->packetAliasMode & VAR_2) {




  if ((VAR_3->logDesc = FUNC_1("/var/log/alias.log", "w")))
   FUNC_2(VAR_3->logDesc, "PacketAlias/InitPacketAliasLog: Packet alias logging enabled.\n");

  else
   return (VAR_0);
  VAR_3->packetAliasMode |= VAR_2;
 }

 return (1);
}
