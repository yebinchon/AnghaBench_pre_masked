
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (struct sdp_sock*) ;
 scalar_t__ FUNC_4 (struct sdp_sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct sdp_sock *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_2 > VAR_0))
  VAR_2 += VAR_2/2;
 return FUNC_5(VAR_2 < FUNC_2(VAR_1)) &&
     FUNC_0(FUNC_4(VAR_1) > 0) &&
     FUNC_0(FUNC_3(VAR_1));
}
