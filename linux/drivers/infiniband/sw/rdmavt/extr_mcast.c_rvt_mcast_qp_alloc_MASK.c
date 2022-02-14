
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int dummy; } ;
struct rvt_mcast_qp {struct rvt_qp* qp; } ;


 int VAR_0 ;
 struct rvt_mcast_qp* FUNC_0 (int,int ) ;
 int FUNC_1 (struct rvt_qp*) ;

__attribute__((used)) static struct rvt_mcast_qp *FUNC_2(struct rvt_qp *VAR_1)
{
 struct rvt_mcast_qp *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  goto bail;

 VAR_2->qp = VAR_1;
 FUNC_1(VAR_1);

bail:
 return VAR_2;
}
