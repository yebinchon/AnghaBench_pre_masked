
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union pvrdma_gid {int dummy; } pvrdma_gid ;
typedef union ib_gid {int dummy; } ib_gid ;


 int FUNC_0 (int) ;
 int FUNC_1 (union pvrdma_gid*,union ib_gid const*,int) ;

void FUNC_2(union pvrdma_gid *VAR_0, const union ib_gid *VAR_1)
{
 FUNC_0(sizeof(union pvrdma_gid) != sizeof(union ib_gid));
 FUNC_1(VAR_0, VAR_1, sizeof(*VAR_1));
}
