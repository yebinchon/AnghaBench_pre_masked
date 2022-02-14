
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int plist_t ;
typedef TYPE_1__* dl_t ;
typedef int dl_status ;
struct TYPE_4__ {int (* send_packet ) (TYPE_1__*,char*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char**,int*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (TYPE_1__*,char*,size_t) ;

dl_status FUNC_12(dl_t VAR_2) {


  plist_t VAR_3 = FUNC_7();
  FUNC_5(VAR_3, "ClientVersionString", FUNC_8(
        "device_listener"));
  if (FUNC_4(VAR_3) != 1) {
    FUNC_3("Detected an old copy of libplist?!  For a fix, see:\n"
        "https://github.com/libimobiledevice/libimobiledevice/issues/"
        "68#issuecomment-38994545");
    return VAR_0;
  }
  FUNC_5(VAR_3, "MessageType", FUNC_8("Listen"));
  FUNC_5(VAR_3, "ProgName", FUNC_8("libusbmuxd"));
  char *VAR_4 = ((void*)0);
  uint32_t VAR_5 = 0;
  FUNC_9(VAR_3, &VAR_4, &VAR_5);
  FUNC_6(VAR_3);

  size_t VAR_6 = 16 + VAR_5;
  char *VAR_7 = (char *)FUNC_0(VAR_6, sizeof(char));
  if (!VAR_7) {
    return VAR_0;
  }
  char *VAR_8 = VAR_7;
  VAR_8 = FUNC_1(VAR_8, VAR_6);
  VAR_8 = FUNC_1(VAR_8, 1);
  VAR_8 = FUNC_1(VAR_8, VAR_1);
  VAR_8 = FUNC_1(VAR_8, 1);
  FUNC_10(VAR_8, VAR_4, VAR_5);
  FUNC_2(VAR_4);

  dl_status VAR_9 = VAR_2->send_packet(VAR_2, VAR_7, VAR_6);
  FUNC_2(VAR_7);
  return VAR_9;
}
