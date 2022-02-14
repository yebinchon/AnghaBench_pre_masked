
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int brain_server; int version; int usage; int example_hashes; int backend_info; int brain_session_whitelist; int brain_password; int brain_port; int brain_host; } ;
typedef TYPE_1__ user_options_t ;
typedef int time_t ;
struct TYPE_20__ {TYPE_1__* user_options; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int const,int const) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,char const*,char const*,int,char**,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int,char**) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,char*) ;

int FUNC_21 (int VAR_5, char **VAR_6)
{


  FUNC_13 ();

  const time_t VAR_7 = FUNC_14 (((void*)0));



  hashcat_ctx_t *VAR_8 = (hashcat_ctx_t *) FUNC_11 (sizeof (hashcat_ctx_t));

  if (FUNC_6 (VAR_8, VAR_4) == -1)
  {
    FUNC_10 (VAR_8);

    return -1;
  }


  const char *VAR_9 = ((void*)0);
  const char *VAR_10 = ((void*)0);
  if (FUNC_18 (VAR_8) == -1)
  {
    FUNC_10 (VAR_8);

    return -1;
  }



  if (FUNC_16 (VAR_8, VAR_5, VAR_6) == -1)
  {
    FUNC_10 (VAR_8);

    return -1;
  }

  if (FUNC_19 (VAR_8) == -1)
  {
    FUNC_10 (VAR_8);

    return -1;
  }



  user_options_t *VAR_11 = VAR_8->user_options;
  if (VAR_11->version == 1)
  {
    FUNC_12 ("%s\n", VAR_3);

    FUNC_10 (VAR_8);

    return 0;
  }



  FUNC_20 (VAR_8, VAR_3);

  int VAR_12 = -1;

  if (FUNC_9 (VAR_8, VAR_9, VAR_10, VAR_5, VAR_6, VAR_0) == 0)
  {
    if (VAR_11->usage == 1)
    {
      FUNC_15 (VAR_8);

      VAR_12 = 0;
    }
    else if (VAR_11->example_hashes == 1)
    {
      FUNC_3 (VAR_8);

      VAR_12 = 0;
    }
    else if (VAR_11->backend_info == 1)
    {


      FUNC_0 (VAR_8);

      VAR_12 = 0;
    }
    else
    {


      FUNC_1 (VAR_8);

      FUNC_17 (VAR_8);

      VAR_12 = FUNC_8 (VAR_8);
    }
  }



  FUNC_7 (VAR_8);



  const time_t VAR_13 = FUNC_14 (((void*)0));

  FUNC_4 (VAR_8, VAR_7, VAR_13);

  FUNC_5 (VAR_8);

  FUNC_10 (VAR_8);

  return VAR_12;
}
