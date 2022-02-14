
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; struct rerere_id* util; } ;
struct string_list {int dummy; } ;
struct rerere_id {int variant; struct rerere_dir* collection; } ;
struct rerere_dir {int* status; int status_nr; } ;
struct index_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rerere_id*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int ,char const*) ;
 int FUNC_5 (struct string_list_item*) ;
 int FUNC_6 (struct index_state*,char const*,int *,char*) ;
 scalar_t__ FUNC_7 (struct index_state*,struct rerere_id*,char const*) ;
 int FUNC_8 (struct rerere_id*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_9 (struct rerere_id*,char*) ;
 int VAR_3 ;
 int FUNC_10 (struct string_list*,char const*) ;
 scalar_t__ FUNC_11 (char const*) ;

__attribute__((used)) static void FUNC_12(struct index_state *VAR_4,
          struct string_list_item *VAR_5,
          struct string_list *VAR_6)
{
 const char *VAR_7 = VAR_5->string;
 struct rerere_id *VAR_8 = VAR_5->util;
 struct rerere_dir *VAR_9 = VAR_8->collection;
 int VAR_10;

 VAR_10 = VAR_8->variant;


 if (VAR_10 >= 0) {
  if (!FUNC_6(VAR_4, VAR_7, ((void*)0), ((void*)0))) {
   FUNC_2(FUNC_9(VAR_8, "postimage"), VAR_7, 0666);
   VAR_8->collection->status[VAR_10] |= VAR_0;
   FUNC_4(VAR_3, FUNC_0("Recorded resolution for '%s'."), VAR_7);
   FUNC_5(VAR_5);
   VAR_5->util = ((void*)0);
   return;
  }





 }


 for (VAR_10 = 0; VAR_10 < VAR_9->status_nr; VAR_10++) {
  const int VAR_11 = VAR_1 | VAR_0;
  struct rerere_id VAR_12 = *VAR_8;

  if ((VAR_9->status[VAR_10] & VAR_11) != VAR_11)
   continue;

  VAR_12.variant = VAR_10;
  if (FUNC_7(VAR_4, &VAR_12, VAR_7))
   continue;





  if (0 <= VAR_8->variant && VAR_8->variant != VAR_10)
   FUNC_8(VAR_8);

  if (VAR_2)
   FUNC_10(VAR_6, VAR_7);
  else
   FUNC_4(VAR_3,
       FUNC_0("Resolved '%s' using previous resolution."),
       VAR_7);
  FUNC_5(VAR_5);
  VAR_5->util = ((void*)0);
  return;
 }


 FUNC_1(VAR_8);

 VAR_10 = VAR_8->variant;
 FUNC_6(VAR_4, VAR_7, ((void*)0), FUNC_9(VAR_8, "preimage"));
 if (VAR_8->collection->status[VAR_10] & VAR_0) {
  const char *VAR_13 = FUNC_9(VAR_8, "postimage");
  if (FUNC_11(VAR_13))
   FUNC_3(FUNC_0("cannot unlink stray '%s'"), VAR_13);
  VAR_8->collection->status[VAR_10] &= ~VAR_0;
 }
 VAR_8->collection->status[VAR_10] |= VAR_1;
 FUNC_4(VAR_3, FUNC_0("Recorded preimage for '%s'"), VAR_7);
}
