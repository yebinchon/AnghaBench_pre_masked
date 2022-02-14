
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 char* FUNC_1 (char const*) ;
 char** VAR_1 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, const char *VAR_3, int VAR_4)
{
    if (VAR_3)
 VAR_3 = FUNC_1(VAR_3);
    switch (VAR_4) {
    case 128:
 FUNC_0("%s: Unknown format\n", VAR_2);
 break;
    case 133:
 FUNC_0("%s: Invalid MD5 format\n", VAR_2);
 break;
    case 134:
 FUNC_0("%s: Invalid .inf format\n", VAR_2);
 break;
    case 129:
 FUNC_0("%s: Can't derive component name\n", VAR_2);
 break;
    case 130:
 FUNC_0("%s: %s: Size mismatch\n", VAR_2, VAR_3);
 break;
    case 132:
 FUNC_0("%s: %s: Checksum mismatch\n", VAR_2, VAR_3);
 break;
    case 131:
 FUNC_0("%s: %s: %s\n", VAR_2, VAR_3, VAR_1[VAR_0]);
 break;
    default:
 FUNC_0("%s: %s: OK\n", VAR_2, VAR_3);
    }
    return VAR_4 != 0;
}
