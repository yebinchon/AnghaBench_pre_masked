
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ git_off_t ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_5__ {scalar_t__ offset; TYPE_1__ window_map; } ;
typedef TYPE_2__ git_mwindow ;



int FUNC_0(git_mwindow *VAR_0, git_off_t VAR_1)
{
 git_off_t VAR_2 = VAR_0->offset;
 return VAR_2 <= VAR_1
  && VAR_1 <= (git_off_t)(VAR_2 + VAR_0->window_map.len);
}
