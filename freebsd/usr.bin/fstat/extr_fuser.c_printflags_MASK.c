
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct consumer {int uflags; int flags; } ;
struct TYPE_4__ {int flag; int ch; } ;
struct TYPE_3__ {int flag; int ch; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct consumer*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct consumer *VAR_5)
{
 unsigned int VAR_6;

 FUNC_0(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if ((VAR_5->uflags & VAR_4[VAR_6].flag) != 0)
   FUNC_1(VAR_4[VAR_6].ch, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if ((VAR_5->flags & VAR_2[VAR_6].flag) != 0)
   FUNC_1(VAR_2[VAR_6].ch, VAR_3);
}
