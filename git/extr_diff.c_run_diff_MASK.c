
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_3__ {int allow_external; } ;
struct diff_options {TYPE_2__* repo; TYPE_1__ flags; scalar_t__ prefix_length; } ;
struct diff_filespec {char* path; int mode; } ;
struct diff_filepair {struct diff_filespec* two; struct diff_filespec* one; } ;
struct TYPE_4__ {int index; } ;


 scalar_t__ FUNC_0 (struct diff_filespec*) ;
 scalar_t__ FUNC_1 (struct diff_filepair*) ;
 int VAR_0 ;
 struct diff_filespec* FUNC_2 (char*) ;
 int FUNC_3 (struct diff_filespec*,int ) ;
 char* FUNC_4 () ;
 int FUNC_5 (struct diff_filespec*) ;
 int FUNC_6 (char const*,char const*,char const*,char const*,struct diff_filespec*,struct diff_filespec*,struct strbuf*,struct diff_options*,struct diff_filepair*) ;
 int FUNC_7 (struct strbuf*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (scalar_t__,char const**,char const**) ;

__attribute__((used)) static void FUNC_10(struct diff_filepair *VAR_1, struct diff_options *VAR_2)
{
 const char *VAR_3 = FUNC_4();
 struct strbuf VAR_4;
 struct diff_filespec *VAR_5 = VAR_1->one;
 struct diff_filespec *VAR_6 = VAR_1->two;
 const char *VAR_7;
 const char *VAR_8;
 const char *VAR_9;

 VAR_7 = VAR_5->path;
 VAR_8 = (FUNC_8(VAR_7, VAR_6->path) ? VAR_6->path : ((void*)0));
 VAR_9 = VAR_7;
 if (VAR_2->prefix_length)
  FUNC_9(VAR_2->prefix_length, &VAR_7, &VAR_8);

 if (!VAR_2->flags.allow_external)
  VAR_3 = ((void*)0);

 if (FUNC_1(VAR_1)) {
  FUNC_6(VAR_3, VAR_7, ((void*)0), VAR_9,
        ((void*)0), ((void*)0), ((void*)0), VAR_2, VAR_1);
  return;
 }

 FUNC_3(VAR_5, VAR_2->repo->index);
 FUNC_3(VAR_6, VAR_2->repo->index);

 if (!VAR_3 &&
     FUNC_0(VAR_5) && FUNC_0(VAR_6) &&
     (VAR_0 & VAR_5->mode) != (VAR_0 & VAR_6->mode)) {




  struct diff_filespec *VAR_10 = FUNC_2(VAR_6->path);
  FUNC_6(((void*)0), VAR_7, VAR_8, VAR_9,
        VAR_5, VAR_10, &VAR_4,
        VAR_2, VAR_1);
  FUNC_5(VAR_10);
  FUNC_7(&VAR_4);

  VAR_10 = FUNC_2(VAR_5->path);
  FUNC_6(((void*)0), VAR_7, VAR_8, VAR_9,
        VAR_10, VAR_6, &VAR_4, VAR_2, VAR_1);
  FUNC_5(VAR_10);
 }
 else
  FUNC_6(VAR_3, VAR_7, VAR_8, VAR_9,
        VAR_5, VAR_6, &VAR_4, VAR_2, VAR_1);

 FUNC_7(&VAR_4);
}
