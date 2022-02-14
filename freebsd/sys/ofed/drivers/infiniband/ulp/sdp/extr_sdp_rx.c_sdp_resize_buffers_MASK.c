
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdp_sock {scalar_t__ recv_bytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sdp_sock*,scalar_t__) ;

int
FUNC_1(struct sdp_sock *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_1->recv_bytes;
 u32 VAR_4 = VAR_0;

 if (VAR_2 > VAR_3 && VAR_2 <= VAR_4) {
  VAR_1->recv_bytes = FUNC_0(VAR_1, VAR_2);
  return 0;
 }
 return -1;
}
