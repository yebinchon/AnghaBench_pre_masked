
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_rmpp_mad {int rmpp_hdr; } ;
struct ib_mad_recv_buf {scalar_t__ mad; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct ib_mad_recv_buf *VAR_1)
{
 struct ib_rmpp_mad *VAR_2;

 VAR_2 = (struct ib_rmpp_mad *) VAR_1->mad;
 return FUNC_0(&VAR_2->rmpp_hdr) & VAR_0;
}
