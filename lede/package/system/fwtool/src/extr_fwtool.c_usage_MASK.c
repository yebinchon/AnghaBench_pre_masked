
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1)
{
 FUNC_0(VAR_0, "Usage: %s <options> <firmware>\n"
  "\n"
  "Options:\n"
  "  -S <file>:		Append signature file to firmware image\n"
  "  -I <file>:		Append metadata file to firmware image\n"
  "  -s <file>:		Extract signature file from firmware image\n"
  "  -i <file>:		Extract metadata file from firmware image\n"
  "  -t:			Remove extracted chunks from firmare image (using -s, -i)\n"
  "  -q:			Quiet (suppress error messages)\n"
  "\n", VAR_1);
 return 1;
}
