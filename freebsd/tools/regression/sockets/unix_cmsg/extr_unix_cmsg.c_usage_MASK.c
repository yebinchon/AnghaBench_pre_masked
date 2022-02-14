
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {char* desc; } ;
struct TYPE_3__ {char* desc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_2(bool VAR_4)
{
 u_int VAR_5;

 FUNC_1("usage: %s [-dh] [-n num] [-s size] [-t type] "
     "[-z value] [testno]\n", FUNC_0());
 if (!VAR_4)
  return;
 FUNC_1("\n Options are:\n  -d            Output debugging information\n  -h            Output the help message and exit\n  -n num        Number of messages to send\n  -s size       Specify size of data for IPC\n  -t type       Specify socket type (stream, dgram) for tests\n  -z value      Do not send data in a message (bit 0x1), do not send\n                data array associated with a cmsghdr structure (bit 0x2)\n  testno        Run one test by its number (require the -t option)\n\n");
 FUNC_1(" Available tests for stream sockets:\n");
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  FUNC_1("   %u: %s\n", VAR_5, VAR_3[VAR_5].desc);
 FUNC_1("\n Available tests for datagram sockets:\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  FUNC_1("   %u: %s\n", VAR_5, VAR_2[VAR_5].desc);
}
