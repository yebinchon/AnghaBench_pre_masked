
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ocrdma_dev {int dummy; } ;
struct TYPE_2__ {int rxlen_pkey; } ;
struct ocrdma_cqe {TYPE_1__ ud; int flags_status_srcqpn; } ;
struct ib_wc {int src_qp; int byte_len; int network_hdr_type; int wc_flags; scalar_t__ pkey_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocrdma_dev*) ;

__attribute__((used)) static int FUNC_2(struct ocrdma_dev *VAR_9, struct ib_wc *VAR_10,
     struct ocrdma_cqe *VAR_11)
{
 int VAR_12;
 u16 VAR_13 = 0;

 VAR_12 = (FUNC_0(VAR_11->flags_status_srcqpn) &
  VAR_5) >> VAR_6;
 VAR_10->src_qp = FUNC_0(VAR_11->flags_status_srcqpn) &
      VAR_2;
 VAR_10->pkey_index = 0;
 VAR_10->wc_flags = VAR_0;
 VAR_10->byte_len = (FUNC_0(VAR_11->ud.rxlen_pkey) >>
     VAR_8) &
     VAR_7;

 if (FUNC_1(VAR_9)) {
  VAR_13 = (FUNC_0(VAR_11->ud.rxlen_pkey) >>
       VAR_4) &
       VAR_3;
  VAR_10->wc_flags |= VAR_1;
  VAR_10->network_hdr_type = VAR_13;
 }

 return VAR_12;
}
