
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ git_odb_expand_id ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,size_t) ;
 int FUNC_5 (TYPE_1__**,size_t*) ;

void FUNC_6(void)
{
 git_odb_expand_id *VAR_4;
 size_t VAR_5, VAR_6;



 FUNC_5(&VAR_4, &VAR_6);
 FUNC_2(FUNC_4(VAR_3, VAR_4, VAR_6));
 FUNC_0(VAR_4);
 FUNC_3(VAR_4);



 FUNC_5(&VAR_4, &VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_4[VAR_5].type = 0;

 FUNC_2(FUNC_4(VAR_3, VAR_4, VAR_6));
 FUNC_0(VAR_4);
 FUNC_3(VAR_4);



 FUNC_5(&VAR_4, &VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_4[VAR_5].type = VAR_0;

 FUNC_2(FUNC_4(VAR_3, VAR_4, VAR_6));
 FUNC_0(VAR_4);
 FUNC_3(VAR_4);



 FUNC_5(&VAR_4, &VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_4[VAR_5].type = (VAR_4[VAR_5].type == VAR_1) ?
   VAR_2 : VAR_1;

 FUNC_2(FUNC_4(VAR_3, VAR_4, VAR_6));
 FUNC_1(VAR_4);
 FUNC_3(VAR_4);
}
