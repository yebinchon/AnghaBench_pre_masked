
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pollfd {int fd; } ;
struct TYPE_9__ {int used; struct pollfd* poll; } ;
struct TYPE_8__ {int used; TYPE_3__* poll; } ;
struct TYPE_7__ {int fd; } ;
struct TYPE_6__ {int used; struct pollfd* poll; } ;


 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (struct pollfd*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(int VAR_3)
{
 struct pollfd *VAR_4;
 int VAR_5 = 0, VAR_6, VAR_7;

 FUNC_2();
 for (VAR_6 = 0; VAR_6 < VAR_0.used; VAR_6++) {
  if (VAR_0.poll[VAR_6].fd == VAR_3)
   break;
 }
 if (VAR_6 == VAR_0.used)
  goto out;

 VAR_4 = &VAR_0.poll[VAR_6];

 for (VAR_6 = 0; VAR_6 < VAR_1.used; VAR_6++) {
  if (VAR_1.poll[VAR_6].fd == VAR_3)
   goto out;
 }

 VAR_7 = VAR_1.used;
 VAR_5 = FUNC_1(&VAR_2, VAR_7 + 1);
 if (VAR_5)
  goto out;

 FUNC_0(VAR_2.poll, VAR_1.poll,
        VAR_1.used * sizeof(struct pollfd));
 VAR_2.poll[VAR_7] = *VAR_4;
 VAR_2.used = VAR_7 + 1;
 FUNC_4();
 out:
 FUNC_3();
 return VAR_5;
}
