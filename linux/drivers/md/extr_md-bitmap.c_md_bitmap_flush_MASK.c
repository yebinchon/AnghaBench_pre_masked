
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int daemon_sleep; } ;
struct mddev {TYPE_1__ bitmap_info; struct bitmap* bitmap; } ;
struct bitmap {long daemon_lastrun; } ;


 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (struct bitmap*) ;

void FUNC_2(struct mddev *VAR_0)
{
 struct bitmap *VAR_1 = VAR_0->bitmap;
 long VAR_2;

 if (!VAR_1)
  return;




 VAR_2 = VAR_0->bitmap_info.daemon_sleep * 2;
 VAR_1->daemon_lastrun -= VAR_2;
 FUNC_0(VAR_0);
 VAR_1->daemon_lastrun -= VAR_2;
 FUNC_0(VAR_0);
 VAR_1->daemon_lastrun -= VAR_2;
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
