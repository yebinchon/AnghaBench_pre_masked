
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sdp_chrecvbuf {int size; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mbuf*,int) ;
 struct mbuf* FUNC_2 (struct socket*,int ,int,int) ;

__attribute__((used)) static inline struct mbuf *
FUNC_3(struct socket *VAR_1, int VAR_2, int VAR_3)
{
 struct mbuf *VAR_4;
 struct sdp_chrecvbuf *VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_0, sizeof(*VAR_5), VAR_3);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_5 = (struct sdp_chrecvbuf *)FUNC_1(VAR_4, sizeof *VAR_5);
 VAR_5->size = FUNC_0(VAR_2);

 return VAR_4;
}
