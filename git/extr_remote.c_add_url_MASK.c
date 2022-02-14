
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {char const** url; scalar_t__ url_nr; int url_alloc; } ;


 int FUNC_0 (char const**,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct remote *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->url, VAR_0->url_nr + 1, VAR_0->url_alloc);
 VAR_0->url[VAR_0->url_nr++] = VAR_1;
}
