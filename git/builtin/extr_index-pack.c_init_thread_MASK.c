
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pack_fd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_12;
 FUNC_2(&VAR_6);
 FUNC_5(&VAR_1, ((void*)0));
 FUNC_5(&VAR_11, ((void*)0));
 FUNC_5(&VAR_10, ((void*)0));
 if (VAR_7)
  FUNC_5(&VAR_3, ((void*)0));
 FUNC_4(&VAR_4, ((void*)0));
 VAR_8 = FUNC_6(VAR_5, sizeof(*VAR_8));
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_8[VAR_12].pack_fd = FUNC_3(VAR_2, VAR_0);
  if (VAR_8[VAR_12].pack_fd == -1)
   FUNC_1(FUNC_0("unable to open %s"), VAR_2);
 }

 VAR_9 = 1;
}
