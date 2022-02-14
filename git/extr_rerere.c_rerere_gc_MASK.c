
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timestamp_t ;
struct string_list {int nr; TYPE_1__* items; } ;
struct rerere_id {size_t variant; struct rerere_dir* collection; } ;
struct rerere_dir {size_t status_nr; scalar_t__* status; } ;
struct repository {int dummy; } ;
struct dirent {int d_name; } ;
struct TYPE_2__ {int string; } ;
typedef int DIR ;


 struct string_list VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct rerere_dir* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,scalar_t__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (struct rerere_id*,scalar_t__,scalar_t__) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct repository*,struct string_list*,int ) ;
 int FUNC_14 (struct string_list*,int ) ;
 int FUNC_15 (struct string_list*,int ) ;
 scalar_t__ FUNC_16 (int *) ;
 int VAR_2 ;

void FUNC_17(struct repository *VAR_3, struct string_list *VAR_4)
{
 struct string_list VAR_5 = VAR_0;
 DIR *VAR_6;
 struct dirent *VAR_7;
 int VAR_8;
 timestamp_t VAR_9 = FUNC_16(((void*)0));
 timestamp_t VAR_10 = VAR_9 - 15 * 86400;
 timestamp_t VAR_11 = VAR_9 - 60 * 86400;

 if (FUNC_13(VAR_3, VAR_4, 0) < 0)
  return;

 FUNC_5("gc.rerereresolved", &VAR_11, VAR_9);
 FUNC_5("gc.rerereunresolved", &VAR_10, VAR_9);
 FUNC_4(VAR_1, ((void*)0));
 VAR_6 = FUNC_8(FUNC_6("rr-cache"));
 if (!VAR_6)
  FUNC_2(FUNC_0("unable to open rr-cache directory"));

 while ((VAR_7 = FUNC_10(VAR_6))) {
  struct rerere_dir *VAR_12;
  struct rerere_id VAR_13;
  int VAR_14;

  if (FUNC_7(VAR_7->d_name))
   continue;
  VAR_12 = FUNC_3(VAR_7->d_name);
  if (!VAR_12)
   continue;

  VAR_14 = 1;
  for (VAR_13.variant = 0, VAR_13.collection = VAR_12;
       VAR_13.variant < VAR_13.collection->status_nr;
       VAR_13.variant++) {
   FUNC_9(&VAR_13, VAR_11, VAR_10);
   if (VAR_13.collection->status[VAR_13.variant])
    VAR_14 = 0;
  }
  if (VAR_14)
   FUNC_14(&VAR_5, VAR_7->d_name);
 }
 FUNC_1(VAR_6);


 for (VAR_8 = 0; VAR_8 < VAR_5.nr; VAR_8++)
  FUNC_11(FUNC_6("rr-cache/%s", VAR_5.items[VAR_8].string));
 FUNC_15(&VAR_5, 0);
 FUNC_12(&VAR_2);
}
