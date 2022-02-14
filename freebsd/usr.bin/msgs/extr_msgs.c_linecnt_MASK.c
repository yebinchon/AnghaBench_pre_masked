
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_2)
{
 off_t VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = 0;
 char VAR_5[VAR_0];

 while (FUNC_1(VAR_5, sizeof VAR_5, VAR_2))
  VAR_4++;
 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_3, VAR_1);
 return (VAR_4);
}
