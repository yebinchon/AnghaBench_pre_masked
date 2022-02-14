
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Info {long* intrcnt; } ;


 int FUNC_0 (long*,long*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct Info *VAR_1, struct Info *VAR_2)
{
 long *VAR_3;






 VAR_3 = VAR_2->intrcnt;
 *VAR_2 = *VAR_1;

 FUNC_0(VAR_1->intrcnt, VAR_2->intrcnt = VAR_3, VAR_0 * sizeof (int));
}
