
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofwo_extabent {char const* ex_prop; int (* ex_handler ) (struct ofwo_extabent const*,int,void*,int,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,char const*,void**,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 struct ofwo_extabent* VAR_4 ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (int,void*,int,char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int FUNC_8 (struct ofwo_extabent const*,int,void*,int,char const*) ;

int
FUNC_9(const char *VAR_5, const char *VAR_6)
{
 void *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 const struct ofwo_extabent *VAR_12;

 VAR_10 = 0;
 VAR_11 = VAR_0;
 VAR_7 = ((void*)0);
 if (FUNC_7(VAR_5, "name") == 0)
  return (VAR_1);
 if (VAR_6)
  VAR_8 = FUNC_3(VAR_3);
 else
  VAR_8 = FUNC_3(VAR_2);
 VAR_9 = FUNC_2(VAR_8, FUNC_4(VAR_8), VAR_5, &VAR_7, &VAR_10, 1);
 if (VAR_9 < 0) {
  VAR_11 = VAR_1;
  goto out;
 }
 for (VAR_12 = VAR_4; VAR_12->ex_prop != ((void*)0); ++VAR_12)
  if (FUNC_7(VAR_12->ex_prop, VAR_5) == 0)
   break;
 if (VAR_12->ex_prop != ((void*)0))
  VAR_11 = (*VAR_12->ex_handler)(VAR_12, VAR_8, VAR_7, VAR_9, VAR_6);
 else if (VAR_6)
  VAR_11 = FUNC_6(VAR_8, VAR_7, VAR_9, VAR_5, VAR_6);
 else
  FUNC_5(VAR_5, (char *)VAR_7, VAR_9);
out:
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_7);
 FUNC_1(VAR_8);
 return (VAR_11);
}
