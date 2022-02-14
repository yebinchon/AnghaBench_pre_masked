
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct apply_state {scalar_t__ cached; TYPE_1__* repo; scalar_t__ check_index; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct apply_state *VAR_3,
      const char *VAR_4,
      int VAR_5)
{
 struct stat VAR_6;

 if (VAR_3->check_index &&
     FUNC_3(VAR_3->repo->index, VAR_4, FUNC_6(VAR_4)) >= 0 &&
     !VAR_5)
  return VAR_0;
 if (VAR_3->cached)
  return 0;

 if (!FUNC_5(VAR_4, &VAR_6)) {
  if (FUNC_0(VAR_6.st_mode) || VAR_5)
   return 0;







  if (FUNC_2(VAR_4, FUNC_6(VAR_4)))
   return 0;

  return VAR_1;
 } else if (!FUNC_4(VAR_2)) {
  return FUNC_1("%s", VAR_4);
 }
 return 0;
}
