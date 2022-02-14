
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int pmd; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct pool*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(unsigned VAR_0, char **VAR_1, struct pool *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, 1);
 if (VAR_3)
  return VAR_3;

 (void) FUNC_2(VAR_2);

 VAR_3 = FUNC_3(VAR_2->pmd);
 if (VAR_3)
  FUNC_0("reserve_metadata_snap message failed.");

 return VAR_3;
}
