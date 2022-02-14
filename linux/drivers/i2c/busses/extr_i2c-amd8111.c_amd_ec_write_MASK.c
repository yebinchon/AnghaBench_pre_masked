
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_smbus {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct amd_smbus*) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct amd_smbus *VAR_3, unsigned char VAR_4,
  unsigned char VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return VAR_6;
 FUNC_1(VAR_1, VAR_3->base + VAR_0);

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return VAR_6;
 FUNC_1(VAR_4, VAR_3->base + VAR_2);

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return VAR_6;
 FUNC_1(VAR_5, VAR_3->base + VAR_2);

 return 0;
}
