
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwinfo_ops {scalar_t__ (* quality ) (char const*,int*) ;scalar_t__ (* quality_max ) (char const*,int*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int*) ;
 scalar_t__ FUNC_1 (char const*,int*) ;

int FUNC_2(const struct iwinfo_ops *VAR_1, const char *VAR_2)
{
 int VAR_3;

 if ( ! VAR_1 ) return -1;

 if (VAR_0 < 1)
  if (VAR_1->quality_max(VAR_2, &VAR_0))
   return -1;

 if (VAR_1->quality(VAR_2, &VAR_3))
  return -1;

 return ( VAR_3 * 100 ) / VAR_0 ;
}
