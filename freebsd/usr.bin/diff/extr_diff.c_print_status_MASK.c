
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (char*,char*,char const*,...) ;
 int VAR_2 ;

void
FUNC_1(int VAR_3, char *VAR_4, char *VAR_5, const char *VAR_6)
{
 switch (VAR_3) {
 case 134:
  FUNC_0("Binary files %s%s and %s%s differ\n",
      VAR_4, VAR_6, VAR_5, VAR_6);
  break;
 case 133:
  if (VAR_1 == VAR_0)
   FUNC_0("Files %s%s and %s%s differ\n",
       VAR_4, VAR_6, VAR_5, VAR_6);
  break;
 case 130:
  if (VAR_2)
   FUNC_0("Files %s%s and %s%s are identical\n",
       VAR_4, VAR_6, VAR_5, VAR_6);
  break;
 case 132:
  FUNC_0("File %s%s is a directory while file %s%s is a regular file\n",
      VAR_4, VAR_6, VAR_5, VAR_6);
  break;
 case 131:
  FUNC_0("File %s%s is a regular file while file %s%s is a directory\n",
      VAR_4, VAR_6, VAR_5, VAR_6);
  break;
 case 129:
  FUNC_0("File %s%s is not a regular file or directory and was skipped\n",
      VAR_4, VAR_6);
  break;
 case 128:
  FUNC_0("File %s%s is not a regular file or directory and was skipped\n",
      VAR_5, VAR_6);
  break;
 }
}
