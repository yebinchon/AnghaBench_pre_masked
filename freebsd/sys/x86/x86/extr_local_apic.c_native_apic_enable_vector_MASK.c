
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 int ** VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(u_int VAR_8, u_int VAR_9)
{

 FUNC_0(VAR_9 != VAR_2, ("Attempt to overwrite syscall entry"));
 FUNC_0(VAR_5[VAR_9 / 32] != ((void*)0),
     ("No ISR handler for vector %u", VAR_9));




 FUNC_1(VAR_9, (VAR_7 ? VAR_6 : VAR_5)[VAR_9 / 32],
     VAR_3, VAR_4, VAR_0);
}
