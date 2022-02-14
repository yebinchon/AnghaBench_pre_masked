
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* device_name; int unit_number; scalar_t__ selected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int,char*) ;
 int VAR_5 ;
 int FUNC_4 (char*,char*,char*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 char VAR_12[10];



 for (VAR_11 = 0, VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  if (VAR_3[VAR_8].selected)
   VAR_11++;
 VAR_10 = FUNC_2(VAR_11, ((FUNC_0(VAR_6) - 1 - VAR_2) / 17));



 VAR_4 = (FUNC_1(VAR_6) - 1 - VAR_7 - VAR_10) / VAR_10;




 if (VAR_4 < 3)
  VAR_4 = 3;
 VAR_9 = VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  if (VAR_3[VAR_8].selected) {
   if (VAR_9 + 17 >= FUNC_0(VAR_6) - 1 - VAR_2) {
    VAR_9 = VAR_2, VAR_7 += VAR_4 + 1;
    if (VAR_7 > FUNC_1(VAR_6) - 1 - (VAR_4 + 1))
     break;
   }
   FUNC_4(VAR_12, "%s%d", VAR_3[VAR_8].device_name,
    VAR_3[VAR_8].unit_number);
   FUNC_3(VAR_6, VAR_7, VAR_9 + 4, VAR_12);
   FUNC_3(VAR_6, VAR_7 + 1, VAR_9, "  KB/t tps  MB/s ");
   VAR_9 += 17;
  }
 if (VAR_9)
  VAR_7 += VAR_4 + 1;
 return (VAR_7);
}
