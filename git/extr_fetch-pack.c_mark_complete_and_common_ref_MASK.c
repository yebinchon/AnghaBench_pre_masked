
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct ref {int old_oid; struct ref* next; } ;
struct object {scalar_t__ type; int flags; } ;
struct fetch_pack_args {int deepen; } ;
struct fetch_negotiator {int (* known_common ) (struct fetch_negotiator*,struct commit*) ;} ;
struct commit {scalar_t__ date; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct object* FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct fetch_pack_args*,scalar_t__) ;
 struct object* FUNC_7 (int ,int *) ;
 int VAR_6 ;
 int FUNC_8 (struct fetch_negotiator*,struct commit*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_9(struct fetch_negotiator *VAR_8,
      struct fetch_pack_args *VAR_9,
      struct ref **VAR_10)
{
 struct ref *VAR_11;
 int VAR_12 = VAR_6;
 timestamp_t VAR_13 = 0;

 VAR_6 = 0;

 for (VAR_11 = *VAR_10; VAR_11; VAR_11 = VAR_11->next) {
  struct object *VAR_14;

  if (!FUNC_4(&VAR_11->old_oid,
      VAR_1))
   continue;
  VAR_14 = FUNC_7(VAR_7, &VAR_11->old_oid);
  if (!VAR_14)
   continue;





  if (VAR_14->type == VAR_2) {
   struct commit *VAR_15 = (struct commit *)VAR_14;
   if (!VAR_13 || VAR_13 < VAR_15->date)
    VAR_13 = VAR_15->date;
  }
 }

 if (!VAR_9->deepen) {
  FUNC_3(VAR_5, ((void*)0));
  FUNC_2(((void*)0), VAR_4);
  FUNC_0(&VAR_3);
  if (VAR_13)
   FUNC_6(VAR_9, VAR_13);
 }





 for (VAR_11 = *VAR_10; VAR_11; VAR_11 = VAR_11->next) {
  struct object *VAR_16 = FUNC_1(VAR_7,
          FUNC_5(VAR_7,
          &VAR_11->old_oid),
          ((void*)0), 0);

  if (!VAR_16 || VAR_16->type != VAR_2 || !(VAR_16->flags & VAR_0))
   continue;

  VAR_8->known_common(VAR_8,
      (struct commit *)VAR_16);
 }

 VAR_6 = VAR_12;
}
