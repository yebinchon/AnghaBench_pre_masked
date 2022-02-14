
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pixels_current; } ;
struct mga_device {TYPE_1__ cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mga_device *VAR_2)
{
 FUNC_0(VAR_1, 0);
 FUNC_0(VAR_0, 0);
 if (VAR_2->cursor.pixels_current)
  FUNC_1(VAR_2->cursor.pixels_current);
 VAR_2->cursor.pixels_current = ((void*)0);
}
