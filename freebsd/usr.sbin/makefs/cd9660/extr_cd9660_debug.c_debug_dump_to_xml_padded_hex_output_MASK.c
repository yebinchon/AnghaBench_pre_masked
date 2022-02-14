
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, unsigned char *VAR_1,
        int VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_0("<%s>",VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = (unsigned char)VAR_1[VAR_3];
  if (VAR_4 >= 32 && VAR_4 < 127)
   FUNC_0("%c",VAR_4);
 }
 FUNC_0("</%s>\n",VAR_0);

 FUNC_0("<%s:hex>",VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = (unsigned char)VAR_1[VAR_3];
  FUNC_0(" %x",VAR_4);
 }
 FUNC_0("</%s:hex>\n",VAR_0);
}
