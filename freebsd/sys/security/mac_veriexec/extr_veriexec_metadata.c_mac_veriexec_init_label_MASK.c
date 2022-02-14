
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (size_t,int ,int ) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_5(char **VAR_3, size_t VAR_4, char *VAR_5,
    size_t VAR_6)
{
 char *VAR_7;

 VAR_7 = *VAR_3;
 if (VAR_4 < VAR_6) {
  FUNC_4(&VAR_2);
  if (VAR_7 != ((void*)0))
   FUNC_0(VAR_7, VAR_0);
  VAR_7 = FUNC_1(VAR_6, VAR_0, VAR_1);
  FUNC_3(&VAR_2);
  VAR_4 = VAR_6;
  *VAR_3 = VAR_7;
 }
 FUNC_2(VAR_7, VAR_5, VAR_6);
 return VAR_4;
}
