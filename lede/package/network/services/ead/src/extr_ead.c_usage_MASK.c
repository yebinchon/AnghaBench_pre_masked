
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1)
{
 FUNC_0(VAR_0, "Usage: %s [<options>]\n"
  "Options:\n"
  "\t-B             Run in background mode\n"
  "\t-d <device>    Set the device to listen on\n"
  "\t-D <name>      Set the name of the device visible to clients\n"
  "\t-p <file>      Set the password file for authenticating\n"
  "\t-P <file>      Write a pidfile\n"
  "\n", VAR_1);
 return -1;
}
