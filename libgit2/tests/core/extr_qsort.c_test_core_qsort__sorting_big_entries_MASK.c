
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct big_entries {struct big_entries** c; } ;
typedef int a ;


 int FUNC_0 (struct big_entries*,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct big_entries**,char,int) ;
 int FUNC_3 (struct big_entries**,char*) ;

void FUNC_4(void)
{
 struct big_entries VAR_1[5];

 FUNC_2(&VAR_1, 0, sizeof(VAR_1));

 FUNC_2(VAR_1[0].c, 'w', sizeof(VAR_1[0].c) - 1);
 FUNC_2(VAR_1[1].c, 'c', sizeof(VAR_1[1].c) - 1);
 FUNC_2(VAR_1[2].c, 'w', sizeof(VAR_1[2].c) - 1);
 FUNC_2(VAR_1[3].c, 'h', sizeof(VAR_1[3].c) - 1);
 FUNC_2(VAR_1[4].c, 'a', sizeof(VAR_1[4].c) - 1);

 FUNC_0(VAR_1, VAR_0);

 FUNC_1(FUNC_3(VAR_1[0].c, "a"), sizeof(VAR_1[0].c) - 1);
 FUNC_1(FUNC_3(VAR_1[1].c, "c"), sizeof(VAR_1[1].c) - 1);
 FUNC_1(FUNC_3(VAR_1[2].c, "h"), sizeof(VAR_1[2].c) - 1);
 FUNC_1(FUNC_3(VAR_1[3].c, "w"), sizeof(VAR_1[3].c) - 1);
 FUNC_1(FUNC_3(VAR_1[4].c, "w"), sizeof(VAR_1[4].c) - 1);
}
