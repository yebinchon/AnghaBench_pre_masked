
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* attributes; int cleanup; int apply; int check; int shutdown; int * initialize; int version; } ;
struct crlf_filter {TYPE_1__ f; } ;
typedef int git_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct crlf_filter* FUNC_0 (int,int) ;
 int VAR_4 ;

git_filter *FUNC_1(void)
{
 struct crlf_filter *VAR_5 = FUNC_0(1, sizeof(struct crlf_filter));
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->f.version = VAR_0;
 VAR_5->f.attributes = "crlf eol text";
 VAR_5->f.initialize = ((void*)0);
 VAR_5->f.shutdown = VAR_4;
 VAR_5->f.check = VAR_2;
 VAR_5->f.apply = VAR_1;
 VAR_5->f.cleanup = VAR_3;

 return (git_filter *)VAR_5;
}
