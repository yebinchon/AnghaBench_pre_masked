
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u32 ;
typedef int HCRYPTPROV ;
typedef int HCFILE ;
typedef int BYTE ;


 int FUNC_0 (int *,int *,int *,int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,char*) ;
 int FUNC_7 (int *,int,int,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

u32 FUNC_12 (void)
{
  FUNC_9 (FUNC_11 (((void*)0)));

  u32 VAR_3 = FUNC_8 ();
  static const char *VAR_4 = "/dev/urandom";

  HCFILE VAR_5;

  if (FUNC_6 (&VAR_5, VAR_4, "rb") == 0)
  {
    FUNC_4 (VAR_2, 0, "%s: %s\n", VAR_4, FUNC_10 (VAR_1));

    return VAR_3;
  }

  if (FUNC_7 (&VAR_3, sizeof (VAR_3), 1, &VAR_5) != 1)
  {
    FUNC_4 (VAR_2, 0, "%s: %s\n", VAR_4, FUNC_10 (VAR_1));

    FUNC_5 (&VAR_5);

    return VAR_3;
  }

  FUNC_5 (&VAR_5);



  return VAR_3;
}
