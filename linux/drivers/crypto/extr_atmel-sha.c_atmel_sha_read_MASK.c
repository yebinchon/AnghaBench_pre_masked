
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int tmp ;
struct atmel_sha_dev {int flags; int dev; scalar_t__ io_base; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,int,int) ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_3(struct atmel_sha_dev *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_1->io_base + VAR_2);
 return VAR_3;
}
