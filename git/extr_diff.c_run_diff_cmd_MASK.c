
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct userdiff_driver {char* external; } ;
struct strbuf {char* buf; scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ allow_external; } ;
struct diff_options {int file; int use_color; TYPE_2__* repo; TYPE_1__ flags; } ;
struct diff_filespec {int dummy; } ;
struct diff_filepair {scalar_t__ status; scalar_t__ score; } ;
struct TYPE_4__ {int index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,char const*,struct diff_filespec*,struct diff_filespec*,char const*,int,struct diff_options*,int) ;
 int FUNC_1 (struct strbuf*,char const*,char const*,struct diff_filespec*,struct diff_filespec*,struct diff_options*,struct diff_filepair*,int*,int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char const*,char const*,char const*,struct diff_filespec*,struct diff_filespec*,char const*,struct diff_options*) ;
 struct userdiff_driver* FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1,
    const char *VAR_2,
    const char *VAR_3,
    const char *VAR_4,
    struct diff_filespec *VAR_5,
    struct diff_filespec *VAR_6,
    struct strbuf *VAR_7,
    struct diff_options *VAR_8,
    struct diff_filepair *VAR_9)
{
 const char *VAR_10 = ((void*)0);
 int VAR_11 = (VAR_9->status == VAR_0) && VAR_9->score;
 int VAR_12 = 0;


 if (VAR_8->flags.allow_external) {
  struct userdiff_driver *VAR_13;

  VAR_13 = FUNC_4(VAR_8->repo->index, VAR_4);
  if (VAR_13 && VAR_13->external)
   VAR_1 = VAR_13->external;
 }

 if (VAR_7) {




  FUNC_1(VAR_7, VAR_2, VAR_3, VAR_5, VAR_6, VAR_8, VAR_9,
         &VAR_12,
         FUNC_5(VAR_8->use_color) && !VAR_1);
  VAR_10 = VAR_7->len ? VAR_7->buf : ((void*)0);
 }

 if (VAR_1) {
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_10, VAR_8);
  return;
 }
 if (VAR_5 && VAR_6)
  FUNC_0(VAR_2, VAR_3 ? VAR_3 : VAR_2,
        VAR_5, VAR_6, VAR_10, VAR_12,
        VAR_8, VAR_11);
 else
  FUNC_2(VAR_8->file, "* Unmerged path %s\n", VAR_2);
}
