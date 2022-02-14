
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_filter {int dummy; } ;
struct cascade_filter {int two; int one; } ;


 int FUNC_0 (struct stream_filter*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct stream_filter *VAR_0)
{
 struct cascade_filter *VAR_1 = (struct cascade_filter *)VAR_0;
 FUNC_1(VAR_1->one);
 FUNC_1(VAR_1->two);
 FUNC_0(VAR_0);
}
