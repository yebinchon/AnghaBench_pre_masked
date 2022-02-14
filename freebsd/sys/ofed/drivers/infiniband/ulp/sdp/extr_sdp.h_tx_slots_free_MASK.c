
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sdp_sock*) ;
 scalar_t__ FUNC_2 (struct sdp_sock*) ;

__attribute__((used)) static inline int FUNC_3(struct sdp_sock *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_2),
   VAR_1 - FUNC_2(VAR_2));
 if (VAR_3 < VAR_0)
  return 0;

 return VAR_3 - VAR_0;
}
