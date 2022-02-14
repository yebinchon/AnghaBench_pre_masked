
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 FUNC_1(VAR_1, "Usage: %s [OPTIONS...]\n", VAR_0);
 FUNC_1(VAR_1,
  "\n"
  "Options:\n"
  "  -i <file>       inspect given firmware file <file>\n"
  "  -f              set family member id (hexval prefixed with 0x)\n"
  "  -F <file>       read image and convert it to FACTORY\n"
  "  -k <file>       read kernel image from the file <file>\n"
  "  -r <file>       read rootfs image from the file <file>\n"
  "  -o <file>       write output to the file <file>\n"
  "  -s <size>       set firmware partition size\n"
  "  -m <version>    set rom id to <version> (12-bit string val: \"DLK*********\")\n"
  "  -h              show this screen\n");

 FUNC_0(VAR_2);
}
