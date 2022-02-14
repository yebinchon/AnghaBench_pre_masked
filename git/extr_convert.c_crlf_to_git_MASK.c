
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_stat {scalar_t__ lonelf; scalar_t__ crlf; } ;
struct strbuf {size_t len; char* buf; } ;
struct index_state {int dummy; } ;
typedef int new_stats ;
typedef enum crlf_action { ____Placeholder_crlf_action } crlf_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,int,struct text_stat*,struct text_stat*,int) ;
 scalar_t__ FUNC_1 (struct text_stat*) ;
 int FUNC_2 (char const*,size_t,struct text_stat*) ;
 scalar_t__ FUNC_3 (struct index_state const*,char const*) ;
 int FUNC_4 (struct text_stat*,struct text_stat*,int) ;
 size_t FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,size_t) ;
 int FUNC_7 (struct strbuf*,int) ;
 scalar_t__ FUNC_8 (struct text_stat*,int) ;

__attribute__((used)) static int FUNC_9(const struct index_state *VAR_7,
         const char *VAR_8, const char *VAR_9, size_t VAR_10,
         struct strbuf *VAR_11,
         enum crlf_action VAR_12, int VAR_13)
{
 struct text_stat VAR_14;
 char *VAR_15;
 int VAR_16;

 if (VAR_12 == VAR_6 ||
     (VAR_9 && !VAR_10))
  return 0;





 if (!VAR_11 && !VAR_9)
  return 1;

 FUNC_2(VAR_9, VAR_10, &VAR_14);

 VAR_16 = !!VAR_14.crlf;

 if (VAR_12 == VAR_3 || VAR_12 == VAR_5 || VAR_12 == VAR_4) {
  if (FUNC_1(&VAR_14))
   return 0;






  if ((!(VAR_13 & VAR_0)) &&
      FUNC_3(VAR_7, VAR_8))
   VAR_16 = 0;
 }
 if (((VAR_13 & VAR_2) ||
      ((VAR_13 & VAR_1) && VAR_10))) {
  struct text_stat VAR_17;
  FUNC_4(&VAR_17, &VAR_14, sizeof(VAR_17));

  if (VAR_16) {
   VAR_17.lonelf += VAR_17.crlf;
   VAR_17.crlf = 0;
  }

  if (FUNC_8(&VAR_17, VAR_12)) {
   VAR_17.crlf += VAR_17.lonelf;
   VAR_17.lonelf = 0;
  }
  FUNC_0(VAR_8, VAR_12, &VAR_14, &VAR_17, VAR_13);
 }
 if (!VAR_16)
  return 0;





 if (!VAR_11)
  return 1;


 if (FUNC_5(VAR_11) + VAR_11->len < VAR_10)
  FUNC_6(VAR_11, VAR_10 - VAR_11->len);
 VAR_15 = VAR_11->buf;
 if (VAR_12 == VAR_3 || VAR_12 == VAR_5 || VAR_12 == VAR_4) {





  do {
   unsigned char VAR_18 = *VAR_9++;
   if (VAR_18 != '\r')
    *VAR_15++ = VAR_18;
  } while (--VAR_10);
 } else {
  do {
   unsigned char VAR_19 = *VAR_9++;
   if (! (VAR_19 == '\r' && (1 < VAR_10 && *VAR_9 == '\n')))
    *VAR_15++ = VAR_19;
  } while (--VAR_10);
 }
 FUNC_7(VAR_11, VAR_15 - VAR_11->buf);
 return 1;
}
