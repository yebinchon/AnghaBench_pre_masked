
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_recv_wqe {int dummy; } ;
struct ib_sge {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 return sizeof(struct rxe_recv_wqe) +
  VAR_0 * sizeof(struct ib_sge);
}
