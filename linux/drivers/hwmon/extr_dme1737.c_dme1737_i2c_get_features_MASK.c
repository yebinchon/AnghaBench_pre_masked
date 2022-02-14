
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dme1737_data {int has_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int) ;
 int VAR_4 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(int VAR_5, struct dme1737_data *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 u16 VAR_9;

 FUNC_2(VAR_5);





 VAR_8 = VAR_4 ? VAR_4 : FUNC_4(VAR_5, 0x20);
 if (!(VAR_8 == VAR_0 || VAR_8 == VAR_1 ||
       VAR_8 == VAR_3)) {
  VAR_7 = -VAR_2;
  goto exit;
 }


 FUNC_5(VAR_5, 0x07, 0x0a);


 VAR_9 = (FUNC_4(VAR_5, 0x60) << 8) |
  FUNC_4(VAR_5, 0x61);
 if (!VAR_9) {
  VAR_7 = -VAR_2;
  goto exit;
 }






 if ((FUNC_6(VAR_9 + 0x43) & 0x0c) == 0x08)
  VAR_6->has_features |= FUNC_0(5);
 if ((FUNC_6(VAR_9 + 0x44) & 0x0c) == 0x08)
  VAR_6->has_features |= FUNC_1(5);
 if ((FUNC_6(VAR_9 + 0x45) & 0x0c) == 0x08)
  VAR_6->has_features |= FUNC_0(4);
 if ((FUNC_6(VAR_9 + 0x46) & 0x0c) == 0x08)
  VAR_6->has_features |= FUNC_1(4);

exit:
 FUNC_3(VAR_5);

 return VAR_7;
}
