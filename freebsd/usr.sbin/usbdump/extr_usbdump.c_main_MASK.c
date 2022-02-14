
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct usbcap {int bfd; int fd; int bufsize; int rfd; int wfd; int * buffer; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct ifreq {int ifr_name; } ;
struct bpf_version {scalar_t__ bv_major; scalar_t__ bv_minor; } ;
struct bpf_stat {int bs_recv; int bs_drop; } ;
struct bpf_program {int dummy; } ;
typedef int ifr ;
typedef struct ifreq* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int,int) ;
 char* VAR_25 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct usbcap*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_26 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct bpf_program*) ;
 int FUNC_8 (int,char**,char const*) ;
 int VAR_27 ;
 char* VAR_28 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct usbcap*) ;
 int FUNC_11 (struct usbcap*) ;
 scalar_t__ FUNC_12 (int,int ,struct ifreq*) ;
 int FUNC_13 (struct bpf_program*,long) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct ifreq*,int ,int) ;
 void* FUNC_16 (char*,int,...) ;
 char* VAR_29 ;
 int VAR_30 ;
 int FUNC_17 (char*,...) ;
 char* VAR_31 ;
 int FUNC_18 (struct usbcap*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,char*,int) ;
 void* FUNC_22 (char*,char**,int) ;
 struct usbcap VAR_32 ;
 int FUNC_23 () ;
 int VAR_33 ;
 char* VAR_34 ;
 int FUNC_24 (char*) ;

