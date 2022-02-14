
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partedit_item {int indentation; char* name; char* type; char* mountpoint; int size; } ;
typedef int chtype ;
typedef int WINDOW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int *) ;
 int FUNC_1 (char*,int,int ,char*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void
FUNC_4(WINDOW *VAR_6, struct partedit_item *VAR_7,
    int VAR_8, int VAR_9, int VAR_10)
{
 chtype VAR_11 = VAR_0;
 char VAR_12[16];
 int VAR_13 = VAR_8 - VAR_9 + 1;

 FUNC_2(VAR_6, VAR_10 ? VAR_5 : VAR_4);
 FUNC_3(VAR_6, VAR_13, VAR_3 + VAR_7[VAR_8].indentation*2);
 FUNC_0(VAR_6, VAR_7[VAR_8].name, 10, &VAR_11);
 FUNC_3(VAR_6, VAR_13, 17);
 FUNC_2(VAR_6, VAR_4);

 FUNC_1(VAR_12, 7, VAR_7[VAR_8].size, "B", VAR_1,
     VAR_2);
 FUNC_0(VAR_6, VAR_12, 8, &VAR_11);
 FUNC_3(VAR_6, VAR_13, 25);
 FUNC_0(VAR_6, VAR_7[VAR_8].type, 15, &VAR_11);
 FUNC_3(VAR_6, VAR_13, 40);
 if (VAR_7[VAR_8].mountpoint != ((void*)0))
  FUNC_0(VAR_6, VAR_7[VAR_8].mountpoint, 8, &VAR_11);
}
