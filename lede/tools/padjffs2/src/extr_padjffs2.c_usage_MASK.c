
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{
 FUNC_0(VAR_2,
  "Usage: %s file [<options>] [pad0] [pad1] [padN]\n"
  "Options:\n"
  "  -x <offset>:          Add an extra offset for padding data\n"
  "  -J:                   Use a fake big-endian jffs2 padding element instead of EOF\n"
  "                        This is used to work around broken boot loaders that\n"
  "                        try to parse the entire firmware area as one big jffs2\n"
  "  -j:                   (like -J, but little-endian instead of big-endian)\n"
  "  -c:                   write padding to stdout\n"
  "\n",
  VAR_1);
 return VAR_0;
}
