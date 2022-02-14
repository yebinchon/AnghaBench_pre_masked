
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,char const*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0)
{
 static const char *VAR_1[] = {
  "Multifunction card",
  "Memory card",
  "Serial port/modem",
  "Parallel port",
  "Fixed disk card",
  "Video adapter",
  "Network/LAN adapter",
  "AIMS",
  "SCSI card",
  "Security"
 };

 FUNC_0("\t%s%s%s\n",
        (*VAR_0 <= 9) ? VAR_1[*VAR_0] : "Unknown function",
        (VAR_0[1] & 1) ? " - POST initialize" : "",
        (VAR_0[1] & 2) ? " - Card has ROM" : "");
}
