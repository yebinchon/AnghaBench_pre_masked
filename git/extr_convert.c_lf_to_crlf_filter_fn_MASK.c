
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_filter {int dummy; } ;
struct lf_to_crlf_filter {int has_held; char held; } ;



__attribute__((used)) static int FUNC_0(struct stream_filter *VAR_0,
    const char *VAR_1, size_t *VAR_2,
    char *VAR_3, size_t *VAR_4)
{
 size_t VAR_5, VAR_6 = 0;
 struct lf_to_crlf_filter *VAR_7 = (struct lf_to_crlf_filter *)VAR_0;






 if (VAR_7->has_held && (VAR_7->held != '\r' || !VAR_1)) {
  VAR_3[VAR_6++] = VAR_7->held;
  VAR_7->has_held = 0;
 }


 if (!VAR_1) {
  *VAR_4 -= VAR_6;
  return 0;
 }

 VAR_5 = *VAR_2;
 if (VAR_5 || VAR_7->has_held) {
  size_t VAR_8;
  int VAR_9 = 0;

  if (VAR_7->has_held) {
   VAR_9 = 1;
   VAR_7->has_held = 0;
  }

  for (VAR_8 = 0; VAR_6 < *VAR_4 && VAR_8 < VAR_5; VAR_8++) {
   char VAR_10 = VAR_1[VAR_8];

   if (VAR_10 == '\n') {
    VAR_3[VAR_6++] = '\r';
   } else if (VAR_9) {





    VAR_3[VAR_6++] = '\r';
   }







   if (*VAR_4 <= VAR_6) {
    VAR_7->has_held = 1;
    VAR_7->held = VAR_10;
    continue;
   }

   if (VAR_10 == '\r') {
    VAR_9 = 1;
    continue;
   }

   VAR_9 = 0;
   VAR_3[VAR_6++] = VAR_10;
  }

  *VAR_4 -= VAR_6;
  *VAR_2 -= VAR_8;

  if (!VAR_7->has_held && VAR_9) {
   VAR_7->has_held = 1;
   VAR_7->held = '\r';
  }
 }
 return 0;
}
