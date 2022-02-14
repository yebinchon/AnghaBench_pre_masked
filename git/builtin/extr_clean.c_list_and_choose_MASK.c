
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct menu_stuff {int nr; } ;
struct menu_opts {int flags; scalar_t__ prompt; scalar_t__ header; } ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct strbuf VAR_7 ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct menu_stuff*,int,struct strbuf,int**) ;
 int FUNC_5 (struct menu_stuff*,int**) ;
 int FUNC_6 (char*,char*,char*,char*,char*) ;
 int FUNC_7 (char*,char*,char*,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int VAR_8 ;
 int FUNC_10 (struct strbuf*,int ) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (int ,char*) ;
 int* FUNC_14 (int ,int) ;
 int* FUNC_15 (int) ;

__attribute__((used)) static int *FUNC_16(struct menu_opts *VAR_9, struct menu_stuff *VAR_10)
{
 struct strbuf VAR_11 = VAR_7;
 int *VAR_12, *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;

 FUNC_0(VAR_12, VAR_10->nr);

 for (VAR_16 = 0; VAR_16 < VAR_10->nr; VAR_16++)
  VAR_12[VAR_16] = -1;

 for (;;) {
  if (VAR_9->header) {
   FUNC_7("%s%s%s",
      FUNC_2(VAR_0),
      FUNC_1(VAR_9->header),
      FUNC_2(VAR_2));
  }


  FUNC_5(VAR_10, &VAR_12);

  if (VAR_9->flags & VAR_5)
   break;

  if (VAR_9->prompt) {
   FUNC_6("%s%s%s%s",
          FUNC_2(VAR_1),
          FUNC_1(VAR_9->prompt),
          VAR_9->flags & VAR_6 ? "> " : ">> ",
          FUNC_2(VAR_2));
  }

  if (FUNC_10(&VAR_11, VAR_8) != VAR_3) {
   FUNC_12(&VAR_11);
  } else {
   VAR_15 = 1;
   break;
  }


  if (!FUNC_13(VAR_11.buf, "?")) {
   FUNC_8(VAR_9->flags & VAR_6);
   continue;
  }


  if (!(VAR_9->flags & VAR_6) && !VAR_11.len)
   break;

  VAR_14 = FUNC_4(VAR_10,
      VAR_9->flags & VAR_6,
      VAR_11,
      &VAR_12);

  if (VAR_9->flags & VAR_6) {
   if (VAR_14)
    break;
  } else if (VAR_9->flags & VAR_4) {
   break;
  }
 }

 if (VAR_15) {
  VAR_13 = FUNC_15(sizeof(int));
  *VAR_13 = VAR_3;
 } else {
  int VAR_17 = 0;





  if (!VAR_14) {
   for (VAR_16 = 0; VAR_16 < VAR_10->nr; VAR_16++)
    VAR_14 += VAR_12[VAR_16];
  }

  VAR_13 = FUNC_14(FUNC_9(VAR_14, 1), sizeof(int));
  for (VAR_16 = 0; VAR_16 < VAR_10->nr && VAR_17 < VAR_14; VAR_16++) {
   if (VAR_12[VAR_16])
    VAR_13[VAR_17++] = VAR_16;
  }
  VAR_13[VAR_17] = VAR_3;
 }

 FUNC_3(VAR_12);
 FUNC_11(&VAR_11);
 return VAR_13;
}
