
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ignentry {int * mask; } ;


 int FUNC_0 (int *,struct ignentry*,int ) ;
 struct ignentry* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2)
{
 struct ignentry *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_2(1, "cannot allocate memory");
 VAR_3->mask = FUNC_3(VAR_2);
 if (VAR_3->mask == ((void*)0))
  FUNC_2(1, "cannot allocate memory");
 FUNC_0(&VAR_0, VAR_3, VAR_1);
}
