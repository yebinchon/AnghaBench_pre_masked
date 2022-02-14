
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(u_int VAR_9, u_int VAR_10)
{

 FUNC_1(VAR_10 != VAR_2, ("Attempt to overwrite syscall entry"));




 FUNC_1(VAR_5[VAR_10 / 32] != ((void*)0),
     ("No ISR handler for vector %u", VAR_10));
}
