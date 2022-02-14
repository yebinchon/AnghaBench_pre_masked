
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewrite {int dummy; } ;
struct remote {int configured_in_repo; char const* receivepack; char const* uploadpack; int fetch_tags; char const* foreign_vcs; int http_proxy_authmethod; int http_proxy; int fetch; int push; void* prune_tags; void* prune; void* skip_default_update; void* mirror; int origin; } ;
struct branch {char const* remote_name; char const* pushremote_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rewrite*,int ) ;
 int FUNC_2 (struct branch*,int ) ;
 int FUNC_3 (struct remote*,char const*) ;
 int FUNC_4 (struct remote*,char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const**,char const*,char const*) ;
 struct branch* FUNC_11 (char const*,int) ;
 struct remote* FUNC_12 (char const*,int) ;
 struct rewrite* FUNC_13 (int *,char const*,int) ;
 scalar_t__ FUNC_14 (char const*,char*,char const**,int*,char const**) ;
 char const* VAR_2 ;
 int FUNC_15 (int *,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (char const*,char*) ;
 int FUNC_17 (int ,char const*) ;
 int FUNC_18 (char const*) ;

__attribute__((used)) static int FUNC_19(const char *VAR_5, const char *VAR_6, void *VAR_7)
{
 const char *VAR_8;
 int VAR_9;
 const char *VAR_10;
 struct remote *VAR_11;
 struct branch *VAR_12;
 if (FUNC_14(VAR_5, "branch", &VAR_8, &VAR_9, &VAR_10) >= 0) {
  if (!VAR_8)
   return 0;
  VAR_12 = FUNC_11(VAR_8, VAR_9);
  if (!FUNC_16(VAR_10, "remote")) {
   return FUNC_10(&VAR_12->remote_name, VAR_5, VAR_6);
  } else if (!FUNC_16(VAR_10, "pushremote")) {
   return FUNC_10(&VAR_12->pushremote_name, VAR_5, VAR_6);
  } else if (!FUNC_16(VAR_10, "merge")) {
   if (!VAR_6)
    return FUNC_5(VAR_5);
   FUNC_2(VAR_12, FUNC_18(VAR_6));
  }
  return 0;
 }
 if (FUNC_14(VAR_5, "url", &VAR_8, &VAR_9, &VAR_10) >= 0) {
  struct rewrite *VAR_13;
  if (!VAR_8)
   return 0;
  if (!FUNC_16(VAR_10, "insteadof")) {
   if (!VAR_6)
    return FUNC_5(VAR_5);
   VAR_13 = FUNC_13(&VAR_3, VAR_8, VAR_9);
   FUNC_1(VAR_13, FUNC_18(VAR_6));
  } else if (!FUNC_16(VAR_10, "pushinsteadof")) {
   if (!VAR_6)
    return FUNC_5(VAR_5);
   VAR_13 = FUNC_13(&VAR_4, VAR_8, VAR_9);
   FUNC_1(VAR_13, FUNC_18(VAR_6));
  }
 }

 if (FUNC_14(VAR_5, "remote", &VAR_8, &VAR_9, &VAR_10) < 0)
  return 0;


 if (!VAR_8 && !FUNC_16(VAR_10, "pushdefault"))
  return FUNC_10(&VAR_2, VAR_5, VAR_6);

 if (!VAR_8)
  return 0;

 if (*VAR_8 == '/') {
  FUNC_17(FUNC_0("config remote shorthand cannot begin with '/': %s"),
   VAR_8);
  return 0;
 }
 VAR_11 = FUNC_12(VAR_8, VAR_9);
 VAR_11->origin = VAR_1;
 if (FUNC_6() == VAR_0)
  VAR_11->configured_in_repo = 1;
 if (!FUNC_16(VAR_10, "mirror"))
  VAR_11->mirror = FUNC_9(VAR_5, VAR_6);
 else if (!FUNC_16(VAR_10, "skipdefaultupdate"))
  VAR_11->skip_default_update = FUNC_9(VAR_5, VAR_6);
 else if (!FUNC_16(VAR_10, "skipfetchall"))
  VAR_11->skip_default_update = FUNC_9(VAR_5, VAR_6);
 else if (!FUNC_16(VAR_10, "prune"))
  VAR_11->prune = FUNC_9(VAR_5, VAR_6);
 else if (!FUNC_16(VAR_10, "prunetags"))
  VAR_11->prune_tags = FUNC_9(VAR_5, VAR_6);
 else if (!FUNC_16(VAR_10, "url")) {
  const char *VAR_14;
  if (FUNC_10(&VAR_14, VAR_5, VAR_6))
   return -1;
  FUNC_4(VAR_11, VAR_14);
 } else if (!FUNC_16(VAR_10, "pushurl")) {
  const char *VAR_15;
  if (FUNC_10(&VAR_15, VAR_5, VAR_6))
   return -1;
  FUNC_3(VAR_11, VAR_15);
 } else if (!FUNC_16(VAR_10, "push")) {
  const char *VAR_16;
  if (FUNC_10(&VAR_16, VAR_5, VAR_6))
   return -1;
  FUNC_15(&VAR_11->push, VAR_16);
  FUNC_8((char *)VAR_16);
 } else if (!FUNC_16(VAR_10, "fetch")) {
  const char *VAR_17;
  if (FUNC_10(&VAR_17, VAR_5, VAR_6))
   return -1;
  FUNC_15(&VAR_11->fetch, VAR_17);
  FUNC_8((char *)VAR_17);
 } else if (!FUNC_16(VAR_10, "receivepack")) {
  const char *VAR_18;
  if (FUNC_10(&VAR_18, VAR_5, VAR_6))
   return -1;
  if (!VAR_11->receivepack)
   VAR_11->receivepack = VAR_18;
  else
   FUNC_7(FUNC_0("more than one receivepack given, using the first"));
 } else if (!FUNC_16(VAR_10, "uploadpack")) {
  const char *VAR_19;
  if (FUNC_10(&VAR_19, VAR_5, VAR_6))
   return -1;
  if (!VAR_11->uploadpack)
   VAR_11->uploadpack = VAR_19;
  else
   FUNC_7(FUNC_0("more than one uploadpack given, using the first"));
 } else if (!FUNC_16(VAR_10, "tagopt")) {
  if (!FUNC_16(VAR_6, "--no-tags"))
   VAR_11->fetch_tags = -1;
  else if (!FUNC_16(VAR_6, "--tags"))
   VAR_11->fetch_tags = 2;
 } else if (!FUNC_16(VAR_10, "proxy")) {
  return FUNC_10((const char **)&VAR_11->http_proxy,
      VAR_5, VAR_6);
 } else if (!FUNC_16(VAR_10, "proxyauthmethod")) {
  return FUNC_10((const char **)&VAR_11->http_proxy_authmethod,
      VAR_5, VAR_6);
 } else if (!FUNC_16(VAR_10, "vcs")) {
  return FUNC_10(&VAR_11->foreign_vcs, VAR_5, VAR_6);
 }
 return 0;
}
