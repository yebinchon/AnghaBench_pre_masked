
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int len; int * buf; } ;
typedef enum discovery_result { ____Placeholder_discovery_result } discovery_result ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct string_list VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct string_list*,int ,int ,int*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct string_list*) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,int*) ;
 int FUNC_9 (struct strbuf*,char) ;
 int FUNC_10 (struct strbuf*,char const*) ;
 int FUNC_11 (struct strbuf*,int) ;
 int FUNC_12 (struct string_list*,int ) ;
 int FUNC_13 (struct string_list*,char const*,int ,int) ;

__attribute__((used)) static enum discovery_result FUNC_14(struct strbuf *VAR_14,
         struct strbuf *VAR_15,
         int VAR_16)
{
 const char *VAR_17 = FUNC_2(VAR_0);
 struct string_list VAR_18 = VAR_12;
 const char *VAR_19;
 int VAR_20 = -1, VAR_21 = FUNC_7(VAR_14->buf);
 dev_t VAR_22 = 0;
 int VAR_23 = 1;






 VAR_19 = FUNC_2(VAR_4);
 if (VAR_19) {
  FUNC_10(VAR_15, VAR_19);
  return VAR_5;
 }

 if (VAR_17) {
  int VAR_24 = 0;

  FUNC_13(&VAR_18, VAR_17, VAR_9, -1);
  FUNC_0(&VAR_18, 0,
       VAR_13, &VAR_24);
  VAR_20 = FUNC_6(VAR_14->buf, &VAR_18);
  FUNC_12(&VAR_18, 0);
 }

 if (VAR_20 < 0)
  VAR_20 = VAR_21 - 2;

 if (VAR_21 && VAR_21 == VAR_14->len &&
     !FUNC_4(VAR_14->buf[VAR_21 - 1])) {
  FUNC_9(VAR_14, '/');
  VAR_21++;
 }
 VAR_23 = !FUNC_3("GIT_DISCOVERY_ACROSS_FILESYSTEM", 0);
 if (VAR_23)
  VAR_22 = FUNC_1(VAR_14->buf, ((void*)0), 0);
 for (;;) {
  int VAR_25 = VAR_14->len, VAR_26 = 0;

  if (VAR_25 > VAR_21)
   FUNC_9(VAR_14, '/');
  FUNC_10(VAR_14, VAR_1);
  VAR_19 = FUNC_8(VAR_14->buf, VAR_16 ?
      ((void*)0) : &VAR_26);
  if (!VAR_19) {
   if (VAR_16 ||
       VAR_26 == VAR_10) {

    if (FUNC_5(VAR_14->buf))
     VAR_19 = VAR_1;
   } else if (VAR_26 != VAR_11)
    return VAR_8;
  }
  FUNC_11(VAR_14, VAR_25);
  if (VAR_19) {
   FUNC_10(VAR_15, VAR_19);
   return VAR_3;
  }

  if (FUNC_5(VAR_14->buf)) {
   FUNC_10(VAR_15, ".");
   return VAR_2;
  }

  if (VAR_25 <= VAR_21)
   return VAR_6;

  while (--VAR_25 > VAR_20 && !FUNC_4(VAR_14->buf[VAR_25]))
   ;
  if (VAR_25 <= VAR_20)
   return VAR_6;

  FUNC_11(VAR_14, VAR_25 > VAR_21 ? VAR_25 : VAR_21);
  if (VAR_23 &&
      VAR_22 != FUNC_1(VAR_14->buf, ((void*)0), VAR_25))
   return VAR_7;
 }
}
