
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (int *,int const) ;
 int FUNC_5 (char*,int ,char*,char*,...) ;

__attribute__((used)) static char *FUNC_6 (hashcat_ctx_t *VAR_1, const int VAR_2)
{
  char *VAR_3 = FUNC_4 (VAR_1, VAR_2);

  if (VAR_3 == ((void*)0))
  {
    FUNC_0 (VAR_1, "hm_SYSFS_get_syspath_device() failed.");

    return ((void*)0);
  }

  char *VAR_4 = (char *) FUNC_3 (VAR_0);

  FUNC_5 (VAR_4, VAR_0, "%s/hwmon", VAR_3);

  char *VAR_5 = FUNC_1 (VAR_4);

  if (VAR_5 == ((void*)0))
  {
    FUNC_0 (VAR_1, "First_file_in_directory() failed.");

    FUNC_2 (VAR_3);

    FUNC_2 (VAR_4);
    FUNC_2 (VAR_5);

    return ((void*)0);
  }

  FUNC_5 (VAR_4, VAR_0, "%s/hwmon/%s", VAR_3, VAR_5);

  FUNC_2 (VAR_3);

  FUNC_2 (VAR_5);

  return VAR_4;
}
