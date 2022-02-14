
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdp_sock {scalar_t__ xmit_size_goal; } ;
struct sdp_chrecvbuf {int size; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct sdp_sock *VAR_0, struct sdp_chrecvbuf *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->size);

 if (VAR_2 > VAR_0->xmit_size_goal)
  VAR_0->xmit_size_goal = VAR_2;
}
