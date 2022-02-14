
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c4iw_qp {int dummy; } ;
struct c4iw_dev {int qps; } ;


 struct c4iw_qp* FUNC_0 (int *,int ) ;

__attribute__((used)) static inline struct c4iw_qp *FUNC_1(struct c4iw_dev *VAR_0, u32 VAR_1)
{
 return FUNC_0(&VAR_0->qps, VAR_1);
}
