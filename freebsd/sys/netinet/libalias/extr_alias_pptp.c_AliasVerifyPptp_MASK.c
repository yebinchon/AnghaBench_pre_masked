
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct tcphdr {int th_off; } ;
struct pptpMsgHead {int dummy; } ;
struct pptpCodes {int dummy; } ;
struct pptpCallIds {int dummy; } ;
struct ip {int ip_hl; int ip_len; } ;
struct TYPE_2__ {int magic; int msgType; int type; } ;
typedef TYPE_1__* PptpMsgHead ;
typedef int * PptpCallId ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ip*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct tcphdr*) ;

__attribute__((used)) static PptpCallId
FUNC_4(struct ip *VAR_4, u_int16_t * VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 PptpMsgHead VAR_9;
 struct tcphdr *VAR_10;


 VAR_10 = (struct tcphdr *)FUNC_0(VAR_4);
 VAR_6 = (VAR_4->ip_hl + VAR_10->th_off) << 2;
 VAR_7 = FUNC_2(VAR_4->ip_len);
 VAR_8 = VAR_7 - VAR_6;


 if (VAR_8 < (int)(sizeof(struct pptpMsgHead) + sizeof(struct pptpCallIds)))
  return (((void*)0));


 VAR_9 = (PptpMsgHead) FUNC_3(VAR_10);


 *VAR_5 = FUNC_2(VAR_9->type);


 if ((FUNC_2(VAR_9->msgType) != VAR_0) ||
     (FUNC_1(VAR_9->magic) != VAR_2))
  return (((void*)0));


 if ((*VAR_5 == VAR_3 || *VAR_5 == VAR_1) &&
     (VAR_8 < (int)(sizeof(struct pptpMsgHead) + sizeof(struct pptpCallIds) +
  sizeof(struct pptpCodes))))
  return (((void*)0));
 else
  return (PptpCallId) (VAR_9 + 1);
}