int
FUNC_25(int VAR_35, char *VAR_36[])
{
 struct timeval VAR_37;
 struct bpf_program VAR_38;
 struct bpf_stat VAR_39;
 struct bpf_version VAR_40;
 struct usbcap *VAR_41 = &VAR_32;
 struct ifreq VAR_42;
 long VAR_43 = 192;
 uint32_t VAR_44;
 int VAR_45;
 int VAR_46;
 int VAR_47;
 int VAR_48;
 int VAR_49;
 int VAR_50;
 const char *VAR_51;
 char *VAR_52;

 VAR_51 = "b:hi:r:s:vw:f:";
 while ((VAR_46 = FUNC_8(VAR_35, VAR_36, VAR_51)) != -1) {
  switch (VAR_46) {
  case 'i':
   VAR_28 = VAR_29;
   break;
  case 'r':
   VAR_31 = VAR_29;
   FUNC_10(VAR_41);
   break;
  case 's':
   VAR_43 = FUNC_22(VAR_29, &VAR_52, 10);
   VAR_26 = 0;
   if (VAR_52 != ((void*)0) && *VAR_52 != 0)
    FUNC_23();
   if (VAR_43 == 0 && VAR_26 == VAR_10)
    FUNC_23();

   if (VAR_43 == 0)
    VAR_43 = -1;
   break;
  case 'b':
   VAR_25 = VAR_29;
   break;
  case 'v':
   VAR_33++;
   break;
  case 'w':
   VAR_34 = VAR_29;
   FUNC_11(VAR_41);
   break;
  case 'f':
   VAR_47 = FUNC_22(VAR_29, &VAR_52, 10);
   VAR_48 = -1;
   if (VAR_52 != ((void*)0)) {
    if (*VAR_52 == '.') {
     VAR_48 = FUNC_22(VAR_52 + 1, &VAR_52, 10);
     if (VAR_52 != ((void*)0) && *VAR_52 != 0)
      FUNC_23();
    } else if (*VAR_52 != 0) {
     FUNC_23();
    }
   }
   FUNC_0(VAR_47, VAR_48);
   break;
  default:
   FUNC_23();

  }
 }

 if (VAR_25 != ((void*)0)) {
  VAR_41->bfd = FUNC_16(VAR_25, VAR_14 | VAR_16 |
      VAR_17, VAR_22 | VAR_23);
  if (VAR_41->bfd < 0) {
   FUNC_4(VAR_11, "Could not open "
       "'%s' for write", VAR_25);
  }
 }





 if (VAR_34 != ((void*)0) || VAR_25 != ((void*)0))
  VAR_33--;

 if (VAR_31 != ((void*)0)) {
  FUNC_18(VAR_41);
  FUNC_6(VAR_12);
 }

 FUNC_1();

 VAR_41->fd = VAR_45 = FUNC_16("/dev/bpf", VAR_15);
 if (VAR_41->fd < 0)
  FUNC_4(VAR_11, "Could not open BPF device");

 if (FUNC_12(VAR_45, VAR_7, (caddr_t)&VAR_40) < 0)
  FUNC_4(VAR_11, "BIOCVERSION ioctl failed");

 if (VAR_40.bv_major != VAR_8 ||
     VAR_40.bv_minor < VAR_9)
  FUNC_5(VAR_11, "Kernel BPF filter out of date");


 VAR_44 = 1U << 16;


 FUNC_15(&VAR_42, 0, sizeof(VAR_42));


 VAR_49 = FUNC_20(VAR_0, VAR_21, 0);
 if (VAR_49 < 0)
  FUNC_5(VAR_11, "Could not open a socket");
 VAR_50 = FUNC_9(VAR_28);
 if (VAR_50 == 0) {
  (void)FUNC_21(VAR_42.ifr_name, VAR_28, sizeof(VAR_42.ifr_name));
  if (FUNC_12(VAR_49, VAR_19, &VAR_42) < 0)
   FUNC_5(VAR_11, "Invalid bus interface: %s", VAR_28);
 }

 for ( ; VAR_44 >= VAR_24; VAR_44 >>= 1) {
  (void)FUNC_12(VAR_45, VAR_3, (caddr_t)&VAR_44);
  (void)FUNC_21(VAR_42.ifr_name, VAR_28, sizeof(VAR_42.ifr_name));
  if (FUNC_12(VAR_45, VAR_5, (caddr_t)&VAR_42) >= 0)
   break;
 }
 if (VAR_44 == 0)
  FUNC_5(VAR_11, "No buffer size worked.");

 if (FUNC_12(VAR_45, VAR_1, (caddr_t)&VAR_44) < 0)
  FUNC_4(VAR_11, "BIOCGBLEN ioctl failed");

 VAR_41->bufsize = VAR_44;
 VAR_41->buffer = (uint8_t *)FUNC_14(VAR_41->bufsize);
 if (VAR_41->buffer == ((void*)0))
  FUNC_5(VAR_13, "Out of memory.");

 FUNC_13(&VAR_38, VAR_43);

 if (FUNC_12(VAR_41->fd, VAR_4, (caddr_t)&VAR_38) < 0)
  FUNC_4(VAR_11, "BIOCSETF ioctl failed");

 FUNC_7(&VAR_38);


 VAR_37.tv_sec = 1;
 VAR_37.tv_usec = 0;
 if (FUNC_12(VAR_41->fd, VAR_6, (caddr_t)&VAR_37) < 0)
  FUNC_4(VAR_11, "BIOCSRTIMEOUT ioctl failed");

 (void)FUNC_19(VAR_18, VAR_27);

 FUNC_3(VAR_41);

 if (FUNC_12(VAR_45, VAR_2, (caddr_t)&VAR_39) < 0)
  FUNC_4(VAR_11, "BIOCGSTATS ioctl failed");


 FUNC_17("\n");
 FUNC_17("%d packets captured\n", VAR_30);
 FUNC_17("%d packets received by filter\n", VAR_39.bs_recv);
 FUNC_17("%d packets dropped by kernel\n", VAR_39.bs_drop);





 if (VAR_50 == 0 && FUNC_9(VAR_28) > 0) {
  (void)FUNC_21(VAR_42.ifr_name, VAR_28, sizeof(VAR_42.ifr_name));
  if (FUNC_12(VAR_49, VAR_20, &VAR_42) < 0)
   FUNC_24("SIOCIFDESTROY ioctl failed");
 }
 FUNC_2(VAR_49);

 if (VAR_41->fd > 0)
  FUNC_2(VAR_41->fd);
 if (VAR_41->rfd > 0)
  FUNC_2(VAR_41->rfd);
 if (VAR_41->wfd > 0)
  FUNC_2(VAR_41->wfd);
 if (VAR_41->bfd > 0)
  FUNC_2(VAR_41->bfd);

 return (VAR_12);
}
