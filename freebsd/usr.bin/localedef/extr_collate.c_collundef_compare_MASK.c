
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
typedef TYPE_1__ collundef_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const collundef_t *VAR_2 = VAR_0;
 const collundef_t *VAR_3 = VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->name, VAR_3->name);
 return ((VAR_4 < 0) ? -1 : (VAR_4 > 0) ? 1 : 0);
}
