
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct input_dev* dev; } ;
struct joydev {int nabs; int * corr; int * abs; int * abspam; TYPE_1__ handle; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct input_dev*,int ) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct joydev *VAR_0)
{
 struct input_dev *VAR_1 = VAR_0->handle.dev;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->nabs; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_0->abspam[VAR_2]);
  VAR_0->abs[VAR_2] = FUNC_1(VAR_3, &VAR_0->corr[VAR_2]);
 }
}
