
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_state {int flags; int type; int kd; int fd; } ;
typedef int off_t ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,void*,size_t) ;
 int FUNC_1 (int ,void*,size_t,int ) ;

__attribute__((used)) static int
FUNC_2(struct dcons_state *VAR_1, void *VAR_2, size_t VAR_3, off_t VAR_4)
{
 if ((VAR_1->flags & VAR_0) != 0)
  return (VAR_3);

 switch (VAR_1->type) {
 case 129:
  return (FUNC_1(VAR_1->fd, VAR_2, VAR_3, VAR_4));
 case 128:
  return (FUNC_0(VAR_1->kd, VAR_4, VAR_2, VAR_3));
 }
 return (-1);
}
