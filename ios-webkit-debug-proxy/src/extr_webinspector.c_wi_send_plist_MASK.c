
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* wi_t ;
typedef scalar_t__ wi_status ;
typedef TYPE_2__* wi_private_t ;
typedef scalar_t__ uint32_t ;
typedef int * plist_t ;
struct TYPE_7__ {scalar_t__ partials_supported; } ;
struct TYPE_6__ {scalar_t__ (* send_packet ) (TYPE_1__*,char*,size_t) ;TYPE_2__* private_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,scalar_t__) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char**,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*,size_t) ;
 int FUNC_9 (TYPE_1__*,char*,char*,size_t) ;

wi_status FUNC_10(wi_t VAR_3, plist_t VAR_4) {
  wi_private_t VAR_5 = VAR_3->private_state;
  char *VAR_6 = ((void*)0);
  uint32_t VAR_7 = 0;
  FUNC_7(VAR_4, &VAR_6, &VAR_7);


  wi_status VAR_8 = VAR_1;
  uint32_t VAR_9;
  for (VAR_9 = 0; ; VAR_9 += VAR_0) {
    bool VAR_10 = 0;
    char *VAR_11 = ((void*)0);
    uint32_t VAR_12 = 0;
    if (!VAR_5->partials_supported) {
      VAR_11 = VAR_6;
      VAR_12 = VAR_7;
      VAR_6 = ((void*)0);
    } else {
      VAR_10 = (VAR_7 - VAR_9 > VAR_0);
      plist_t VAR_13 = FUNC_6();
      plist_t VAR_14 = FUNC_5(VAR_6 + VAR_9,
          (VAR_10 ? VAR_0 : VAR_7 - VAR_9));
      FUNC_3(VAR_13,
          (VAR_10 ? "WIRPartialMessageKey" : "WIRFinalMessageKey"), VAR_14);
      FUNC_7(VAR_13, &VAR_11, &VAR_12);
      FUNC_4(VAR_13);
      VAR_13 = ((void*)0);
      VAR_14 = ((void*)0);
      if (!VAR_11) {
        break;
      }
    }

    size_t VAR_15 = VAR_12 + 4;
    char *VAR_16 = (char*)FUNC_1(VAR_15 * sizeof(char));
    if (!VAR_16) {
      if (VAR_5->partials_supported) {
        FUNC_0(VAR_11);
      }
      break;
    }
    char *VAR_17 = VAR_16;


    *VAR_17++ = ((VAR_12 >> 24) & 0xFF);
    *VAR_17++ = ((VAR_12 >> 16) & 0xFF);
    *VAR_17++ = ((VAR_12 >> 8) & 0xFF);
    *VAR_17++ = (VAR_12 & 0xFF);


    FUNC_2(VAR_17, VAR_11, VAR_12);
    FUNC_0(VAR_11);

    FUNC_9(VAR_3, "wi.send_packet", VAR_16, VAR_15);
    wi_status VAR_18 = VAR_3->send_packet(VAR_3, VAR_16, VAR_15);
    FUNC_0(VAR_16);
    if (VAR_18) {
      break;
    }

    if (!VAR_10) {
      VAR_8 = VAR_2;
      break;
    }
  }
  FUNC_0(VAR_6);
  return VAR_8;
}
