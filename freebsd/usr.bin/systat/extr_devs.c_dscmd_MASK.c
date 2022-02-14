
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct statinfo {TYPE_1__* dinfo; } ;
struct TYPE_4__ {int unit_number; int device_name; } ;
struct TYPE_3__ {TYPE_2__* devices; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int *,int *,int *,int ,TYPE_2__*,int,int *,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (char const*,int ,int,struct statinfo*) ;
 int FUNC_3 (char const*,int ,int,struct statinfo*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_18 ;
 int * VAR_19 ;
 int FUNC_7 (char*,int ) ;

int
FUNC_8(const char *VAR_20, const char *VAR_21, int VAR_22, struct statinfo *VAR_23)
{
 int VAR_24;

 if (FUNC_5(VAR_20, "display") || FUNC_5(VAR_20, "add"))
  return(FUNC_3(VAR_21, VAR_5, VAR_22, VAR_23));
 if (FUNC_5(VAR_20, "ignore") || FUNC_5(VAR_20, "delete"))
  return(FUNC_3(VAR_21, VAR_7, VAR_22, VAR_23));
 if (FUNC_5(VAR_20, "show") || FUNC_5(VAR_20, "only"))
  return(FUNC_3(VAR_21, VAR_6, VAR_22, VAR_23));
 if (FUNC_5(VAR_20, "type") || FUNC_5(VAR_20, "match"))
  return(FUNC_2(VAR_21, VAR_6, VAR_22, VAR_23));
 if (FUNC_5(VAR_20, "refresh")) {
  VAR_24 = FUNC_1(&VAR_8, &VAR_16,
      &VAR_17, &VAR_18, VAR_10,
      VAR_23->dinfo->devices, VAR_13,
      (VAR_11 ==VAR_2) ? VAR_12 : ((void*)0),
      (VAR_11 ==VAR_2) ? VAR_15 : 0,
      (VAR_11 == VAR_3) ?VAR_19 : ((void*)0),
      (VAR_11 == VAR_3) ?VAR_14 : 0,
      (VAR_11 == VAR_1) ? VAR_4 :
      VAR_5, VAR_22, 0);
  if (VAR_24 == -1) {
   FUNC_7("%s", VAR_9);
   return(0);
  } else if (VAR_24 == 1)
   return(2);
 }
 if (FUNC_5(VAR_20, "drives")) {
  int VAR_25;
  FUNC_4(VAR_0, 0);
  FUNC_0();
  for (VAR_25 = 0; VAR_25 < VAR_13; VAR_25++) {
   FUNC_6("%s%d ", VAR_23->dinfo->devices[VAR_25].device_name,
          VAR_23->dinfo->devices[VAR_25].unit_number);
  }
  return(1);
 }
 return(0);
}
