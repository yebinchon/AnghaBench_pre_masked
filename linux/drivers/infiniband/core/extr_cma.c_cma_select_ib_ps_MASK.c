
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sockaddr_ib {void* sib_sid_mask; void* sib_sid; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ ps; } ;
struct rdma_id_private {TYPE_1__ id; } ;
typedef enum rdma_ucm_port_space { ____Placeholder_rdma_ucm_port_space } rdma_ucm_port_space ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct sockaddr*) ;
 scalar_t__ FUNC_2 (struct rdma_id_private*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static enum rdma_ucm_port_space
FUNC_5(struct rdma_id_private *VAR_7)
{
 enum rdma_ucm_port_space VAR_8 = 0;
 struct sockaddr_ib *VAR_9;
 u64 VAR_10, VAR_11, VAR_12;

 VAR_9 = (struct sockaddr_ib *) FUNC_2(VAR_7);
 VAR_11 = FUNC_0(VAR_9->sib_sid_mask) & VAR_1;
 VAR_12 = FUNC_0(VAR_9->sib_sid) & VAR_11;

 if ((VAR_7->id.ps == VAR_4) && (VAR_12 == (VAR_0 & VAR_11))) {
  VAR_10 = VAR_0;
  VAR_8 = VAR_4;
 } else if (((VAR_7->id.ps == VAR_4) || (VAR_7->id.ps == VAR_5)) &&
     (VAR_12 == (VAR_2 & VAR_11))) {
  VAR_10 = VAR_2;
  VAR_8 = VAR_5;
 } else if (((VAR_7->id.ps == VAR_4) || (VAR_7->id.ps == VAR_6)) &&
     (VAR_12 == (VAR_3 & VAR_11))) {
  VAR_10 = VAR_3;
  VAR_8 = VAR_6;
 }

 if (VAR_8) {
  VAR_9->sib_sid = FUNC_3(VAR_10 | FUNC_4(FUNC_1((struct sockaddr *) VAR_9)));
  VAR_9->sib_sid_mask = FUNC_3(VAR_1 |
      FUNC_0(VAR_9->sib_sid_mask));
 }
 return VAR_8;
}
