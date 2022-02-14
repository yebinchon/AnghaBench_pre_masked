
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psmouse {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct psmouse*,char*) ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_0(VAR_0, VAR_2,
      VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_0(VAR_1, 0,
      VAR_5, VAR_6, VAR_7, VAR_8);

 if ((VAR_5 & VAR_3) != VAR_3)
  FUNC_1(VAR_4, "failed to disable vmmouse device\n");
}
