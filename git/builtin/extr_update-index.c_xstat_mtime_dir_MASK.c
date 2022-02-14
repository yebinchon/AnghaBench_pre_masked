
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_2__ {int buf; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_3(struct stat *VAR_1)
{
 if (FUNC_2(VAR_0.buf, VAR_1))
  FUNC_1(FUNC_0("failed to stat %s"), VAR_0.buf);
 return 0;
}
