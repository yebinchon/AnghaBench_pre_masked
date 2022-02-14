
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct credential {scalar_t__* path; scalar_t__ host; scalar_t__* username; scalar_t__* protocol; } ;


 int FUNC_0 (struct strbuf*,char*,scalar_t__*) ;
 int FUNC_1 (struct strbuf*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct credential *VAR_0, struct strbuf *VAR_1)
{
 if (!VAR_0->protocol)
  return;
 FUNC_0(VAR_1, "%s://", VAR_0->protocol);
 if (VAR_0->username && *VAR_0->username)
  FUNC_0(VAR_1, "%s@", VAR_0->username);
 if (VAR_0->host)
  FUNC_1(VAR_1, VAR_0->host);
 if (VAR_0->path)
  FUNC_0(VAR_1, "/%s", VAR_0->path);
}
