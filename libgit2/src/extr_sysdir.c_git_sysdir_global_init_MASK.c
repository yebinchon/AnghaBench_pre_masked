
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* guess ) (int *) ;int buf; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

int FUNC_3(void)
{
 size_t VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; !VAR_3 && VAR_2 < FUNC_0(VAR_0); VAR_2++)
  VAR_3 = VAR_0[VAR_2].guess(&VAR_0[VAR_2].buf);

 FUNC_1(VAR_1);

 return VAR_3;
}
