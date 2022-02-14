
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ texunit; scalar_t__* textures; } ;
struct TYPE_3__ {scalar_t__ directStateAccess; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
 int VAR_5;

 if (VAR_4.directStateAccess)
 {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  {
   FUNC_1(VAR_0 + VAR_5, VAR_1, 0);
   VAR_3.textures[VAR_5] = 0;
  }
 }
 else
 {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  {
   FUNC_0(VAR_0 + VAR_5);
   FUNC_2(VAR_1, 0);
   VAR_3.textures[VAR_5] = 0;
  }

  FUNC_0(VAR_0);
  VAR_3.texunit = VAR_0;
 }
}
