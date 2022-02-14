
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_mpi_key {int n; int d; } ;
typedef int MPI ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(const struct rsa_mpi_key *VAR_1, MPI VAR_2, MPI VAR_3)
{

 if (FUNC_1(VAR_3, 0) < 0 || FUNC_0(VAR_3, VAR_1->n) >= 0)
  return -VAR_0;


 return FUNC_2(VAR_2, VAR_3, VAR_1->d, VAR_1->n);
}
