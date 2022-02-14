
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physical {int fd; TYPE_1__* dl; } ;
typedef int ssize_t ;
struct TYPE_2__ {int state; } ;




 int VAR_0 ;
 int FUNC_0 (int ,void*,size_t,char*) ;
 int FUNC_1 (struct physical*,void*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(struct physical *VAR_1, void *VAR_2, size_t VAR_3)
{
  char VAR_4[VAR_0];

  switch (VAR_1->dl->state) {
    case 129:
    case 128:
      return FUNC_1(VAR_1, VAR_2, VAR_3);
  }

  return FUNC_0(VAR_1->fd, VAR_2, VAR_3, VAR_4);
}
