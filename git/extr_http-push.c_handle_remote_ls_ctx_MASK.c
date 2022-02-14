
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xml_ctx {char* cdata; scalar_t__ name; scalar_t__ userData; } ;
struct remote_ls_ctx {int dentry_flags; int flags; scalar_t__ dentry_name; int (* userFunc ) (struct remote_ls_ctx*) ;int userData; int path; } ;
struct TYPE_2__ {char* url; char* path; int path_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (scalar_t__,int,int (*) (struct remote_ls_ctx*),int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (char*,char const*,int ) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (struct remote_ls_ctx*) ;
 int FUNC_9 (struct remote_ls_ctx*) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(struct xml_ctx *VAR_8, int VAR_9)
{
 struct remote_ls_ctx *VAR_10 = (struct remote_ls_ctx *)VAR_8->userData;

 if (VAR_9) {
  if (!FUNC_5(VAR_8->name, VAR_2) && VAR_10->dentry_name) {
   if (VAR_10->dentry_flags & VAR_3) {


    FUNC_3(VAR_10->dentry_name, &VAR_10->dentry_name);

    if (VAR_10->flags & VAR_4) {
     VAR_10->userFunc(VAR_10);
    }
    if (FUNC_5(VAR_10->dentry_name, VAR_10->path) &&
        VAR_10->flags & VAR_6) {
     FUNC_2(VAR_10->dentry_name,
        VAR_10->flags,
        VAR_10->userFunc,
        VAR_10->userData);
    }
   } else if (VAR_10->flags & VAR_5) {
    VAR_10->userFunc(VAR_10);
   }
  } else if (!FUNC_5(VAR_8->name, VAR_1) && VAR_8->cdata) {
   char *VAR_11 = VAR_8->cdata;
   if (*VAR_8->cdata == 'h') {
    VAR_11 = FUNC_7(VAR_11, "//");
    if (VAR_11) {
     VAR_11 = FUNC_4(VAR_11+2, '/');
    }
   }
   if (VAR_11) {
    const char *VAR_12 = VAR_7->url;
    if (VAR_7->path)
     VAR_12 = VAR_7->path;
    if (FUNC_6(VAR_11, VAR_12, VAR_7->path_len))
     FUNC_1("Parsed path '%s' does not match url: '%s'",
           VAR_11, VAR_12);
    else {
     VAR_11 += VAR_7->path_len;
     VAR_10->dentry_name = FUNC_10(VAR_11);
    }
   }
  } else if (!FUNC_5(VAR_8->name, VAR_0)) {
   VAR_10->dentry_flags |= VAR_3;
  }
 } else if (!FUNC_5(VAR_8->name, VAR_2)) {
  FUNC_0(VAR_10->dentry_name);
  VAR_10->dentry_flags = 0;
 }
}
