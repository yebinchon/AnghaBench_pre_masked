
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_private {size_t mad_size; } ;
typedef int gfp_t ;


 struct ib_mad_private* FUNC_0 (size_t,int ) ;

__attribute__((used)) static struct ib_mad_private *FUNC_1(size_t VAR_0, gfp_t VAR_1)
{
 size_t VAR_2 = sizeof(struct ib_mad_private) + VAR_0;
 struct ib_mad_private *VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_3)
  VAR_3->mad_size = VAR_0;

 return VAR_3;
}
