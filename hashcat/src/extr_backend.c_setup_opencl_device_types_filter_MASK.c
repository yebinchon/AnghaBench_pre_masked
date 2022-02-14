
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashcat_ctx_t ;
typedef unsigned int cl_device_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char*,int const) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (char*,int *,int) ;

__attribute__((used)) static bool FUNC_5 (hashcat_ctx_t *VAR_2, const char *VAR_3, cl_device_type *VAR_4)
{
  cl_device_type VAR_5 = 0;

  if (VAR_3)
  {
    char *VAR_6 = FUNC_2 (VAR_3);

    if (VAR_6 == ((void*)0)) return 0;

    char *VAR_7 = ((void*)0);

    char *VAR_8 = FUNC_3 (VAR_6, ",", &VAR_7);

    do
    {
      const int VAR_9 = (const int) FUNC_4 (VAR_8, ((void*)0), 10);

      if (VAR_9 < 1 || VAR_9 > 3)
      {
        FUNC_0 (VAR_2, "Invalid OpenCL device-type %d specified.", VAR_9);

        FUNC_1 (VAR_6);

        return 0;
      }

      VAR_5 |= 1U << VAR_9;

    } while ((VAR_8 = FUNC_3 (((void*)0), ",", &VAR_7)) != ((void*)0));

    FUNC_1 (VAR_6);
  }
  else
  {



    VAR_5 = VAR_0 & ~VAR_1;
  }

  *VAR_4 = VAR_5;

  return 1;
}
