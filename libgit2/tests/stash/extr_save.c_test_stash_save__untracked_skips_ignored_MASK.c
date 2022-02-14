
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ,int *,int ) ;
 int FUNC_7 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_8(void)
{
 FUNC_1("stash/.gitignore", "bundle/vendor/\n");
 FUNC_4(FUNC_7("stash/bundle", 0777));
 FUNC_4(FUNC_7("stash/bundle/vendor", 0777));
 FUNC_2("stash/bundle/vendor/blah", "contents\n");

 FUNC_0(FUNC_5("stash/when"));
 FUNC_0(FUNC_5("stash/just.ignore"));
 FUNC_0(FUNC_5("stash/bundle/vendor/blah"));

 FUNC_3(FUNC_6(
  &VAR_3, VAR_1, VAR_2, ((void*)0), VAR_0));

 FUNC_0(!FUNC_5("stash/when"));
 FUNC_0(FUNC_5("stash/bundle/vendor/blah"));
 FUNC_0(FUNC_5("stash/just.ignore"));
}
