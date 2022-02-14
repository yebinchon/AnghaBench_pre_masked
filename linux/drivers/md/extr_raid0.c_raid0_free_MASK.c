
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r0conf {struct r0conf* devlist; struct r0conf* strip_zone; } ;
struct mddev {int dummy; } ;


 int FUNC_0 (struct r0conf*) ;

__attribute__((used)) static void FUNC_1(struct mddev *VAR_0, void *VAR_1)
{
 struct r0conf *VAR_2 = VAR_1;

 FUNC_0(VAR_2->strip_zone);
 FUNC_0(VAR_2->devlist);
 FUNC_0(VAR_2);
}
