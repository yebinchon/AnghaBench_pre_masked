
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_mpi_key {int * n; int * e; int * d; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rsa_mpi_key *VAR_0)
{
 FUNC_0(VAR_0->d);
 FUNC_0(VAR_0->e);
 FUNC_0(VAR_0->n);
 VAR_0->d = ((void*)0);
 VAR_0->e = ((void*)0);
 VAR_0->n = ((void*)0);
}
