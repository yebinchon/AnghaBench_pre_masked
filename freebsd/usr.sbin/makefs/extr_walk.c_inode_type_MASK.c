
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

const char *
FUNC_7(mode_t VAR_0)
{
 if (FUNC_5(VAR_0))
  return ("file");
 if (FUNC_4(VAR_0))
  return ("symlink");
 if (FUNC_2(VAR_0))
  return ("dir");
 if (FUNC_4(VAR_0))
  return ("link");
 if (FUNC_3(VAR_0))
  return ("fifo");
 if (FUNC_6(VAR_0))
  return ("socket");

 if (FUNC_1(VAR_0))
  return ("char");
 if (FUNC_0(VAR_0))
  return ("block");
 return ("unknown");
}
