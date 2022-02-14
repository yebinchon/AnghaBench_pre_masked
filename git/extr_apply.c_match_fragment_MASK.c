
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {size_t len; char* buf; } ;
struct image {int nr; scalar_t__ len; char* buf; TYPE_1__* line; } ;
struct apply_state {scalar_t__ ws_error_action; scalar_t__ ws_ignore_action; } ;
struct TYPE_2__ {int flag; scalar_t__ hash; size_t len; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char) ;
 int FUNC_1 (struct image*,struct image*,struct image*,unsigned long,int,int) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 char* FUNC_3 (struct strbuf*,size_t*) ;
 int FUNC_4 (struct strbuf*,size_t) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct image*,struct image*,char*,size_t,size_t) ;
 int FUNC_7 (struct strbuf*,char*,size_t,unsigned int,int *) ;

__attribute__((used)) static int FUNC_8(struct apply_state *VAR_5,
     struct image *VAR_6,
     struct image *VAR_7,
     struct image *VAR_8,
     unsigned long VAR_9,
     int VAR_10,
     unsigned VAR_11,
     int VAR_12, int VAR_13)
{
 int VAR_14;
 char *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 struct strbuf VAR_19;
 size_t VAR_20, VAR_21;
 int VAR_22;

 if (VAR_7->nr + VAR_10 <= VAR_6->nr) {



  VAR_22 = VAR_7->nr;
  if (VAR_13 && (VAR_7->nr + VAR_10 != VAR_6->nr))
   return 0;
 } else if (VAR_5->ws_error_action == VAR_3 &&
     (VAR_11 & VAR_2)) {







  VAR_22 = VAR_6->nr - VAR_10;
 } else {





  return 0;
 }

 if (VAR_12 && VAR_10)
  return 0;


 for (VAR_14 = 0; VAR_14 < VAR_22; VAR_14++)
  if ((VAR_6->line[VAR_10 + VAR_14].flag & VAR_1) ||
      (VAR_7->line[VAR_14].hash != VAR_6->line[VAR_10 + VAR_14].hash))
   return 0;

 if (VAR_22 == VAR_7->nr) {







  if ((VAR_13
       ? (VAR_9 + VAR_7->len == VAR_6->len)
       : (VAR_9 + VAR_7->len <= VAR_6->len)) &&
      !FUNC_2(VAR_6->buf + VAR_9, VAR_7->buf, VAR_7->len))
   return 1;
 } else {







  char *VAR_23;

  VAR_16 = VAR_7->buf;
  VAR_23 = VAR_16;
  for (VAR_14 = 0; VAR_14 < VAR_22; VAR_14++)
   VAR_23 += VAR_7->line[VAR_14].len;

  for ( ; VAR_16 < VAR_23; VAR_16++)
   if (!FUNC_0(*VAR_16))
    break;
  if (VAR_16 == VAR_23)
   return 0;
 }






 if (VAR_5->ws_ignore_action == VAR_4)
  return FUNC_1(VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_22);

 if (VAR_5->ws_error_action != VAR_3)
  return 0;
 VAR_21 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_8->nr; VAR_14++) {
  if (!(VAR_8->line[VAR_14].flag & VAR_0))
   VAR_21 += VAR_8->line[VAR_14].len;
 }






 FUNC_4(&VAR_19, VAR_7->len + 1);
 VAR_17 = VAR_7->buf;
 VAR_18 = VAR_6->buf + VAR_9;
 for (VAR_14 = 0; VAR_14 < VAR_22; VAR_14++) {
  size_t VAR_24 = VAR_7->line[VAR_14].len;
  size_t VAR_25 = VAR_6->line[VAR_10 + VAR_14].len;
  size_t VAR_26 = VAR_19.len;
  struct strbuf VAR_27;
  int VAR_28;


  FUNC_7(&VAR_19, VAR_17, VAR_24, VAR_11, ((void*)0));


  FUNC_4(&VAR_27, VAR_25);
  FUNC_7(&VAR_27, VAR_18, VAR_25, VAR_11, ((void*)0));
  VAR_28 = (VAR_27.len == VAR_19.len - VAR_26 &&
    !FUNC_2(VAR_27.buf, VAR_19.buf + VAR_26,
          VAR_19.len - VAR_26));


  if (VAR_7->line[VAR_14].flag & VAR_0)
   VAR_21 += VAR_27.len;

  FUNC_5(&VAR_27);
  if (!VAR_28)
   goto unmatch_exit;

  VAR_17 += VAR_24;
  VAR_18 += VAR_25;
 }
 for ( ; VAR_14 < VAR_7->nr; VAR_14++) {
  size_t VAR_29 = VAR_19.len;
  size_t VAR_30 = VAR_7->line[VAR_14].len;
  int VAR_31;


  FUNC_7(&VAR_19, VAR_17, VAR_30, VAR_11, ((void*)0));

  for (VAR_31 = VAR_29; VAR_31 < VAR_19.len; VAR_31++)
   if (!FUNC_0(VAR_19.buf[VAR_31]))
    goto unmatch_exit;

  VAR_17 += VAR_30;
 }






 VAR_15 = FUNC_3(&VAR_19, &VAR_20);
 if (VAR_21 < VAR_8->len)
  VAR_21 = 0;
 FUNC_6(VAR_7, VAR_8,
          VAR_15, VAR_20, VAR_21);
 return 1;

 unmatch_exit:
 FUNC_5(&VAR_19);
 return 0;
}
