
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ flags; scalar_t__ attr; int vlen; int * value; } ;
typedef TYPE_1__ sdp_attr_t ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int **,int *,int **) ;
 scalar_t__ FUNC_2 (int **,int *,int *) ;
 scalar_t__ FUNC_3 (int **,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (char*,int ,int ) ;
 int VAR_9 ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (int *,int *) ;
 int FUNC_11 (void*,int,int *,int,int *,int,TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(void)
{
 uint8_t VAR_12[512];
 sdp_attr_t VAR_13;
 uint32_t VAR_14;
 void *VAR_15;
 int VAR_16;
 uint8_t *VAR_17, *VAR_18;

 VAR_13.flags = VAR_1;
 VAR_13.attr = 0;
 VAR_13.vlen = sizeof(VAR_12);
 VAR_13.value = VAR_12;

 VAR_14 = FUNC_0(VAR_3,
          VAR_3);

 VAR_15 = FUNC_10(&VAR_8, &VAR_9);
 if (VAR_15 == ((void*)0) || (VAR_6 = FUNC_9(VAR_15)) != 0) {
  FUNC_6("%s: %m", VAR_11);
  FUNC_5(VAR_0);
 }

 FUNC_7("Searching for %s service at %s",
     VAR_11, FUNC_4(&VAR_9, ((void*)0)));

 VAR_16 = FUNC_11(VAR_15, 1, &VAR_10, 1, &VAR_14, 1, &VAR_13);
 if (VAR_16 != 0) {
  FUNC_6("%s: %s", VAR_11, FUNC_12(FUNC_9(VAR_15)));
  FUNC_5(VAR_0);
 }

 FUNC_8(VAR_15);

 if (VAR_13.flags != VAR_2
     || VAR_13.attr != VAR_3) {
  FUNC_6("%s service not found", VAR_11);
  FUNC_5(VAR_0);
 }
 if (FUNC_1(&VAR_13.value, VAR_13.value + VAR_13.vlen, &VAR_17)
     && FUNC_1(&VAR_17, VAR_13.value, &VAR_18)
     && FUNC_3(&VAR_18, VAR_17, VAR_5)
     && FUNC_2(&VAR_18, VAR_17, &VAR_7)
     && FUNC_1(&VAR_17, VAR_13.value, &VAR_18)
     && FUNC_3(&VAR_18, VAR_17, VAR_4)) {
  FUNC_7("Found PSM %d for service %s", VAR_7, VAR_11);
  return;
 }

 FUNC_6("%s query failed", VAR_11);
 FUNC_5(VAR_0);
}
