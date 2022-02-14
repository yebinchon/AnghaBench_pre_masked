
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assign {void** vals; void* key; int section; } ;


 int FUNC_0 (int *,struct assign*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct assign*,int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct assign* FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_5 (char const*) ;
 char const** VAR_5 ;

void
FUNC_6 (const char *VAR_6)
{
 struct assign *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(struct assign));
 FUNC_2(VAR_7, sizeof(struct assign));
 VAR_7->section = FUNC_1(&VAR_4, VAR_3);
 VAR_7->key = FUNC_5(VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_7->vals[(VAR_1 - 1) - VAR_8] = FUNC_5(VAR_5[VAR_8]);
 FUNC_0(&VAR_0, VAR_7, VAR_2);

 FUNC_3();
 return;
}
