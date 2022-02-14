
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct socket {int dummy; } ;
struct sdp_srcah {int vaddr; void* rkey; void* len; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mbuf*,int) ;
 struct mbuf* FUNC_3 (struct socket*,int ,int,int) ;

__attribute__((used)) static inline struct mbuf *
FUNC_4(struct socket *VAR_1, u32 VAR_2, u32 VAR_3, u64 VAR_4, int VAR_5)
{
 struct mbuf *VAR_6;
 struct sdp_srcah *VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_0, sizeof(*VAR_7), VAR_5);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 VAR_7 = (struct sdp_srcah *)FUNC_2(VAR_6, sizeof(*VAR_7));
 VAR_7->len = FUNC_1(VAR_2);
 VAR_7->rkey = FUNC_1(VAR_3);
 VAR_7->vaddr = FUNC_0(VAR_4);

 return VAR_6;
}
