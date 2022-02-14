
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(const char* VAR_7) {

  FUNC_0(VAR_6,
"Usage: %s [OPTION]... [FILE]...\n",
          VAR_7);
  FUNC_0(VAR_6,
"Options:\n"
"  -#                          compression level (0-9)\n"
"  -c, --stdout                write on standard output\n"
"  -d, --decompress            decompress\n"
"  -f, --force                 force output file overwrite\n"
"  -h, --help                  display this help and exit\n");
  FUNC_0(VAR_6,
"  -j, --rm                    remove source file(s)\n"
"  -k, --keep                  keep source file(s) (default)\n"
"  -n, --no-copy-stat          do not copy source file(s) attributes\n"
"  -o FILE, --output=FILE      output file (only if 1 input file)\n");
  FUNC_0(VAR_6,
"  -q NUM, --quality=NUM       compression level (%d-%d)\n",
          VAR_2, VAR_0);
  FUNC_0(VAR_6,
"  -t, --test                  test compressed file integrity\n"
"  -v, --verbose               verbose mode\n");
  FUNC_0(VAR_6,
"  -w NUM, --lgwin=NUM         set LZ77 window size (0, %d-%d) (default:%d)\n",
          VAR_3, VAR_1, VAR_4);
  FUNC_0(VAR_6,
"                              window size = 2**NUM - 16\n"
"                              0 lets compressor choose the optimal value\n");
  FUNC_0(VAR_6,
"  -S SUF, --suffix=SUF        output file suffix (default:'%s')\n",
          VAR_5);
  FUNC_0(VAR_6,
"  -V, --version               display version and exit\n"
"  -Z, --best                  use best compression level (11) (default)\n"
"Simple options could be coalesced, i.e. '-9kf' is equivalent to '-9 -k -f'.\n"
"With no FILE, or when FILE is -, read standard input.\n"
"All arguments after '--' are treated as files.\n");
}
