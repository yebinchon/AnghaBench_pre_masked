
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nscd_connection_ {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct nscd_connection_*,int*,int) ;
 int FUNC_3 (struct nscd_connection_*,...) ;
 int FUNC_4 (struct nscd_connection_*,int ) ;
 size_t FUNC_5 (char const*) ;

int
FUNC_6(struct nscd_connection_ *VAR_2,
 const char *VAR_3, int VAR_4)
{
 size_t VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_0(VAR_1);

 VAR_6 = -1;
 VAR_7 = 0;
 VAR_7 = FUNC_4(VAR_2, VAR_0);
 if (VAR_7 != 0)
  goto fin;

 if (VAR_3 != ((void*)0))
  VAR_5 = FUNC_5(VAR_3);
 else
  VAR_5 = 0;

 VAR_7 = FUNC_3(VAR_2, &VAR_5, sizeof(size_t));
 if (VAR_7 != 0)
  goto fin;

 VAR_7 = FUNC_3(VAR_2, &VAR_4, sizeof(int));
 if (VAR_7 != 0)
  goto fin;

 if (VAR_3 != ((void*)0)) {
  VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_5);
  if (VAR_7 != 0)
   goto fin;
 }

 VAR_7 = FUNC_2(VAR_2, &VAR_6, sizeof(int));
 if (VAR_7 != 0)
  VAR_6 = -1;

fin:
 FUNC_1(VAR_1);
 return (VAR_6);
}
