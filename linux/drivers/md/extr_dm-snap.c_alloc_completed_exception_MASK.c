
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception {int dummy; } ;
typedef scalar_t__ gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dm_exception* FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static struct dm_exception *FUNC_1(gfp_t VAR_3)
{
 struct dm_exception *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4 && VAR_3 == VAR_1)
  VAR_4 = FUNC_0(VAR_2, VAR_0);

 return VAR_4;
}
