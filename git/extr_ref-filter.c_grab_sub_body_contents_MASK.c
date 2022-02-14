
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ option; int trailer_opts; int nlines; } ;
struct TYPE_4__ {TYPE_1__ contents; } ;
struct used_atom {char* name; TYPE_2__ u; } ;
struct strbuf {int dummy; } ;
struct atom_value {void* s; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct strbuf VAR_7 ;
 int FUNC_0 (struct strbuf*,char const*,int,int ) ;
 void* FUNC_1 (char const*,unsigned long) ;
 int FUNC_2 (void*,char const**,unsigned long*,char const**,unsigned long*,unsigned long*,char const**,unsigned long*) ;
 int FUNC_3 (struct strbuf*,char const*,int *) ;
 int FUNC_4 (char const*,char*) ;
 void* FUNC_5 (struct strbuf*,int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 struct used_atom* VAR_8 ;
 int VAR_9 ;
 void* FUNC_7 (char const*,unsigned long) ;
 void* FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(struct atom_value *VAR_10, int VAR_11, void *VAR_12)
{
 int VAR_13;
 const char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 unsigned long VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  struct used_atom *VAR_21 = &VAR_8[VAR_13];
  const char *VAR_22 = VAR_21->name;
  struct atom_value *VAR_23 = &VAR_10[VAR_13];
  if (!!VAR_11 != (*VAR_22 == '*'))
   continue;
  if (VAR_11)
   VAR_22++;
  if (FUNC_6(VAR_22, "subject") &&
      FUNC_6(VAR_22, "body") &&
      !FUNC_4(VAR_22, "trailers") &&
      !FUNC_4(VAR_22, "contents"))
   continue;
  if (!VAR_14)
   FUNC_2(VAR_12,
        &VAR_14, &VAR_17,
        &VAR_15, &VAR_18, &VAR_19,
        &VAR_16, &VAR_20);

  if (VAR_21->u.contents.option == VAR_5)
   VAR_23->s = FUNC_1(VAR_14, VAR_17);
  else if (VAR_21->u.contents.option == VAR_2)
   VAR_23->s = FUNC_7(VAR_15, VAR_18);
  else if (VAR_21->u.contents.option == VAR_1)
   VAR_23->s = FUNC_7(VAR_15, VAR_19);
  else if (VAR_21->u.contents.option == VAR_4)
   VAR_23->s = FUNC_7(VAR_16, VAR_20);
  else if (VAR_21->u.contents.option == VAR_3) {
   struct strbuf VAR_24 = VAR_7;
   const char *VAR_25 = VAR_18 + VAR_15 - VAR_20;


   FUNC_0(&VAR_24, VAR_14, VAR_25 - VAR_14, VAR_21->u.contents.nlines);
   VAR_23->s = FUNC_5(&VAR_24, ((void*)0));
  } else if (VAR_21->u.contents.option == VAR_6) {
   struct strbuf VAR_26 = VAR_7;


   FUNC_3(&VAR_26, VAR_14, &VAR_21->u.contents.trailer_opts);

   VAR_23->s = FUNC_5(&VAR_26, ((void*)0));
  } else if (VAR_21->u.contents.option == VAR_0)
   VAR_23->s = FUNC_8(VAR_14);
 }
}
