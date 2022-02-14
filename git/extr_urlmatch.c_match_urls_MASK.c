
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urlmatch_item {size_t pathmatch_len; char user_matched; int hostmatch_len; } ;
struct url_info {scalar_t__ scheme_len; scalar_t__ user_len; scalar_t__ port_len; int host_len; scalar_t__ path_off; scalar_t__ url_len; scalar_t__ url; scalar_t__ port_off; scalar_t__ user_off; } ;


 int FUNC_0 (struct url_info const*,struct url_info const*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 size_t FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const struct url_info *VAR_0,
        const struct url_info *VAR_1,
        struct urlmatch_item *VAR_2)
{
 char VAR_3 = 0;
 size_t VAR_4;

 if (!VAR_0 || !VAR_1 || !VAR_0->url || !VAR_1->url)
  return 0;


 if (VAR_1->scheme_len != VAR_0->scheme_len ||
     FUNC_1(VAR_0->url, VAR_1->url, VAR_0->scheme_len))
  return 0;


 if (VAR_1->user_off) {
  if (!VAR_0->user_off || VAR_0->user_len != VAR_1->user_len ||
      FUNC_1(VAR_0->url + VAR_0->user_off,
       VAR_1->url + VAR_1->user_off,
       VAR_0->user_len))
   return 0;
  VAR_3 = 1;
 }


 if (!FUNC_0(VAR_0, VAR_1))
  return 0;


 if (VAR_1->port_len != VAR_0->port_len ||
     FUNC_1(VAR_0->url + VAR_0->port_off,
      VAR_1->url + VAR_1->port_off, VAR_0->port_len))
  return 0;


 VAR_4 = FUNC_2(
  VAR_0->url + VAR_0->path_off,
  VAR_1->url + VAR_1->path_off,
  VAR_1->url_len - VAR_1->path_off);
 if (!VAR_4)
  return 0;

 if (VAR_2) {
  VAR_2->hostmatch_len = VAR_1->host_len;
  VAR_2->pathmatch_len = VAR_4;
  VAR_2->user_matched = VAR_3;
 }

 return 1;
}
