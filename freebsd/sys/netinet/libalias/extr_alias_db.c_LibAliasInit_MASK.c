
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {void* tv_sec; } ;
struct TYPE_4__ {void* s_addr; } ;
struct TYPE_3__ {void* s_addr; } ;
struct libalias {int deleteAllLinks; int packetAliasMode; int fireWallFD; scalar_t__ cleanupIndex; scalar_t__ sockCount; scalar_t__ fragmentPtrLinkCount; scalar_t__ fragmentIdLinkCount; scalar_t__ protoLinkCount; scalar_t__ pptpLinkCount; scalar_t__ sctpLinkCount; scalar_t__ tcpLinkCount; scalar_t__ udpLinkCount; scalar_t__ icmpLinkCount; TYPE_2__ targetAddress; TYPE_1__ aliasAddress; int * linkTableIn; int * linkTableOut; void* lastCleanupTime; void* timeStamp; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;
 void* VAR_0 ;
 int FUNC_3 (struct libalias*) ;
 int FUNC_4 (struct libalias*) ;
 int FUNC_5 (struct libalias*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct libalias*,int ) ;
 int FUNC_9 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 struct libalias* FUNC_11 (int,int) ;
 int VAR_9 ;
 int FUNC_12 (struct timeval*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 struct libalias* FUNC_13 (int,int ,int) ;
 void* VAR_12 ;

struct libalias *
FUNC_14(struct libalias *VAR_13)
{
 int VAR_14;

 struct timeval VAR_15;


 if (VAR_13 == ((void*)0)) {




  VAR_13 = FUNC_11(sizeof *VAR_13, 1);
  if (VAR_13 == ((void*)0))
   return (VAR_13);



  if (FUNC_6(&VAR_10))
   FUNC_10(VAR_9);

  FUNC_8(&VAR_10, VAR_13, VAR_11);





  FUNC_12(&VAR_15, ((void*)0));
  VAR_13->timeStamp = VAR_15.tv_sec;
  VAR_13->lastCleanupTime = VAR_15.tv_sec;


  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
   FUNC_7(&VAR_13->linkTableOut[VAR_14]);
  for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
   FUNC_7(&VAR_13->linkTableIn[VAR_14]);



  FUNC_4(VAR_13);
  FUNC_3(VAR_13);
 } else {
  FUNC_3(VAR_13);
  VAR_13->deleteAllLinks = 1;
  FUNC_2(VAR_13);
  VAR_13->deleteAllLinks = 0;




 }

 VAR_13->aliasAddress.s_addr = VAR_0;
 VAR_13->targetAddress.s_addr = VAR_0;

 VAR_13->icmpLinkCount = 0;
 VAR_13->udpLinkCount = 0;
 VAR_13->tcpLinkCount = 0;
 VAR_13->sctpLinkCount = 0;
 VAR_13->pptpLinkCount = 0;
 VAR_13->protoLinkCount = 0;
 VAR_13->fragmentIdLinkCount = 0;
 VAR_13->fragmentPtrLinkCount = 0;
 VAR_13->sockCount = 0;

 VAR_13->cleanupIndex = 0;

 VAR_13->packetAliasMode = VAR_7

     | VAR_8

     | VAR_6;

 VAR_13->fireWallFD = -1;


 FUNC_9();

 FUNC_5(VAR_13);
 return (VAR_13);
}
