
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entry_count; } ;
typedef TYPE_1__ status_entry_counts ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__,int ,int ) ;

void FUNC_8(void)
{
 status_entry_counts VAR_4;

 VAR_3 = FUNC_6();

 FUNC_0(FUNC_3("submodules/.git"));
 FUNC_0(FUNC_3("submodules/testrepo/.git"));
 FUNC_0(FUNC_4("submodules/.gitmodules"));

 FUNC_7(VAR_4, VAR_1, VAR_2);

 FUNC_2( FUNC_5(VAR_3, VAR_0, &VAR_4) );

 FUNC_1(6, VAR_4.entry_count);
}
