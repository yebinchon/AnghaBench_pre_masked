
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {char const** pushurl; scalar_t__ pushurl_nr; int pushurl_alloc; } ;


 int FUNC_0 (char const**,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct remote *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->pushurl, VAR_0->pushurl_nr + 1, VAR_0->pushurl_alloc);
 VAR_0->pushurl[VAR_0->pushurl_nr++] = VAR_1;
}
