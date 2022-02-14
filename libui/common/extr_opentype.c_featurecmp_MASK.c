
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feature {scalar_t__ a; scalar_t__ b; scalar_t__ c; scalar_t__ d; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct feature *VAR_2 = (const struct feature *) VAR_0;
 const struct feature *VAR_3 = (const struct feature *) VAR_1;

 if (VAR_2->a != VAR_3->a)
  return FUNC_0(VAR_2->a, VAR_3->a);
 if (VAR_2->b != VAR_3->b)
  return FUNC_0(VAR_2->b, VAR_3->b);
 if (VAR_2->c != VAR_3->c)
  return FUNC_0(VAR_2->c, VAR_3->c);
 return FUNC_0(VAR_2->d, VAR_3->d);
}
