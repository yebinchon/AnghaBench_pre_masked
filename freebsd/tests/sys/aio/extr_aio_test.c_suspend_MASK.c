
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct aiocb const aiocb ;
typedef int ssize_t ;


 int FUNC_0 (struct aiocb const*) ;
 int FUNC_1 (struct aiocb const* const*,int,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct aiocb *VAR_0)
{
 const struct aiocb *const VAR_1[] = {VAR_0};
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 1, ((void*)0));
 if (VAR_2 == 0)
  return (FUNC_0(VAR_0));
 else
  return (VAR_2);
}
