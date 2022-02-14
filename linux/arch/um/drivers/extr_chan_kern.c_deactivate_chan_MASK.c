
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chan {int fd; scalar_t__ enabled; } ;


 int FUNC_0 (int ,int) ;

void FUNC_1(struct chan *VAR_0, int VAR_1)
{
 if (VAR_0 && VAR_0->enabled)
  FUNC_0(VAR_0->fd, VAR_1);
}
