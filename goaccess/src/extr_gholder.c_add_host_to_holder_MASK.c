
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct in_addr {int s_addr; int* s6_addr; } ;
struct in6_addr {int s_addr; int* s6_addr; } ;
struct TYPE_7__ {int anonymize_ip; } ;
struct TYPE_6__ {int module; } ;
typedef int GRawDataType ;
typedef int GRawDataItem ;
typedef int GPanel ;
typedef TYPE_1__ GHolder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int const*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,struct in_addr*,char*,int) ;
 int FUNC_3 (int ,char const*,struct in_addr*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,int ,int ,char**,int*) ;
 int FUNC_6 (int ,TYPE_1__*,int const*,char*,int) ;

__attribute__((used)) static void
FUNC_7 (GRawDataItem VAR_5, GHolder * VAR_6, GRawDataType VAR_7,
                    const GPanel * VAR_8)
{
  char VAR_9[VAR_3];
  char VAR_10[VAR_2];
  char *VAR_11 = ((void*)0);
  int VAR_12 = 0;
  unsigned VAR_13;

  struct in6_addr VAR_14, VAR_15, VAR_16;
  struct in_addr VAR_17, VAR_18, VAR_19;

  const char *VAR_20 = "255.255.255.0";
  const char *VAR_21 = "ffff:ffff:ffff:ffff:0000:0000:0000:0000";

  if (FUNC_5 (VAR_6->module, VAR_5, VAR_7, &VAR_11, &VAR_12) == 1)
    return;

  if (!VAR_4.anonymize_ip) {
    FUNC_0 (VAR_5, VAR_6, VAR_7, VAR_8);
    FUNC_1 (VAR_11);
    return;
  }

  if (1 == FUNC_3 (VAR_0, VAR_11, &VAR_17)) {
    if (1 == FUNC_3 (VAR_0, VAR_20, &VAR_18)) {
      FUNC_4 (VAR_9, 0, sizeof *VAR_9);
      VAR_19 = VAR_17 & VAR_18;

      if (FUNC_2 (VAR_0, &VAR_19, VAR_9, VAR_3) != ((void*)0)) {
        FUNC_6 (VAR_5, VAR_6, VAR_8, VAR_9, VAR_12);
        FUNC_1 (VAR_11);
      }
    }
  } else if (1 == FUNC_3 (VAR_1, VAR_11, &VAR_14)) {
    if (1 == FUNC_3 (VAR_1, VAR_21, &VAR_15)) {
      FUNC_4 (VAR_10, 0, sizeof *VAR_10);
      for (VAR_13 = 0; VAR_13 < 16; VAR_13++) {
        VAR_16[VAR_13] = VAR_14[VAR_13] & VAR_15[VAR_13];
      }

      if (FUNC_2 (VAR_1, &VAR_16, VAR_10, VAR_2) != ((void*)0)) {
        FUNC_6 (VAR_5, VAR_6, VAR_8, VAR_10, VAR_12);
        FUNC_1 (VAR_11);
      }
    }
  }
}
