
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyfd {int rfd; } ;


 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_1(struct ttyfd *VAR_0)
{
 unsigned char VAR_1;

 if (FUNC_0(VAR_0->rfd, &VAR_1, 1) == 1)
  return (VAR_1);
 else
  return (-1);
}
