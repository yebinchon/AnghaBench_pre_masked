
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {char const* name; } ;


 int FUNC_0 (int *,struct section*,int ) ;
 int FUNC_1 (struct section*,int) ;
 int VAR_0 ;
 struct section* FUNC_2 (int) ;
 int VAR_1 ;

void
FUNC_3 (const char *VAR_2)
{
 struct section *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct section));
 FUNC_1(VAR_3, sizeof(struct section));
 VAR_3->name = VAR_2;
 FUNC_0(&VAR_1, VAR_3, VAR_0);

 return;
}
