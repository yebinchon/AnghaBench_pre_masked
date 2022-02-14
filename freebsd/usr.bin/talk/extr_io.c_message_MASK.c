
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x_nlines; int x_win; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(const char *VAR_2)
{
 FUNC_0(VAR_1.x_win, VAR_0, 0);
 FUNC_1(VAR_1.x_win, "[%s]\n", VAR_2);
 if (VAR_0 < VAR_1.x_nlines - 1)
  VAR_0++;
 FUNC_2(VAR_1.x_win);
}
