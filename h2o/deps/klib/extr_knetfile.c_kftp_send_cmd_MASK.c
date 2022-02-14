
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctrl_fd; } ;
typedef TYPE_1__ knetFile ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char const*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(knetFile *VAR_0, const char *VAR_1, int VAR_2)
{
 if (FUNC_2(VAR_0->ctrl_fd, 0) <= 0) return -1;
 FUNC_1(VAR_0->ctrl_fd, VAR_1, FUNC_3(VAR_1));
 return VAR_2? FUNC_0(VAR_0) : 0;
}
