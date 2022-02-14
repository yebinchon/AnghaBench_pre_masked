
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;


 unsigned int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct strbuf*,struct strbuf*,size_t) ;
 int VAR_3 ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,size_t,int ,char const*,size_t) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*,size_t) ;

void FUNC_9(struct strbuf *VAR_4, size_t VAR_5, unsigned VAR_6)
{
 unsigned VAR_7 = VAR_6 & VAR_0;
 struct strbuf VAR_8 = VAR_1;
 int VAR_9;

 FUNC_3(&VAR_8, VAR_3);
 FUNC_3(&VAR_8, FUNC_0(VAR_2));
 FUNC_2(&VAR_8, '\n');

 if (!VAR_5)
  FUNC_4(VAR_4);





 if (VAR_4->len - VAR_5 == VAR_8.len &&
     !FUNC_8(VAR_4->buf, VAR_8.buf, VAR_8.len))
  VAR_9 = 3;
 else
  VAR_9 = FUNC_1(VAR_4, &VAR_8, VAR_5);

 if (!VAR_9) {
  const char *VAR_10 = ((void*)0);
  size_t VAR_11 = VAR_4->len - VAR_5;

  if (!VAR_11) {




   VAR_10 = "\n\n";
  } else if (VAR_11 == 1) {




   VAR_10 = "\n";
  } else if (VAR_4->buf[VAR_11 - 2] != '\n') {





   VAR_10 = "\n";
  }

  if (VAR_10)
   FUNC_6(VAR_4, VAR_4->len - VAR_5, 0,
    VAR_10, FUNC_7(VAR_10));
 }

 if (VAR_9 != 3 && (!VAR_7 || VAR_9 != 2))
  FUNC_6(VAR_4, VAR_4->len - VAR_5, 0,
    VAR_8.buf, VAR_8.len);

 FUNC_5(&VAR_8);
}
