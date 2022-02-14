
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_transaction ;
struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__**,int *,char*) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int **,char const*) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(void)
{
 git_config *VAR_1, *VAR_2;
 git_config_entry *VAR_3;
 git_transaction *VAR_4;
 const char *VAR_5 = "locked-file";


 FUNC_2(VAR_5, "[section]\n\tname = value\n");
 FUNC_3(FUNC_8(&VAR_1, VAR_5));
 FUNC_3(FUNC_6(&VAR_3, VAR_1, "section.name"));
 FUNC_0("value", VAR_3->value);
 FUNC_4(VAR_3);
 FUNC_3(FUNC_7(&VAR_4, VAR_1));


 FUNC_3(FUNC_9(VAR_1, "section.name", "other value"));
 FUNC_3(FUNC_9(VAR_1, "section2.name3", "more value"));


 FUNC_3(FUNC_8(&VAR_2, VAR_5));
 FUNC_3(FUNC_6(&VAR_3, VAR_2, "section.name"));
 FUNC_0("value", VAR_3->value);
 FUNC_4(VAR_3);
 FUNC_1(VAR_0, FUNC_6(&VAR_3, VAR_2, "section2.name3"));
 FUNC_5(VAR_2);


 FUNC_3(FUNC_6(&VAR_3, VAR_1, "section.name"));
 FUNC_0("value", VAR_3->value);
 FUNC_4(VAR_3);
 FUNC_1(VAR_0, FUNC_6(&VAR_3, VAR_1, "section2.name3"));

 FUNC_3(FUNC_10(VAR_4));
 FUNC_11(VAR_4);


 FUNC_3(FUNC_6(&VAR_3, VAR_1, "section.name"));
 FUNC_0("other value", VAR_3->value);
 FUNC_4(VAR_3);
 FUNC_3(FUNC_6(&VAR_3, VAR_1, "section2.name3"));
 FUNC_0("more value", VAR_3->value);
 FUNC_4(VAR_3);

 FUNC_5(VAR_1);


 FUNC_3(FUNC_8(&VAR_1, VAR_5));
 FUNC_3(FUNC_6(&VAR_3, VAR_1, "section.name"));
 FUNC_0("other value", VAR_3->value);
 FUNC_4(VAR_3);
 FUNC_3(FUNC_6(&VAR_3, VAR_1, "section2.name3"));
 FUNC_0("more value", VAR_3->value);
 FUNC_4(VAR_3);

 FUNC_5(VAR_1);
}
