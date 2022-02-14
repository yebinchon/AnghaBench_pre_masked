
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_state {int type; int kd; int fd; } ;
typedef int off_t ;




 int FUNC_0 (int ,int ,void*,size_t) ;
 int FUNC_1 (int ,void*,size_t,int ) ;

__attribute__((used)) static int
FUNC_2(struct dcons_state *VAR_0, void *VAR_1, size_t VAR_2, off_t VAR_3)
{
 switch (VAR_0->type) {
 case 129:
  return (FUNC_1(VAR_0->fd, VAR_1, VAR_2, VAR_3));
 case 128:
  return (FUNC_0(VAR_0->kd, VAR_3, VAR_1, VAR_2));
 }
 return (-1);
}
