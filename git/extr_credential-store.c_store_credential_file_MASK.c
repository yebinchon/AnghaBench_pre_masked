
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct credential {int path; int host; int password; int username; int protocol; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,struct credential*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (struct strbuf*,int ,int ) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3, struct credential *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 FUNC_2(&VAR_5, "%s://", VAR_4->protocol);
 FUNC_3(&VAR_5, VAR_4->username, VAR_2);
 FUNC_1(&VAR_5, ':');
 FUNC_3(&VAR_5, VAR_4->password, VAR_2);
 FUNC_1(&VAR_5, '@');
 if (VAR_4->host)
  FUNC_3(&VAR_5, VAR_4->host, VAR_2);
 if (VAR_4->path) {
  FUNC_1(&VAR_5, '/');
  FUNC_3(&VAR_5, VAR_4->path,
     VAR_1);
 }

 FUNC_0(VAR_3, VAR_4, &VAR_5);
 FUNC_4(&VAR_5);
}
