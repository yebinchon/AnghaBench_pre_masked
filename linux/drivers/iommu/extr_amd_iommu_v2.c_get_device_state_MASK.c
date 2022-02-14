
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device_state {int count; } ;


 struct device_state* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static struct device_state *FUNC_4(u16 VAR_1)
{
 struct device_state *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0, VAR_3);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != ((void*)0))
  FUNC_1(&VAR_2->count);
 FUNC_3(&VAR_0, VAR_3);

 return VAR_2;
}
