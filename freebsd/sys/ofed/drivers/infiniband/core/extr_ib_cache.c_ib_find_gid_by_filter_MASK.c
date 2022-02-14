
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,union ib_gid const*,int ,int (*) (union ib_gid const*,struct ib_gid_attr const*,void*),void*,int *) ;
 int FUNC_1 (struct ib_device*,int ) ;

int FUNC_2(struct ib_device *VAR_1,
     const union ib_gid *VAR_2,
     u8 VAR_3,
     bool (*VAR_4)(const union ib_gid *VAR_5,
      const struct ib_gid_attr *,
      void *),
     void *VAR_6, u16 *VAR_7)
{

 if (!FUNC_1(VAR_1, VAR_3) && VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2,
        VAR_3, VAR_4,
        VAR_6, VAR_7);
}
