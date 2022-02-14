
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; char const* name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 char const* VAR_1 ;

__attribute__((used)) static const char *FUNC_1(int VAR_2)
{

 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
                if (VAR_0[VAR_3].id == VAR_2)
                        return VAR_0[VAR_3].name;

        return VAR_1;
}
