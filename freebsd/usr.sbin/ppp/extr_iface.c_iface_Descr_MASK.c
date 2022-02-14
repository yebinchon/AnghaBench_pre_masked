
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* buffer; scalar_t__ length; } ;
struct ifreq {TYPE_2__ ifr_buffer; int ifr_name; } ;
struct iface {char* descr; int name; } ;
struct cmdargs {int argn; int argc; char** argv; TYPE_1__* bundle; } ;
typedef int caddr_t ;
struct TYPE_3__ {struct iface* iface; } ;


 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,int*,size_t*,int *,int ) ;

int
FUNC_10(struct cmdargs const *VAR_6)
{
  struct ifreq VAR_7;
  struct iface *VAR_8;
  size_t VAR_9, VAR_10;
  int VAR_11, VAR_12, VAR_13;
  char *VAR_14;

  VAR_9 = sizeof(int);
  if (FUNC_9("net.ifdescr_maxlen", &VAR_13, &VAR_9, ((void*)0), 0) < 0) {
    FUNC_3(VAR_0, "iface descr: sysctl failed: %s\n", FUNC_5(VAR_5));
    return 1;
  }

  if (VAR_13 < 1) {
    FUNC_3(VAR_0, "iface descr: sysctl net.ifdescr_maxlen < 1\n");
    return 1;
  }

  VAR_9 = sizeof(char) * VAR_13;
  if ((VAR_14 = FUNC_4(VAR_9)) == ((void*)0)) {
    FUNC_3(VAR_0, "iface descr: malloc failed: %s\n", FUNC_5(VAR_5));
    return 1;
  }

  *VAR_14 = '\0';
  VAR_12 = VAR_6->argn;
  while (VAR_12 < VAR_6->argc) {
    if (VAR_12 > VAR_6->argn && (VAR_10 = FUNC_6(VAR_14, " ", VAR_9)) >= VAR_9)
      break;
    if ((VAR_10 = FUNC_6(VAR_14, VAR_6->argv[VAR_12], VAR_9)) >= VAR_9)
      break;
    ++VAR_12;
  }
  if (VAR_10 >= VAR_9) {
    FUNC_3(VAR_0, "iface descr: description exceeds maximum (%d)\n",
               VAR_13-1);
    FUNC_2(VAR_14);
    return 1;
  }

  if ((VAR_11 = FUNC_1(VAR_2, VAR_4, 0)) == -1) {
    FUNC_3(VAR_0, "iface descr: socket(): %s\n", FUNC_5(VAR_5));
    FUNC_2(VAR_14);
    return 1;
  }

  VAR_8 = VAR_6->bundle->iface;
  FUNC_7(VAR_7.ifr_name, VAR_8->name, sizeof(VAR_7.ifr_name));
  VAR_7.ifr_buffer.length = FUNC_8(VAR_14) + 1;
  VAR_7.ifr_buffer.buffer = VAR_14;
  if (FUNC_0(VAR_11, VAR_3, (caddr_t)&VAR_7) < 0) {
    FUNC_3(VAR_1, "iface descr: ioctl(SIOCSIFDESCR, %s): %s\n",
               VAR_14, FUNC_5(VAR_5));
    FUNC_2(VAR_14);
    return 1;
  }

  FUNC_2(VAR_8->descr);
  VAR_8->descr = VAR_14;

  return 0;
}
