
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,char*,unsigned int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,struct strbuf*) ;
 scalar_t__ FUNC_6 (struct strbuf*,char*,int *) ;

__attribute__((used)) static void FUNC_7(const char *VAR_3, int VAR_4, unsigned VAR_5,
        int VAR_6)
{
 struct strbuf VAR_7 = VAR_1;
 struct strbuf VAR_8 = VAR_1;

 while (FUNC_2(&VAR_7, VAR_2) != VAR_0) {
  if (VAR_7.buf[0] == '"') {
   FUNC_4(&VAR_8);
   if (FUNC_6(&VAR_8, VAR_7.buf, ((void*)0)))
    FUNC_0("line is badly quoted");
   FUNC_5(&VAR_7, &VAR_8);
  }
  FUNC_1(VAR_7.buf, VAR_3, VAR_4 ? ((void*)0) : VAR_7.buf, VAR_5,
       VAR_6);
 }
 FUNC_3(&VAR_7);
 FUNC_3(&VAR_8);
}
