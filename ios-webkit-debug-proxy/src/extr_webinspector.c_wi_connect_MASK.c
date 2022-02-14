
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int tv ;
typedef void* time_t ;
struct timeval {int tv_sec; void* tv_usec; } ;
typedef int * plist_t ;
typedef TYPE_1__* lockdownd_service_descriptor_t ;
typedef int lockdownd_error_t ;
typedef int * lockdownd_client_t ;
typedef int * idevice_t ;
typedef char* idevice_connection_t ;
struct TYPE_3__ {int ssl_enabled; int port; } ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int ,char**) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,int*) ;
 scalar_t__ FUNC_8 (char*,int **) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int **,char const*) ;
 scalar_t__ FUNC_11 (int,int ,int*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int **,char*) ;
 int FUNC_14 (int *,int *,char*,int **) ;
 scalar_t__ FUNC_15 (int *,char*,TYPE_1__**) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,char**) ;
 scalar_t__ FUNC_19 (int,int ,int ,char*,int) ;
 int FUNC_20 (char*,char*,int*,int*,int*) ;
 int VAR_8 ;

int FUNC_21(const char *VAR_9, char **VAR_10,
    char **VAR_11, int *VAR_12,
    void **VAR_13, int VAR_14) {
  int VAR_15 = -1;

  idevice_t VAR_16 = ((void*)0);
  plist_t VAR_17 = ((void*)0);
  lockdownd_service_descriptor_t VAR_18 = ((void*)0);
  lockdownd_client_t VAR_19 = ((void*)0);
  idevice_connection_t VAR_20 = ((void*)0);
  int VAR_21 = -1;
  SSL *VAR_22 = ((void*)0);


  if (FUNC_10(&VAR_16, VAR_9)) {
    FUNC_3(VAR_8, "No device found, is it plugged in?\n");
    goto leave_cleanup;
  }


  lockdownd_error_t VAR_23;
  if (VAR_4 != (VAR_23 = FUNC_13(
        VAR_16, &VAR_19, "ios_webkit_debug_proxy"))) {
    FUNC_3(VAR_8, "Could not connect to lockdownd, error code %d. Exiting.\n", VAR_23);
    goto leave_cleanup;
  }


  if (VAR_10 &&
      !FUNC_14(VAR_19, ((void*)0), "UniqueDeviceID", &VAR_17)) {
    FUNC_18(VAR_17, VAR_10);
    FUNC_17(VAR_17);
    VAR_17 = ((void*)0);
  }
  if (VAR_11 &&
      !FUNC_14(VAR_19, ((void*)0), "DeviceName", &VAR_17)) {
    FUNC_18(VAR_17, VAR_11);
    FUNC_17(VAR_17);
    VAR_17 = ((void*)0);
  }
  if (VAR_12 &&
      !FUNC_14(VAR_19, ((void*)0), "ProductVersion", &VAR_17)) {
    int VAR_24[3] = {0, 0, 0};
    char *VAR_25 = ((void*)0);
    FUNC_18(VAR_17, &VAR_25);
    if (VAR_25 && FUNC_20(VAR_25, "%d.%d.%d",
          &VAR_24[0], &VAR_24[1], &VAR_24[2]) >= 2) {
      *VAR_12 = ((VAR_24[0] & 0xFF) << 16) |
                              ((VAR_24[1] & 0xFF) << 8) |
                               (VAR_24[2] & 0xFF);
    } else {
      *VAR_12 = 0;
    }
    FUNC_4(VAR_25);
    FUNC_17(VAR_17);
  }


  if (FUNC_15(VAR_19, "com.apple.webinspector", &VAR_18) ||
      !VAR_18->port) {
    FUNC_16("Could not start com.apple.webinspector!");
    goto leave_cleanup;
  }


  if (FUNC_5(VAR_16, VAR_18->port, &VAR_20)) {
    FUNC_16("idevice_connect failed!");
    goto leave_cleanup;
  }


  if (VAR_18->ssl_enabled == 1) {
    if (!VAR_13 || FUNC_6(VAR_20) ||
        FUNC_8(VAR_20, &VAR_22)) {
      FUNC_16("ssl connection failed!");
      goto leave_cleanup;
    }
    *VAR_13 = VAR_22;
  }

  if (VAR_19) {

    FUNC_12(VAR_19);
    VAR_19 = ((void*)0);
  }


  if (FUNC_7(VAR_20, &VAR_21)) {
    FUNC_16("Unable to get connection file descriptor.");
    goto leave_cleanup;
  }

  if (VAR_14 < 0) {






    int VAR_26 = FUNC_2(VAR_21, VAR_1);
    if (!VAR_26 || FUNC_2(VAR_21, VAR_2, (VAR_26 | VAR_5)) < 0) {
      FUNC_16("Could not set socket to non-blocking");
      goto leave_cleanup;
    }

  } else {
    long VAR_27 = (VAR_14 > 0 ? VAR_14 : 5000);
    struct timeval VAR_28;
    VAR_28.tv_sec = (time_t) (VAR_27 / 1000);
    VAR_28.tv_usec = (time_t) ((VAR_27 - (VAR_28.tv_sec * 1000)) * 1000);
    if (FUNC_19(VAR_21, VAR_6, VAR_7, (char *)&VAR_28,
          sizeof(VAR_28))) {
      FUNC_16("Could not set socket receive timeout");
      goto leave_cleanup;
    }
  }


  VAR_15 = VAR_21;

leave_cleanup:





  if (VAR_15 < 0 && VAR_21 > 0) {
    FUNC_0(VAR_21);
  }



  FUNC_4(VAR_20);
  FUNC_12(VAR_19);
  FUNC_9(VAR_16);
  return VAR_15;
}
