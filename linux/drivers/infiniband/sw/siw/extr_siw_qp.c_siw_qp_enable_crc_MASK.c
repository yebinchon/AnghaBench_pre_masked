
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_rx_stream {TYPE_1__* mpa_crc_hd; } ;
struct siw_iwarp_tx {TYPE_1__* mpa_crc_hd; } ;
struct siw_qp {struct siw_iwarp_tx tx_ctx; struct siw_rx_stream rx_stream; } ;
struct shash_desc {int dummy; } ;
struct TYPE_2__ {int * tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int,int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(struct siw_qp *VAR_4)
{
 struct siw_rx_stream *VAR_5 = &VAR_4->rx_stream;
 struct siw_iwarp_tx *VAR_6 = &VAR_4->tx_ctx;
 int VAR_7;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3) +
  sizeof(struct shash_desc);

 VAR_6->mpa_crc_hd = FUNC_2(VAR_7, VAR_2);
 VAR_5->mpa_crc_hd = FUNC_2(VAR_7, VAR_2);
 if (!VAR_6->mpa_crc_hd || !VAR_5->mpa_crc_hd) {
  FUNC_1(VAR_6->mpa_crc_hd);
  FUNC_1(VAR_5->mpa_crc_hd);
  VAR_6->mpa_crc_hd = ((void*)0);
  VAR_5->mpa_crc_hd = ((void*)0);
  return -VAR_1;
 }
 VAR_6->mpa_crc_hd->tfm = VAR_3;
 VAR_5->mpa_crc_hd->tfm = VAR_3;

 return 0;
}
