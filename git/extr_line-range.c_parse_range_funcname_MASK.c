
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char xdemitconf_t ;
struct userdiff_funcname {int cflags; scalar_t__ pattern; } ;
struct userdiff_driver {struct userdiff_funcname funcname; } ;
struct index_state {int dummy; } ;
typedef int regex_t ;
typedef char const* (* nth_line_fn_t ) (void*,long) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,...) ;
 char* FUNC_2 (char*,char*,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char const*,char const*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int,int *,char*,int) ;
 int FUNC_7 (int *) ;
 struct userdiff_driver* FUNC_8 (struct index_state*,char const*) ;
 char* FUNC_9 (int,int) ;
 int FUNC_10 (char*,scalar_t__,int ) ;
 char* FUNC_11 (char const*,int) ;

__attribute__((used)) static const char *FUNC_12(
 const char *VAR_1, nth_line_fn_t VAR_2,
 void *VAR_3, long VAR_4, long VAR_5, long *VAR_6, long *VAR_7,
 const char *VAR_8, struct index_state *VAR_9)
{
 char *VAR_10;
 const char *VAR_11;
 struct userdiff_driver *VAR_12;
 xdemitconf_t *VAR_13 = ((void*)0);
 const char *VAR_14;
 const char *VAR_15;
 int VAR_16;
 regex_t VAR_17;

 if (*VAR_1 == '^') {
  VAR_5 = 1;
  VAR_1++;
 }

 FUNC_0(*VAR_1 == ':');
 VAR_11 = VAR_1+1;
 while (*VAR_11 && *VAR_11 != ':') {
  if (*VAR_11 == '\\' && *(VAR_11+1))
   VAR_11++;
  VAR_11++;
 }
 if (VAR_11 == VAR_1+1)
  return ((void*)0);
 if (!VAR_6)
  return VAR_11;

 VAR_10 = FUNC_11(VAR_1+1, VAR_11-(VAR_1+1));

 VAR_5--;
 VAR_14 = VAR_2(VAR_3, VAR_5);

 VAR_12 = FUNC_8(VAR_9, VAR_8);
 if (VAR_12 && VAR_12->funcname.pattern) {
  const struct userdiff_funcname *VAR_18 = &VAR_12->funcname;
  VAR_13 = FUNC_9(1, sizeof(*VAR_13));
  FUNC_10(VAR_13, VAR_18->pattern, VAR_18->cflags);
 }

 VAR_16 = FUNC_5(&VAR_17, VAR_10, VAR_0);
 if (VAR_16) {
  char VAR_19[1024];
  FUNC_6(VAR_16, &VAR_17, VAR_19, 1024);
  FUNC_1("-L parameter '%s': %s", VAR_10, VAR_19);
 }

 VAR_15 = FUNC_2(VAR_13, (char*) VAR_14, &VAR_17);
 if (!VAR_15)
  FUNC_1("-L parameter '%s' starting at line %ld: no match",
      VAR_10, VAR_5 + 1);
 *VAR_6 = 0;
 while (VAR_15 > VAR_2(VAR_3, *VAR_6))
  (*VAR_6)++;

 if (*VAR_6 >= VAR_4)
  FUNC_1("-L parameter '%s' matches at EOF", VAR_10);

 *VAR_7 = *VAR_6+1;
 while (*VAR_7 < VAR_4) {
  const char *VAR_20 = VAR_2(VAR_3, *VAR_7);
  const char *VAR_21 = VAR_2(VAR_3, *VAR_7+1);
  if (FUNC_4(VAR_13, VAR_20, VAR_21))
   break;
  (*VAR_7)++;
 }

 FUNC_7(&VAR_17);
 FUNC_3(VAR_13);
 FUNC_3(VAR_10);


 (*VAR_6)++;

 return VAR_11;
}
