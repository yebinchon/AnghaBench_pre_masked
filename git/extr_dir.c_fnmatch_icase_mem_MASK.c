
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, int VAR_4,
        const char *VAR_5, int VAR_6,
        int VAR_7)
{
 int VAR_8;
 struct strbuf VAR_9 = VAR_0;
 struct strbuf VAR_10 = VAR_0;
 const char *VAR_11 = VAR_3;
 const char *VAR_12 = VAR_5;

 if (VAR_3[VAR_4]) {
  FUNC_0(&VAR_9, VAR_3, VAR_4);
  VAR_11 = VAR_9.buf;
 }
 if (VAR_5[VAR_6]) {
  FUNC_0(&VAR_10, VAR_5, VAR_6);
  VAR_12 = VAR_10.buf;
 }

 if (VAR_2)
  VAR_7 |= VAR_1;
 VAR_8 = FUNC_2(VAR_11, VAR_12, VAR_7);

 FUNC_1(&VAR_9);
 FUNC_1(&VAR_10);

 return VAR_8;
}
