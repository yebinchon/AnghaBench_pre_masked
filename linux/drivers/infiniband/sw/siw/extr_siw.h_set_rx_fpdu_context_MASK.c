
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ rdmap_op; } ;
struct siw_qp {TYPE_1__ rx_stream; int rx_untagged; int * rx_fpdu; int rx_tagged; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct siw_qp *VAR_2, u8 VAR_3)
{
 if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
  VAR_2->rx_fpdu = &VAR_2->rx_tagged;
 else
  VAR_2->rx_fpdu = &VAR_2->rx_untagged;

 VAR_2->rx_stream.rdmap_op = VAR_3;
}
