
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char**,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,size_t const) ;
 int FUNC_5 (char*,char*,size_t const) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (int*,int,char*,size_t*,int *,int ) ;

__attribute__((used)) static int FUNC_8 (char *VAR_3, const size_t VAR_4)
{


  char *VAR_5;

  FUNC_2 (&VAR_5, "/proc/%d/exe", FUNC_1 ());

  const ssize_t VAR_6 = FUNC_5 (VAR_5, VAR_3, VAR_4 - 1);

  FUNC_3 (VAR_5);

  if (VAR_6 == -1) return -1;
  VAR_3[VAR_6] = 0;

  return 0;
}
