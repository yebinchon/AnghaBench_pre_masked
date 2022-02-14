
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aiocb {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct aiocb*,struct aiocb*) ;
 int FUNC_1 (struct aiocb**,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct aiocb *VAR_0)
{
 struct aiocb *VAR_1;
 ssize_t VAR_2;

 VAR_2 = FUNC_1(&VAR_1, ((void*)0));
 FUNC_0(VAR_0, VAR_1);
 return (VAR_2);
}
