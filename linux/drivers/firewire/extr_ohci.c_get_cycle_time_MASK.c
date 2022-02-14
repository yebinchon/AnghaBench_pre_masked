
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int quirks; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fw_ohci*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct fw_ohci *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 s32 VAR_9, VAR_10;
 int VAR_11;

 VAR_5 = FUNC_1(VAR_2, VAR_0);

 if (VAR_2->quirks & VAR_1) {
  VAR_11 = 0;
  VAR_4 = VAR_5;
  VAR_5 = FUNC_1(VAR_2, VAR_0);
  do {
   VAR_3 = VAR_4;
   VAR_4 = VAR_5;
   VAR_5 = FUNC_1(VAR_2, VAR_0);
   VAR_6 = FUNC_0(VAR_3);
   VAR_7 = FUNC_0(VAR_4);
   VAR_8 = FUNC_0(VAR_5);
   VAR_9 = VAR_7 - VAR_6;
   VAR_10 = VAR_8 - VAR_7;
  } while ((VAR_9 <= 0 || VAR_10 <= 0 ||
     VAR_9 / VAR_10 >= 2 || VAR_10 / VAR_9 >= 2)
    && VAR_11++ < 20);
 }

 return VAR_5;
}
