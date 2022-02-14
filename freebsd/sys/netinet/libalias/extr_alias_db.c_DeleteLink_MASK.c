
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct server* frag_ptr; struct server* tcp; } ;
struct server {int flags; int sockfd; int link_type; TYPE_1__ data; struct server* next; struct server* server; struct libalias* la; } ;
struct libalias {scalar_t__ deleteAllLinks; int packetAliasMode; int protoLinkCount; int fragmentPtrLinkCount; int fragmentIdLinkCount; int pptpLinkCount; int tcpLinkCount; int udpLinkCount; int icmpLinkCount; int sockCount; } ;
struct alias_link {int flags; int sockfd; int link_type; TYPE_1__ data; struct alias_link* next; struct alias_link* server; struct libalias* la; } ;


 int FUNC_0 (struct server*) ;
 int FUNC_1 (struct libalias*) ;




 int VAR_0 ;



 int FUNC_2 (struct server*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct libalias*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct server*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(struct alias_link *VAR_4)
{
 struct libalias *VAR_5 = VAR_4->la;

 FUNC_1(VAR_5);

 if (VAR_5->deleteAllLinks == 0 && VAR_4->flags & VAR_0)
  return;



 FUNC_0(VAR_4);



 if (VAR_4->server != ((void*)0)) {
  struct server *VAR_6, *VAR_7, *VAR_8;

  VAR_6 = VAR_7 = VAR_4->server;
  do {
   VAR_8 = VAR_7->next;
   FUNC_5(VAR_7);
  } while ((VAR_7 = VAR_8) != VAR_6);
 }

 FUNC_2(VAR_4, VAR_3);


 FUNC_2(VAR_4, VAR_2);


 if (VAR_4->sockfd != -1) {
  VAR_5->sockCount--;
  FUNC_4(VAR_4->sockfd);
 }


 switch (VAR_4->link_type) {
 case 131:
  VAR_5->icmpLinkCount--;
  break;
 case 128:
  VAR_5->udpLinkCount--;
  break;
 case 129:
  VAR_5->tcpLinkCount--;
  FUNC_5(VAR_4->data.tcp);
  break;
 case 130:
  VAR_5->pptpLinkCount--;
  break;
 case 133:
  VAR_5->fragmentIdLinkCount--;
  break;
 case 132:
  VAR_5->fragmentPtrLinkCount--;
  if (VAR_4->data.frag_ptr != ((void*)0))
   FUNC_5(VAR_4->data.frag_ptr);
  break;
 case 134:
  break;
 default:
  VAR_5->protoLinkCount--;
  break;
 }


 FUNC_5(VAR_4);


 if (VAR_5->packetAliasMode & VAR_1) {
  FUNC_3(VAR_5);
 }
}
