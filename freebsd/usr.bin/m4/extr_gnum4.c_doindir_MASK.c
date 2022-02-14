
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_definition {char* defn; int type; } ;
typedef int * ndptr ;


 int FUNC_0 (char const**,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,char const*) ;
 struct macro_definition* FUNC_4 (int *) ;

void
FUNC_5(const char *VAR_0[], int VAR_1)
{
 ndptr VAR_2;
 struct macro_definition *VAR_3 = ((void*)0);

 VAR_2 = FUNC_2(VAR_0[2]);
 if (VAR_2 == ((void*)0) || (VAR_3 = FUNC_4(VAR_2)) == ((void*)0))
  FUNC_3(1, "indir: undefined macro %s.", VAR_0[2]);
 VAR_0[1] = VAR_3->defn;

 FUNC_0(VAR_0+1, VAR_1-1, VAR_3->type, FUNC_1(VAR_2));
}
