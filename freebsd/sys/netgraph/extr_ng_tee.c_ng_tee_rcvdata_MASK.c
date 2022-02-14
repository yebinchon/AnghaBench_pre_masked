
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef int item_p ;
typedef int hook_p ;
typedef TYPE_3__* hi_p ;
struct TYPE_6__ {int outFrames; int outOctets; int inFrames; int inOctets; } ;
struct TYPE_7__ {int hook; TYPE_2__ stats; struct TYPE_7__* dest; struct TYPE_7__* dup; } ;


 int VAR_0 ;
 struct mbuf* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int,int ,struct mbuf*) ;
 struct mbuf* FUNC_5 (struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_1, item_p VAR_2)
{
 const hi_p VAR_3 = FUNC_3(VAR_1);
 hi_p VAR_4;
 int VAR_5 = 0;
 struct mbuf *VAR_6;

 VAR_6 = FUNC_0(VAR_2);


 VAR_3->stats.inOctets += VAR_6->m_pkthdr.len;
 VAR_3->stats.inFrames++;


 if (VAR_3->dup) {
  struct mbuf *VAR_7;


  VAR_7 = FUNC_5(VAR_6, VAR_0);
  if (VAR_7) {

   VAR_4 = VAR_3->dup;
   FUNC_4(VAR_5, VAR_4->hook, VAR_7);
   if (VAR_5 == 0) {
    VAR_4->stats.outOctets += VAR_6->m_pkthdr.len;
    VAR_4->stats.outFrames++;
   }
  }
 }

 if (VAR_3->dest) {
  VAR_4 = VAR_3->dest;
  VAR_4->stats.outOctets += VAR_6->m_pkthdr.len;
  VAR_4->stats.outFrames++;
  FUNC_2(VAR_5, VAR_2, VAR_4->hook);
 } else
  FUNC_1(VAR_2);
 return (VAR_5);
}
