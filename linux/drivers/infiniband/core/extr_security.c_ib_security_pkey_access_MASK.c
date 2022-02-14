
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int ,int ,int *) ;
 int FUNC_1 (struct ib_device*,int ,int *) ;
 int FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (void*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_0,
       u8 VAR_1,
       u16 VAR_2,
       void *VAR_3)
{
 u64 VAR_4;
 u16 VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_0, VAR_1))
  return 0;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_4);

 if (VAR_6)
  return VAR_6;

 return FUNC_3(VAR_3, VAR_4, VAR_5);
}
