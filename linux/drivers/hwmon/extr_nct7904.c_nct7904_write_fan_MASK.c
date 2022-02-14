
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
typedef int u32 ;
struct nct7904_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_1 (int ,int,int) ;
 struct nct7904_data* FUNC_2 (struct device*) ;

 int FUNC_3 (struct nct7904_data*,int ,int ,long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, u32 VAR_6, int VAR_7,
        long VAR_8)
{
 struct nct7904_data *VAR_9 = FUNC_2(VAR_5);
 int VAR_10;
 u8 VAR_11;

 switch (VAR_6) {
 case 128:
  if (VAR_8 <= 0)
   return -VAR_1;

  VAR_8 = FUNC_1(FUNC_0(1350000, VAR_8), 1, 0x1fff);
  VAR_11 = (VAR_8 >> 5) & 0xff;
  VAR_10 = FUNC_3(VAR_9, VAR_0,
     VAR_3 + VAR_7 * 2, VAR_11);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_11 = VAR_8 & 0x1f;
  VAR_10 = FUNC_3(VAR_9, VAR_0,
     VAR_4 + VAR_7 * 2, VAR_11);
  return VAR_10;
 default:
  return -VAR_2;
 }
}
