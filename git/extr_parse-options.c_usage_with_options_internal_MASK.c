
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int flags; } ;
struct option {scalar_t__ type; char* help; int flags; int short_name; char* long_name; scalar_t__ value; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 size_t VAR_11 ;
 char* FUNC_0 (char const* const) ;
 size_t FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (char,int *) ;
 int FUNC_4 (char*,int *) ;
 int * VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_5 (struct option const*,int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct parse_opt_ctx_t *VAR_14,
           const char * const *VAR_15,
           const struct option *VAR_16, int VAR_17, int VAR_18)
{
 FILE *VAR_19 = VAR_18 ? VAR_12 : VAR_13;
 int VAR_20;

 if (!VAR_15)
  return VAR_4;

 if (!VAR_18 && VAR_14 && VAR_14->flags & VAR_9)
  FUNC_1(VAR_19, "cat <<\\EOF\n");

 FUNC_2(VAR_19, FUNC_0("usage: %s"), FUNC_0(*VAR_15++));
 while (*VAR_15 && **VAR_15)




  FUNC_2(VAR_19, FUNC_0("   or: %s"), FUNC_0(*VAR_15++));
 while (*VAR_15) {
  if (**VAR_15)
   FUNC_2(VAR_19, FUNC_0("    %s"), FUNC_0(*VAR_15));
  else
   FUNC_3('\n', VAR_19);
  VAR_15++;
 }

 VAR_20 = 1;

 for (; VAR_16->type != VAR_1; VAR_16++) {
  size_t VAR_21;
  int VAR_22;

  if (VAR_16->type == VAR_2) {
   FUNC_3('\n', VAR_19);
   VAR_20 = 0;
   if (*VAR_16->help)
    FUNC_1(VAR_19, "%s\n", FUNC_0(VAR_16->help));
   continue;
  }
  if (!VAR_17 && (VAR_16->flags & VAR_5))
   continue;

  if (VAR_20) {
   FUNC_3('\n', VAR_19);
   VAR_20 = 0;
  }

  VAR_21 = FUNC_1(VAR_19, "    ");
  if (VAR_16->short_name) {
   if (VAR_16->flags & VAR_8)
    VAR_21 += FUNC_1(VAR_19, "%c", VAR_16->short_name);
   else
    VAR_21 += FUNC_1(VAR_19, "-%c", VAR_16->short_name);
  }
  if (VAR_16->long_name && VAR_16->short_name)
   VAR_21 += FUNC_1(VAR_19, ", ");
  if (VAR_16->long_name)
   VAR_21 += FUNC_1(VAR_19, "--%s", VAR_16->long_name);
  if (VAR_16->type == VAR_3)
   VAR_21 += FUNC_6(VAR_19, FUNC_0("-NUM"));

  if ((VAR_16->flags & VAR_6) ||
      !(VAR_16->flags & VAR_7))
   VAR_21 += FUNC_5(VAR_16, VAR_19);

  if (VAR_21 <= VAR_11)
   VAR_22 = VAR_11 - VAR_21;
  else {
   FUNC_3('\n', VAR_19);
   VAR_22 = VAR_11;
  }
  if (VAR_16->type == VAR_0) {
   FUNC_1(VAR_19, "%*s", VAR_22 + VAR_10, "");
   FUNC_2(VAR_19, FUNC_0("alias of --%s"),
       (const char *)VAR_16->value);
   continue;
  }
  FUNC_1(VAR_19, "%*s%s\n", VAR_22 + VAR_10, "", FUNC_0(VAR_16->help));
 }
 FUNC_3('\n', VAR_19);

 if (!VAR_18 && VAR_14 && VAR_14->flags & VAR_9)
  FUNC_4("EOF\n", VAR_19);

 return VAR_4;
}
