
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {scalar_t__ raw; } ;
struct rxe_dev {int ndev; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (struct in6_addr*,unsigned char*) ;

int FUNC_2(struct rxe_dev *VAR_1, union ib_gid *VAR_2)
{
 int VAR_3;
 unsigned char VAR_4[VAR_0];

 FUNC_1((struct in6_addr *)VAR_2->raw, VAR_4);
 VAR_3 = FUNC_0(VAR_1->ndev, VAR_4);

 return VAR_3;
}
