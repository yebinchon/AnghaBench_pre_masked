
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statinfo {TYPE_1__* dinfo; } ;
typedef int devstat_select_mode ;
struct TYPE_2__ {int devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char**,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *,int *,int ,int ,int ,char*,scalar_t__,int *,int ,int ,int,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char**,char*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_11, devstat_select_mode VAR_12, int VAR_13,
       struct statinfo *VAR_14)
{
 char **VAR_15, *VAR_16, *VAR_17;
 char *VAR_18[100];
 int VAR_19 = 0;
 int VAR_20;
 int VAR_21 = 0;

 if (!VAR_11) {
  FUNC_6("dsmatchselect: no arguments");
  return(1);
 }





 VAR_16 = VAR_17 = FUNC_4(VAR_11);
 for (VAR_15 = VAR_18, VAR_19 = 0;
      (*VAR_15 = FUNC_5(&VAR_17, "|")) != ((void*)0) && (VAR_19 < 100);
      VAR_19++)
  if (**VAR_15 != '\0')
   if (++VAR_15 >= &VAR_18[100])
    break;
 FUNC_3(VAR_16);

 if (VAR_19 > 99) {
  FUNC_6("dsmatchselect: too many match arguments");
  return(0);
 }





 if (VAR_7 > 0) {
  FUNC_3(VAR_5);
  VAR_5 = ((void*)0);
  VAR_7 = 0;
 }

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  if (FUNC_0(VAR_18[VAR_20], &VAR_5, &VAR_7) != 0) {
   FUNC_6("%s", VAR_2);
   return(0);
  }
 }
 if (VAR_19 > 0) {

  VAR_4 = VAR_0;

  VAR_21 = FUNC_1(&VAR_1, &VAR_8,
      &VAR_9, &VAR_10, VAR_3,
      VAR_14->dinfo->devices, VAR_6, VAR_5, VAR_7,
      ((void*)0), 0, VAR_12, VAR_13, 0);
  if (VAR_21 == -1)
   FUNC_2(1, "device selection error");
  else if (VAR_21 == 1)
   return(2);
 }
 return(1);
}
