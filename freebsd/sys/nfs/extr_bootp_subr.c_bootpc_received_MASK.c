
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bootpc_ifcontext {int dhcpquerytype; scalar_t__ state; int gotdhcpserver; int replylen; int reply; int gotnetmask; int gotgw; int gotrootpath; int dhcpserver; } ;
struct TYPE_2__ {scalar_t__ badopt; int taglen; } ;
struct bootpc_globalcontext {TYPE_1__ tmptag; int replylen; int reply; } ;


 unsigned char VAR_0 ;


 unsigned char VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int *,int ) ;
 char* FUNC_1 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct bootpc_globalcontext *VAR_13,
    struct bootpc_ifcontext *VAR_14)
{
 unsigned char VAR_15;
 char *VAR_16;







 (void) FUNC_1(&VAR_13->tmptag, &VAR_13->reply,
     VAR_13->replylen,
     VAR_9);


 if (VAR_13->tmptag.badopt != 0)
  return 0;

 VAR_16 = FUNC_1(&VAR_13->tmptag, &VAR_13->reply,
         VAR_13->replylen, VAR_7);
 if (VAR_16 != ((void*)0))
  VAR_15 = *VAR_16;
 else
  VAR_15 = 129;

 switch (VAR_14->dhcpquerytype) {
 case 130:
  if (VAR_15 != VAR_1

      && VAR_15 != 129

   )
   return 0;
  break;
 case 128:
  if (VAR_15 != VAR_0)
   return 0;
 case 129:
  break;
 }



 if ((VAR_14->state == VAR_2 ||
      (VAR_14->dhcpquerytype == 130 &&
       (VAR_14->state == VAR_4 ||
        VAR_14->state == VAR_5))) &&
     (FUNC_1(&VAR_13->tmptag, &VAR_14->reply,
   VAR_14->replylen,
   VAR_10) != ((void*)0) ||
      FUNC_1(&VAR_13->tmptag, &VAR_13->reply,
   VAR_13->replylen,
   VAR_10) == ((void*)0)))
  return 0;

 FUNC_0(&VAR_13->reply, &VAR_14->reply, VAR_13->replylen);
 VAR_14->replylen = VAR_13->replylen;


 if (VAR_14->state == VAR_3)
  VAR_14->state = VAR_2;
 else if (VAR_14->state == VAR_6 &&
   VAR_14->dhcpquerytype == 130) {
  if (VAR_15 == VAR_1)
   VAR_14->state = VAR_4;
  else
   VAR_14->state = VAR_2;
 } else if (VAR_14->state == VAR_4 &&
     VAR_14->dhcpquerytype == 128)
  VAR_14->state = VAR_5;


 if (VAR_14->dhcpquerytype == 130 &&
     VAR_14->state != VAR_2) {
  VAR_16 = FUNC_1(&VAR_13->tmptag, &VAR_14->reply,
          VAR_14->replylen, VAR_8);
  if (VAR_16 != ((void*)0) && VAR_13->tmptag.taglen == 4) {
   FUNC_2(&VAR_14->dhcpserver, VAR_16, 4);
   VAR_14->gotdhcpserver = 1;
  } else
   VAR_14->gotdhcpserver = 0;
  return 1;
 }

 VAR_14->gotrootpath = (FUNC_1(&VAR_13->tmptag, &VAR_14->reply,
      VAR_14->replylen,
      VAR_10) != ((void*)0));
 VAR_14->gotgw = (FUNC_1(&VAR_13->tmptag, &VAR_14->reply,
       VAR_14->replylen,
       VAR_11) != ((void*)0));
 VAR_14->gotnetmask = (FUNC_1(&VAR_13->tmptag, &VAR_14->reply,
     VAR_14->replylen,
     VAR_12) != ((void*)0));
 return 1;
}
