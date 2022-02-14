
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u64 ;
typedef int buf ;
typedef int XXH64_state_t ;
typedef int HCFILE ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int const FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,size_t const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,char*) ;
 size_t FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char*,int ,int) ;

u64 FUNC_10 (const char *VAR_1)
{
  XXH64_state_t *VAR_2 = FUNC_0 ();

  FUNC_3 (VAR_2, 0);



  char VAR_3[8192];

  HCFILE VAR_4;

  FUNC_7 (&VAR_4, VAR_1, "rb");

  while (!FUNC_6 (&VAR_4))
  {
    FUNC_9 (VAR_3, 0, sizeof (VAR_3));

    const size_t VAR_5 = FUNC_8 (VAR_3, 1, 8192, &VAR_4);

    FUNC_4 (VAR_2, VAR_3, VAR_5);
  }

  FUNC_5 (&VAR_4);

  const u64 VAR_6 = FUNC_1 (VAR_2);

  FUNC_2 (VAR_2);

  return VAR_6;
}
