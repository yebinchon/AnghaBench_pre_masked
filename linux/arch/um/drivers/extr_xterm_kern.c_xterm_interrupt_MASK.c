
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xterm_wait {int new_fd; int ready; int pid; int fd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct xterm_wait *VAR_5 = VAR_4;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5->fd, &VAR_5->pid);
 if (VAR_6 == -VAR_0)
  return VAR_2;

 VAR_5->new_fd = VAR_6;
 FUNC_0(&VAR_5->ready);

 return VAR_1;
}
