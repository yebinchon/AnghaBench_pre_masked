
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1() {
 FUNC_0("Usage:\n");
 FUNC_0("\n");
 FUNC_0("Checking TRX file:\n");
 FUNC_0("\totrx check <file> [options]\tcheck if file is a valid TRX\n");
 FUNC_0("\t-o offset\t\t\toffset of TRX data in file (default: 0)\n");
 FUNC_0("\n");
 FUNC_0("Creating new TRX file:\n");
 FUNC_0("\totrx create <file> [options] [partitions]\n");
 FUNC_0("\t-f file\t\t\t\t[partition] start new partition with content copied from file\n");
 FUNC_0("\t-A file\t\t\t\t[partition] append current partition with content copied from file\n");
 FUNC_0("\t-a alignment\t\t\t[partition] align current partition\n");
 FUNC_0("\t-b offset\t\t\t[partition] append zeros to partition till reaching absolute offset\n");
 FUNC_0("\n");
 FUNC_0("Extracting from TRX file:\n");
 FUNC_0("\totrx extract <file> [options]\textract partitions from TRX file\n");
 FUNC_0("\t-o offset\t\t\toffset of TRX data in file (default: 0)\n");
 FUNC_0("\t-1 file\t\t\t\tfile to extract 1st partition to (optional)\n");
 FUNC_0("\t-2 file\t\t\t\tfile to extract 2nd partition to (optional)\n");
 FUNC_0("\t-3 file\t\t\t\tfile to extract 3rd partition to (optional)\n");
}
