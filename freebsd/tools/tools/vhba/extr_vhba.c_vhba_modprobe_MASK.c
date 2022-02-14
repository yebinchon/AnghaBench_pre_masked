
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_6__ {int lock; int actv; int done; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

int
FUNC_9(module_t VAR_7, int VAR_8, void *VAR_9)
{
 int VAR_10 = 0;

 switch (VAR_8) {
 case 129:
  VAR_6 = FUNC_2(sizeof (*VAR_6), VAR_3, VAR_4|VAR_5);
  FUNC_4(&VAR_6->lock, "vhba", ((void*)0), VAR_2);
  VAR_10 = FUNC_7(VAR_6);
  if (VAR_10) {
   FUNC_3(&VAR_6->lock);
   FUNC_1(VAR_6, VAR_3);
  }
  break;
 case 128:
         FUNC_5(&VAR_6->lock);
  if (FUNC_0(&VAR_6->done) || FUNC_0(&VAR_6->actv)) {
   VAR_10 = VAR_0;
   FUNC_6(&VAR_6->lock);
   break;
  }
  FUNC_8(VAR_6);
  FUNC_6(&VAR_6->lock);
  FUNC_3(&VAR_6->lock);
  FUNC_1(VAR_6, VAR_3);
  break;
 default:
  VAR_10 = VAR_1;
  break;
 }
 return (VAR_10);
}
