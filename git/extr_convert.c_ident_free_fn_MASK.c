
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_filter {int dummy; } ;
struct ident_filter {int left; } ;


 int FUNC_0 (struct stream_filter*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct stream_filter *VAR_0)
{
 struct ident_filter *VAR_1 = (struct ident_filter *)VAR_0;
 FUNC_1(&VAR_1->left);
 FUNC_0(VAR_0);
}
