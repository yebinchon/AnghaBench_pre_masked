
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int u_path; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int ,char const*,int ) ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_4)
{

 if (VAR_2 >= VAR_1)
  FUNC_0(-1, "push_path: one path too many (%s)", VAR_4);

 FUNC_1(VAR_3[VAR_2].u_path, VAR_4, VAR_0);
 VAR_2++;
}
