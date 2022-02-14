
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{


 FUNC_1(VAR_2, "usage: usbdump [options]\n");
 FUNC_1(VAR_2, "    %-14s %s\n", "-i <usbusX>", "Listen on USB bus interface");
 FUNC_1(VAR_2, "    %-14s %s\n", "-f <unit[.endpoint]>", "Specify a device and endpoint filter");
 FUNC_1(VAR_2, "    %-14s %s\n", "-r <file>", "Read the raw packets from file");
 FUNC_1(VAR_2, "    %-14s %s\n", "-s <snaplen>", "Snapshot bytes from each packet");
 FUNC_1(VAR_2, "    %-14s %s\n", "-v", "Increase the verbose level");
 FUNC_1(VAR_2, "    %-14s %s\n", "-b <file>", "Save raw version of all recorded data to file");
 FUNC_1(VAR_2, "    %-14s %s\n", "-w <file>", "Write the raw packets to file");
 FUNC_1(VAR_2, "    %-14s %s\n", "-h", "Display summary of command line options");

 FUNC_0(VAR_0);
}
