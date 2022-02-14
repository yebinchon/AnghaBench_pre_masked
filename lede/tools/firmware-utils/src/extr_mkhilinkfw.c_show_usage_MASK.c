
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const char *VAR_1)
{
 FUNC_1(VAR_0, "usage: %s -d|-e [-i FILE] [-o FILE]\n\n", VAR_1);
 FUNC_1(VAR_0, "%-15s %s\n", "-d, --decrypt", "decrypt data");
 FUNC_1(VAR_0, "%-15s %s\n", "-e, --encrypt", "encrypt data");
 FUNC_1(VAR_0, "%-15s %s\n", "-i, --input", "intput file (defaults to stdin)");
 FUNC_1(VAR_0, "%-15s %s\n", "-o, --output", "output file (defaults to stdout)");
 FUNC_0(-1);
}
