
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifolog_file {int logsize; int recsize; int recbuf; int fd; } ;
typedef int off_t ;


 int FUNC_0 (struct fifolog_file const*) ;
 int FUNC_1 (int ,int ,int,int) ;

int
FUNC_2(const struct fifolog_file *VAR_0, off_t VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);
 if (VAR_1 >= VAR_0->logsize)
  return (-1);
 VAR_1++;
 VAR_2 = FUNC_1(VAR_0->fd, VAR_0->recbuf, VAR_0->recsize, VAR_1 * VAR_0->recsize);
 if (VAR_2 < 0)
  return (-2);
 if (VAR_2 != (int)VAR_0->recsize)
  return (-3);
 return (0);
}
