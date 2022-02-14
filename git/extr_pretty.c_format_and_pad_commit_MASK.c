
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct format_commit_context {int padding; scalar_t__ flush_type; int truncate; TYPE_1__* pretty_ctx; } ;
struct TYPE_2__ {scalar_t__ graph_width; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct strbuf*,char const*,struct format_commit_context*) ;
 int FUNC_2 (char const*,char const*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char,int) ;
 int FUNC_5 (struct strbuf*,int ,char const*,int) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,int) ;
 int FUNC_8 (struct strbuf*,int,int,char*) ;
 char* FUNC_9 (char*,char) ;




 int FUNC_10 (char const*,int,int) ;

__attribute__((used)) static size_t FUNC_11(struct strbuf *VAR_5,
        const char *VAR_6,
        struct format_commit_context *VAR_7)
{
 struct strbuf VAR_8 = VAR_0;
 int VAR_9 = 0, VAR_10, VAR_11 = VAR_7->padding;
 if (VAR_11 < 0) {
  const char *VAR_12 = FUNC_9(VAR_5->buf, '\n');
  int VAR_13;
  if (!VAR_12)
   VAR_12 = VAR_5->buf;
  VAR_13 = FUNC_10(VAR_12, -1, 1);
  VAR_13 += VAR_7->pretty_ctx->graph_width;
  VAR_11 = (-VAR_11) - VAR_13;
 }
 while (1) {
  int VAR_14 = *VAR_6 == 'C';
  int VAR_15 = FUNC_1(&VAR_8, VAR_6, VAR_7);
  VAR_9 += VAR_15;

  if (!VAR_14)
   break;

  VAR_6 += VAR_15;
  if (*VAR_6 != '%')
   break;
  VAR_6++;
  VAR_9++;
 }
 VAR_10 = FUNC_10(VAR_8.buf, -1, 1);

 if (VAR_7->flush_type == VAR_3) {
  const char *VAR_16 = VAR_5->buf + VAR_5->len - 1;
  while (VAR_10 > VAR_11 && VAR_16 > VAR_5->buf) {
   const char *VAR_17;
   if (*VAR_16 == ' ') {
    VAR_16--;
    VAR_11++;
    continue;
   }

   if (*VAR_16 != 'm')
    break;
   VAR_17 = VAR_16 - 1;
   while (VAR_16 - VAR_17 < 10 && *VAR_17 != '\033')
    VAR_17--;
   if (*VAR_17 != '\033' ||
       VAR_16 + 1 - VAR_17 != FUNC_0(VAR_17))
    break;




   FUNC_5(&VAR_8, 0, VAR_17, VAR_16 + 1 - VAR_17);
   VAR_16 = VAR_17 - 1;
  }
  FUNC_7(VAR_5, VAR_16 + 1 - VAR_5->buf);
  VAR_7->flush_type = VAR_2;
 }

 if (VAR_10 > VAR_11) {
  switch (VAR_7->truncate) {
  case 131:
   FUNC_8(&VAR_8,
         0, VAR_10 - (VAR_11 - 2),
         "..");
   break;
  case 130:
   FUNC_8(&VAR_8,
         VAR_11 / 2 - 1,
         VAR_10 - (VAR_11 - 2),
         "..");
   break;
  case 128:
   FUNC_8(&VAR_8,
         VAR_11 - 2, VAR_10 - (VAR_11 - 2),
         "..");
   break;
  case 129:
   break;
  }
  FUNC_3(VAR_5, &VAR_8);
 } else {
  int VAR_18 = VAR_5->len, VAR_19 = 0;
  if (VAR_7->flush_type == VAR_2)
   VAR_19 = VAR_11 - VAR_10;
  else if (VAR_7->flush_type == VAR_1)
   VAR_19 = (VAR_11 - VAR_10) / 2;




  VAR_11 = VAR_11 - VAR_10 + VAR_8.len;
  FUNC_4(VAR_5, ' ', VAR_11);
  FUNC_2(VAR_5->buf + VAR_18 + VAR_19, VAR_8.buf,
         VAR_8.len);
 }
 FUNC_6(&VAR_8);
 VAR_7->flush_type = VAR_4;
 return VAR_9;
}
