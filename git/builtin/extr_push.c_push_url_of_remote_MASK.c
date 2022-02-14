
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int pushurl_nr; char** pushurl; char** url; int url_nr; } ;



__attribute__((used)) static int FUNC_0(struct remote *VAR_0, const char ***VAR_1)
{
 if (VAR_0->pushurl_nr) {
  *VAR_1 = VAR_0->pushurl;
  return VAR_0->pushurl_nr;
 }
 *VAR_1 = VAR_0->url;
 return VAR_0->url_nr;
}
