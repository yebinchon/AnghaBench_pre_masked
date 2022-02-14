
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibif {int dummy; } ;


 struct mibif* FUNC_0 () ;
 struct mibif* FUNC_1 (struct mibif*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int *,int ) ;
 int FUNC_4 (struct mibif*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct mibif *VAR_6;

 VAR_1 = FUNC_2(&VAR_0,
     "The MIB module for managing wireless networking.", VAR_3);


  for (VAR_6 = FUNC_0(); VAR_6 != ((void*)0); VAR_6 = FUNC_1(VAR_6))
  FUNC_4(VAR_6);

 VAR_2 = FUNC_3(VAR_4,
     VAR_4, VAR_5, ((void*)0), VAR_3);
}
