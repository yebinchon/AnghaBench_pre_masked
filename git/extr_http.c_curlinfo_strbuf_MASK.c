
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int CURLcode ;
typedef int CURLINFO ;
typedef int CURL ;


 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (struct strbuf*,char*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static CURLcode FUNC_3(CURL *VAR_0, CURLINFO VAR_1, struct strbuf *VAR_2)
{
 char *VAR_3;
 CURLcode VAR_4;

 FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (!VAR_4 && VAR_3)
  FUNC_1(VAR_2, VAR_3);
 return VAR_4;
}
