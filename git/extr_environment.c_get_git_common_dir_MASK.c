
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* commondir; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;

const char *FUNC_1(void)
{
 if (!VAR_0->commondir)
  FUNC_0("git environment hasn't been setup");
 return VAR_0->commondir;
}
