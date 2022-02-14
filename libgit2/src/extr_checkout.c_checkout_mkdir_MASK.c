
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ chmod_calls; scalar_t__ stat_calls; scalar_t__ mkdir_calls; } ;
struct git_futils_mkdir_options {TYPE_2__ perfdata; int * pool; int dir_map; int member_0; } ;
typedef int mode_t ;
struct TYPE_5__ {int chmod_calls; int stat_calls; int mkdir_calls; } ;
struct TYPE_7__ {TYPE_1__ perfdata; int pool; int mkdir_map; } ;
typedef TYPE_3__ checkout_data ;


 int FUNC_0 (char const*,char const*,int ,unsigned int,struct git_futils_mkdir_options*) ;

__attribute__((used)) static int FUNC_1(
 checkout_data *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 mode_t VAR_3,
 unsigned int VAR_4)
{
 struct git_futils_mkdir_options VAR_5 = {0};
 int VAR_6;

 VAR_5.dir_map = VAR_0->mkdir_map;
 VAR_5.pool = &VAR_0->pool;

 VAR_6 = FUNC_0(
  VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5);

 VAR_0->perfdata.mkdir_calls += VAR_5.perfdata.mkdir_calls;
 VAR_0->perfdata.stat_calls += VAR_5.perfdata.stat_calls;
 VAR_0->perfdata.chmod_calls += VAR_5.perfdata.chmod_calls;

 return VAR_6;
}
