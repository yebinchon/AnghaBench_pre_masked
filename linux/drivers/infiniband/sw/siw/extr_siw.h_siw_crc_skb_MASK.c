
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skb_checksum_ops {int combine; int update; } ;
struct siw_rx_stream {int mpa_crc_hd; int skb_offset; int skb; } ;
typedef int __wsum ;


 int FUNC_0 (int ,int ,unsigned int,int ,struct skb_checksum_ops const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct siw_rx_stream *VAR_2, unsigned int VAR_3)
{
 const struct skb_checksum_ops VAR_4 = {
  .update = VAR_1,
  .combine = VAR_0,
 };
 __wsum VAR_5 = *(u32 *)FUNC_1(VAR_2->mpa_crc_hd);

 VAR_5 = FUNC_0(VAR_2->skb, VAR_2->skb_offset, VAR_3, VAR_5,
        &VAR_4);
 *(u32 *)FUNC_1(VAR_2->mpa_crc_hd) = VAR_5;
}
