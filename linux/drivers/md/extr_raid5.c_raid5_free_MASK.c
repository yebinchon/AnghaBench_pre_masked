
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int dummy; } ;
struct mddev {int * to_remove; } ;


 int FUNC_0 (struct r5conf*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct mddev *VAR_1, void *VAR_2)
{
 struct r5conf *VAR_3 = VAR_2;

 FUNC_0(VAR_3);
 VAR_1->to_remove = &VAR_0;
}
