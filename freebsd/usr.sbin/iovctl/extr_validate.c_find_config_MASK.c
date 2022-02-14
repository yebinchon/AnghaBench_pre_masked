
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int,char*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static nvlist_t *
FUNC_4(nvlist_t *VAR_3, const char * VAR_4)
{
 nvlist_t *VAR_5, *VAR_6, *VAR_7;

 VAR_5 = FUNC_0(VAR_3, VAR_4, ((void*)0));

 if (VAR_5 != ((void*)0))
  return (VAR_5);

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == ((void*)0))
  FUNC_1(1, "Could not allocate config nvlist");

 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7 == ((void*)0))
  FUNC_1(1, "Could not allocate config nvlist");

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == ((void*)0))
  FUNC_1(1, "Could not allocate config nvlist");

 FUNC_3(VAR_5, VAR_0, VAR_6);
 FUNC_3(VAR_5, VAR_1, VAR_7);

 return (VAR_5);
}
