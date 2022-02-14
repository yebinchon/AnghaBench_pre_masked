
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_8__ {int stat_calls; } ;
struct TYPE_7__ {int target_directory; } ;
struct TYPE_9__ {TYPE_2__ perfdata; TYPE_1__ opts; } ;
typedef TYPE_3__ checkout_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char const*,int ,unsigned int,unsigned int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char const*,int *,int ) ;
 scalar_t__ FUNC_4 (char const*,struct stat*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(
 checkout_data *VAR_8, const char *VAR_9, unsigned int VAR_10)
{
 struct stat VAR_11;
 bool VAR_12 = FUNC_5(VAR_8);
 unsigned int VAR_13 =
  (VAR_12 ? VAR_6 : VAR_5) |
  VAR_3;
 int VAR_14;

 if ((VAR_14 = FUNC_0(
   VAR_8, VAR_9, VAR_8->opts.target_directory, VAR_10, VAR_13)) < 0)
  return VAR_14;

 if (VAR_12) {
  VAR_8->perfdata.stat_calls++;

  if (FUNC_4(VAR_9, &VAR_11) == 0) {






   VAR_14 = FUNC_3(VAR_9, ((void*)0), VAR_4);
  } else if (VAR_7 != VAR_0) {
   FUNC_2(VAR_2, "failed to stat '%s'", VAR_9);
   return VAR_1;
  } else {
   FUNC_1();
  }
 }

 return VAR_14;
}
