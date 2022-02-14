
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *,int ,int ,void*,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, u8 *VAR_3,
          u16 VAR_4, u8 VAR_5, void *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_1, VAR_4, ((void*)0), 0);
 if (VAR_7)
  return VAR_7;
 else
  return FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4, VAR_6,
    VAR_5);
}
