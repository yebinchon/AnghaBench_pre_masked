
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int fd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct file *VAR_6)
{
 ssize_t VAR_7;

 if (VAR_5 == VAR_0)
  return (0);

 VAR_3 = VAR_2;
 VAR_4 = 0;

 VAR_7 = FUNC_0(VAR_6->fd, VAR_2, VAR_1);
 if (VAR_7 < 0)
  return (-1);

 VAR_4 = VAR_7;
 return (0);
}
