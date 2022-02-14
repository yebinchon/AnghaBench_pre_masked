
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fw_card*,int ,int,int,int ,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_3(struct fw_card *VAR_8, int VAR_9, int VAR_10,
       int VAR_11, bool VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = VAR_12 ? VAR_0 : 0;
 __be32 VAR_16[2];






 for (VAR_13 = 0; VAR_13 < 5; VAR_13++) {
  VAR_14 = VAR_12 ? VAR_15 - VAR_11 : VAR_15 + VAR_11;
  if (VAR_14 < 0 || VAR_14 > VAR_0)
   return -VAR_4;

  VAR_16[0] = FUNC_1(VAR_15);
  VAR_16[1] = FUNC_1(VAR_14);
  switch (FUNC_2(VAR_8, VAR_7,
    VAR_9, VAR_10, VAR_6,
    VAR_2 + VAR_1,
    VAR_16, 8)) {
  case 128:

   return VAR_12 ? -VAR_3 : VAR_11;

  case 129:
   if (FUNC_0(VAR_16) == VAR_15)
    return VAR_11;

   VAR_15 = FUNC_0(VAR_16);

  }
 }

 return -VAR_5;
}
