
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socket {int dummy; } ;
struct sdp_rrch {int len; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mbuf*,int) ;
 struct mbuf* FUNC_2 (struct socket*,int ,int,int) ;

__attribute__((used)) static inline struct mbuf *
FUNC_3(struct socket *VAR_1, u32 VAR_2, int VAR_3)
{
 struct mbuf *VAR_4;
 struct sdp_rrch *VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_0, sizeof(*VAR_5), VAR_3);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_5 = (struct sdp_rrch *)FUNC_1(VAR_4, sizeof(*VAR_5));
 VAR_5->len = FUNC_0(VAR_2);

 return VAR_4;
}
