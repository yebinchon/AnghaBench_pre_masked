
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uf ;
struct usbcap_filehdr {scalar_t__ major; int minor; int magic; } ;
struct usbcap {scalar_t__ rfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,struct usbcap_filehdr*,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(struct usbcap *VAR_6)
{
 struct usbcap_filehdr VAR_7;
 int VAR_8;

 VAR_6->rfd = FUNC_3(VAR_4, VAR_2);
 if (VAR_6->rfd < 0) {
  FUNC_0(VAR_0, "Could not open "
      "'%s' for read", VAR_4);
 }
 VAR_8 = FUNC_4(VAR_6->rfd, &VAR_7, sizeof(VAR_7));
 if (VAR_8 != sizeof(VAR_7)) {
  FUNC_0(VAR_0, "Could not read USB capture "
      "file header");
 }
 if (FUNC_2(VAR_7.magic) != VAR_3) {
  FUNC_1(VAR_1, "Invalid magic field(0x%08x) "
      "in USB capture file header.",
      (unsigned int)FUNC_2(VAR_7.magic));
 }
 if (VAR_7.major != 0) {
  FUNC_1(VAR_1, "Invalid major version(%d) "
      "field in USB capture file header.", (int)VAR_7.major);
 }

 VAR_5 = VAR_7.minor;

 if (VAR_7.minor != 3 && VAR_7.minor != 2) {
  FUNC_1(VAR_1, "Invalid minor version(%d) "
      "field in USB capture file header.", (int)VAR_7.minor);
 }
}
