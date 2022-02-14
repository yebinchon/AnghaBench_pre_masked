
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct pagevec*) ;
 int FUNC_1 (struct pagevec*) ;
 int FUNC_2 (struct pagevec*,int ) ;

__attribute__((used)) static int FUNC_3(struct pagevec *VAR_0, gfp_t VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0);

 return VAR_2;
}
