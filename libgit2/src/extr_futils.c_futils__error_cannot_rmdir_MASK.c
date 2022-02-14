
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, const char *VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_0, "could not remove directory '%s': %s",
       VAR_1, VAR_2);
 else
  FUNC_0(VAR_0, "could not remove directory '%s'", VAR_1);

 return -1;
}
