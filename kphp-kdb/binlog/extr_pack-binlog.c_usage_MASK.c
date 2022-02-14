
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2 (void) {
  FUNC_1 ("%s\n", VAR_0);
  FUNC_1 (
    "pack-binlog [-123456789] [-u<username>] [-v] <binlog>\n"
    "\tBinlog packing tool.\n"
    "\t[-v]\t\toutput statistical and debug information into stderr\n"
    "\t[-d]\t\tdecompress\n"
    "\t[-c]\t\tdecompress to stdout\n"
    "\t[-t]\t\ttest, check the compressed file integrity\n"
    "\t[-i]\t\tshow zipped binlog info\n"
    "\t[-x]\t\txz compression\n"
    "\t[-z]\t\tzlib compression\n"
    "\t[-1]\t\tcompress faster\n"
    "\t[-6]\t\tdefault for xz\n"
    "\t[-9]\t\tcompress better (default for zlib)\n"
    "\t[-K]\t\tallows to cut KFS headers (not recommend to use).\n"
    "\t\t\tKFS headers cuttings leads to broken replication and failure during binlog replaying after unpacking.\n"



  );







  FUNC_0 (2);
}
