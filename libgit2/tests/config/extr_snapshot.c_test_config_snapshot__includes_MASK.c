
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;

void FUNC_7(void)
{
 int VAR_2;

 FUNC_1("including", "[include]\npath = included");
 FUNC_1("included", "[section]\nkey = 1\n");

 FUNC_2(FUNC_4(&VAR_0, "including"));
 FUNC_2(FUNC_5(&VAR_1, VAR_0));

 FUNC_2(FUNC_3(&VAR_2, VAR_1, "section.key"));
 FUNC_0(VAR_2, 1);


 FUNC_1("included", "[section]\nkey = 11\n");


 FUNC_2(FUNC_3(&VAR_2, VAR_0, "section.key"));
 FUNC_0(VAR_2, 11);
 FUNC_2(FUNC_3(&VAR_2, VAR_1, "section.key"));
 FUNC_0(VAR_2, 1);

 FUNC_2(FUNC_6("including"));
 FUNC_2(FUNC_6("included"));
}
