
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct oid_array {int dummy; } ;
struct object_id {int dummy; } ;
struct disambiguate_state {int hex_pfx; int * fn; int ambiguous; } ;
typedef enum get_oid_result { ____Placeholder_get_oid_result } get_oid_result ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_7 ;
 struct oid_array VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct disambiguate_state*) ;
 int FUNC_6 (struct disambiguate_state*) ;
 int FUNC_7 (struct disambiguate_state*,struct object_id*) ;
 scalar_t__ FUNC_8 (struct repository*,char const*,int,struct disambiguate_state*) ;
 int FUNC_9 (struct oid_array*) ;
 scalar_t__ FUNC_10 (struct oid_array*,int ,struct disambiguate_state*) ;
 int FUNC_11 (struct repository*,int ,int ,struct oid_array*) ;
 int FUNC_12 (struct repository*) ;
 int VAR_17 ;
 int FUNC_13 (struct repository*,struct oid_array*) ;

__attribute__((used)) static enum get_oid_result FUNC_14(struct repository *VAR_18,
      const char *VAR_19, int VAR_20,
      struct object_id *VAR_21,
      unsigned VAR_22)
{
 int VAR_23;
 struct disambiguate_state VAR_24;
 int VAR_25 = !!(VAR_22 & VAR_4);

 if (FUNC_8(VAR_18, VAR_19, VAR_20, &VAR_24) < 0)
  return -1;

 if (FUNC_1(VAR_22 & VAR_3))
  FUNC_0("multiple get_short_oid disambiguator flags");

 if (VAR_22 & VAR_1)
  VAR_24.fn = VAR_13;
 else if (VAR_22 & VAR_2)
  VAR_24.fn = VAR_14;
 else if (VAR_22 & VAR_5)
  VAR_24.fn = VAR_15;
 else if (VAR_22 & VAR_6)
  VAR_24.fn = VAR_16;
 else if (VAR_22 & VAR_0)
  VAR_24.fn = VAR_12;
 else
  VAR_24.fn = VAR_11;

 FUNC_5(&VAR_24);
 FUNC_6(&VAR_24);
 VAR_23 = FUNC_7(&VAR_24, VAR_21);






 if (VAR_23 == VAR_7) {
  FUNC_12(VAR_18);
  FUNC_5(&VAR_24);
  FUNC_6(&VAR_24);
  VAR_23 = FUNC_7(&VAR_24, VAR_21);
 }

 if (!VAR_25 && (VAR_23 == VAR_9)) {
  struct oid_array VAR_26 = VAR_8;

  FUNC_4(FUNC_2("short SHA1 %s is ambiguous"), VAR_24.hex_pfx);







  if (!VAR_24.ambiguous)
   VAR_24.fn = ((void*)0);

  FUNC_3(FUNC_2("The candidates are:"));
  FUNC_11(VAR_18, VAR_24.hex_pfx, VAR_10, &VAR_26);
  FUNC_13(VAR_18, &VAR_26);

  if (FUNC_10(&VAR_26, VAR_17, &VAR_24))
   FUNC_0("show_ambiguous_object shouldn't return non-zero");
  FUNC_9(&VAR_26);
 }

 return VAR_23;
}
