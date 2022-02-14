
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (struct strbuf*,unsigned char*,size_t) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,char const*,long,long) ;
 int FUNC_4 (struct strbuf*,int,char const*,int) ;
 int FUNC_5 (struct strbuf**) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;
 struct strbuf** FUNC_9 (struct strbuf*,char,int ) ;
 int FUNC_10 (char const*) ;
 int VAR_1 ;
 int FUNC_11 (int *,struct strbuf*) ;

__attribute__((used)) static void FUNC_12(const char *VAR_2, unsigned char *VAR_3, size_t VAR_4, int VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 struct strbuf **VAR_7, **VAR_8;

 FUNC_3(&VAR_6, "%s, %10.10ld bytes (0x%8.8lx)\n",
  VAR_2, (long)VAR_4, (long)VAR_4);
 FUNC_11(&VAR_1, &VAR_6);
 FUNC_7(&VAR_6);
 FUNC_1(&VAR_6, VAR_3, VAR_4);
 VAR_7 = FUNC_9(&VAR_6, '\n', 0);

 for (VAR_8 = VAR_7; *VAR_8; VAR_8++) {
  if (VAR_5)
   FUNC_0(*VAR_8);
  FUNC_4((*VAR_8), 0, VAR_2, FUNC_10(VAR_2));
  FUNC_4((*VAR_8), FUNC_10(VAR_2), ": ", 2);
  FUNC_8((*VAR_8));
  FUNC_2((*VAR_8), '\n');
  FUNC_11(&VAR_1, (*VAR_8));
 }
 FUNC_5(VAR_7);
 FUNC_6(&VAR_6);
}
