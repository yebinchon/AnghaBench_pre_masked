
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {scalar_t__ config; int gitdir; int commondir; } ;
struct config_set {int dummy; } ;
struct config_options {int respect_includes; int git_dir; int commondir; int member_0; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int *,struct config_options*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct repository *VAR_1)
{
 struct config_options VAR_2 = { 0 };

 VAR_2.respect_includes = 1;
 VAR_2.commondir = VAR_1->commondir;
 VAR_2.git_dir = VAR_1->gitdir;

 if (!VAR_1->config)
  VAR_1->config = FUNC_5(1, sizeof(struct config_set));
 else
  FUNC_3(VAR_1->config);

 FUNC_4(VAR_1->config);

 if (FUNC_1(VAR_0, VAR_1->config, ((void*)0), &VAR_2) < 0)
  FUNC_2(FUNC_0("unknown error occurred while reading the configuration files"));
}
