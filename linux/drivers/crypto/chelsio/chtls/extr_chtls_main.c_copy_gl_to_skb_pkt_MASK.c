
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct pkt_gl {scalar_t__ tot_len; scalar_t__ va; } ;
struct cpl_rx_pkt {int dummy; } ;
struct cpl_pass_accept_req {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*,int const*,int) ;
 int FUNC_3 (struct sk_buff*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(const struct pkt_gl *VAR_1,
       const __be64 *VAR_2,
       u32 VAR_3)
{
 struct sk_buff *VAR_4;





 VAR_4 = FUNC_1(VAR_1->tot_len + sizeof(struct cpl_pass_accept_req)
   - VAR_3, VAR_0);
 if (FUNC_4(!VAR_4))
  return ((void*)0);
 FUNC_0(VAR_4, VAR_1->tot_len + sizeof(struct cpl_pass_accept_req)
     - VAR_3);

 FUNC_2(VAR_4, VAR_2, sizeof(struct cpl_rx_pkt));
 FUNC_3(VAR_4, sizeof(struct cpl_pass_accept_req)
           , VAR_1->va + VAR_3,
           VAR_1->tot_len - VAR_3);

 return VAR_4;
}
