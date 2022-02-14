
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const char* VAR_1)
{
 FILE *VAR_2;
 int VAR_3 = -1;

 if ( (VAR_2 = FUNC_1(VAR_1, "rb") ) == ((void*)0)) return (-1);

 FUNC_2(VAR_2, 0, VAR_0);
 VAR_3 = FUNC_3(VAR_2);

 FUNC_0 (VAR_2);

 return (VAR_3);
}
