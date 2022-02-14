
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adf_accel_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct adf_accel_dev*,char const*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,int,char const*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct adf_accel_dev *VAR_3,
      const char *VAR_4, const char *VAR_5,
      uint32_t VAR_6, uint32_t *VAR_7)
{
 char VAR_8[VAR_0];
 char VAR_9[VAR_1];

 FUNC_2(VAR_8, VAR_0, VAR_5, VAR_6);

 if (FUNC_0(VAR_3, VAR_4, VAR_8, VAR_9))
  return -VAR_2;

 if (FUNC_1(VAR_9, 10, VAR_7))
  return -VAR_2;
 return 0;
}
