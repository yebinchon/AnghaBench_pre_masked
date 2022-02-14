
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int dummy; } ;


 int FUNC_0 (int *,struct peer*,int ) ;
 struct peer* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct peer *VAR_2)
{
 struct peer *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_2(1, "malloc failed");
 *VAR_3 = *VAR_2;
 FUNC_0(&VAR_1, VAR_3, VAR_0);

 return (0);
}
