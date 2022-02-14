
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(VAR_5, "Usage: mtd [<options> ...] <command> [<arguments> ...] <device>[:<device>...]\n\n"
 "The device is in the format of mtdX (eg: mtd4) or its label.\n"
 "mtd recognizes these commands:\n"
 "        unlock                  unlock the device\n"
 "        refresh                 refresh mtd partition\n"
 "        erase                   erase all data on device\n"
 "        verify <imagefile>|-    verify <imagefile> (use - for stdin) to device\n"
 "        write <imagefile>|-     write <imagefile> (use - for stdin) to device\n"
 "        jffs2write <file>       append <file> to the jffs2 partition on the device\n");
 if (VAR_4) {
     FUNC_1(VAR_5,
 "        resetbc <device>        reset the uboot boot counter\n");
 }
 if (VAR_1) {
     FUNC_1(VAR_5,
 "        fixtrx                  fix the checksum in a trx header on first boot\n");
 }
 if (VAR_0) {
     FUNC_1(VAR_5,
 "        fixseama                fix the checksum in a seama header on first boot\n");
 }
 if (VAR_2) {
     FUNC_1(VAR_5,
 "        fixwrg                  fix the checksum in a wrg header on first boot\n");
 }
 if (VAR_3) {
     FUNC_1(VAR_5,
 "        fixwrgg                 fix the checksum in a wrgg header on first boot\n");
 }
 FUNC_1(VAR_5,
 "Following options are available:\n"
 "        -q                      quiet mode (once: no [w] on writing,\n"
 "                                           twice: no status messages)\n"
 "        -n                      write without first erasing the blocks\n"
 "        -r                      reboot after successful command\n"
 "        -f                      force write without trx checks\n"
 "        -e <device>             erase <device> before executing the command\n"
 "        -d <name>               directory for jffs2write, defaults to \"tmp\"\n"
 "        -j <name>               integrate <file> into jffs2 data when writing an image\n"
 "        -s <number>             skip the first n bytes when appending data to the jffs2 partiton, defaults to \"0\"\n"
 "        -p <number>             write beginning at partition offset\n"
 "        -l <length>             the length of data that we want to dump\n");
 if (VAR_1) {
     FUNC_1(VAR_5,
 "        -o offset               offset of the image header in the partition(for fixtrx)\n");
 }
 if (VAR_1 || VAR_0 || VAR_2 || VAR_3) {
  FUNC_1(VAR_5,
 "        -c datasize             amount of data to be used for checksum calculation (for fixtrx / fixseama / fixwrg / fixwrgg)\n");
 }
 FUNC_1(VAR_5,






 "\n"
 "Example: To write linux.trx to mtd4 labeled as linux and reboot afterwards\n"
 "         mtd -r write linux.trx linux\n\n");
 FUNC_0(1);
}
