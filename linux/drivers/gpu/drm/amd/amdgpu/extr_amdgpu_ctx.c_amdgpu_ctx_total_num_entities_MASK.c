
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_0(void)
{
 unsigned VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  VAR_3 += VAR_1[VAR_2];

 return VAR_3;
}
