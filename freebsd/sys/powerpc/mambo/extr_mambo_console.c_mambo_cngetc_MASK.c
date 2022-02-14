
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct consdev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 > 0 && VAR_3 < 0xff) {



  return (VAR_3);
 }

 return (-1);
}
