
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofwo_extabent {char* ex_prop; int (* ex_handler ) (struct ofwo_extabent const*,int,void*,int,int *) ;} ;
typedef int prop ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,char*,int) ;
 int FUNC_3 (int,int ,char*,void**,int*,int) ;
 int FUNC_4 (int,int ,char*,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 struct ofwo_extabent* VAR_2 ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (struct ofwo_extabent const*,int,void*,int,int *) ;

void
FUNC_10(void)
{
 void *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 phandle_t VAR_8;
 char VAR_9[VAR_0 + 1];
 const struct ofwo_extabent *VAR_10;

 VAR_7 = 0;
 VAR_3 = ((void*)0);
 VAR_4 = FUNC_5(VAR_1);
 VAR_8 = FUNC_6(VAR_4);
 for (VAR_6 = FUNC_2(VAR_4, VAR_8, VAR_9, sizeof(VAR_9)); VAR_6 != 0;
     VAR_6 = FUNC_4(VAR_4, VAR_8, VAR_9, VAR_9, sizeof(VAR_9))) {
  VAR_5 = FUNC_3(VAR_4, VAR_8, VAR_9, &VAR_3, &VAR_7, 1);
  if (VAR_5 < 0)
   continue;
  if (FUNC_8(VAR_9, "name") == 0)
   continue;
  for (VAR_10 = VAR_2; VAR_10->ex_prop != ((void*)0); ++VAR_10)
   if (FUNC_8(VAR_10->ex_prop, VAR_9) == 0)
    break;
  if (VAR_10->ex_prop != ((void*)0))
   (*VAR_10->ex_handler)(VAR_10, VAR_4, VAR_3, VAR_5, ((void*)0));
  else
   FUNC_7(VAR_9, (char *)VAR_3, VAR_5);
 }
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3);
 FUNC_1(VAR_4);
}
