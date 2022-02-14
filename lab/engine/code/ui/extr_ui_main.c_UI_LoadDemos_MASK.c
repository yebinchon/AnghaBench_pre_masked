
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int demoExt ;
struct TYPE_2__ {int demoCount; int * demoList; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_6( void ) {
 char VAR_4[VAR_2];
 char VAR_5[32];
 char *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_4("com_legacyprotocol");
 VAR_10 = FUNC_4("com_protocol");

 if(!VAR_10)
  VAR_10 = FUNC_4("protocol");
 if(VAR_11 == VAR_10)
  VAR_11 = 0;

 FUNC_1(VAR_5, sizeof(VAR_5), ".%s%d", VAR_0, VAR_10);
 VAR_3.demoCount = FUNC_5("demos", VAR_5, VAR_4, FUNC_0(VAR_4));

 VAR_6 = VAR_4;
 VAR_7 = 0;

 for(VAR_8 = 0; VAR_8 < 2; VAR_8++)
 {
  if(VAR_3.demoCount > VAR_1)
   VAR_3.demoCount = VAR_1;

  for(; VAR_7 < VAR_3.demoCount; VAR_7++)
  {
   VAR_9 = FUNC_3(VAR_6);
   VAR_3.demoList[VAR_7] = FUNC_2(VAR_6);
   VAR_6 += VAR_9 + 1;
  }

  if(!VAR_8)
  {
          if(VAR_11 > 0 && VAR_3.demoCount < VAR_1)
          {
                         FUNC_1(VAR_5, sizeof(VAR_5), ".%s%d", VAR_0, VAR_11);
                         VAR_3.demoCount += FUNC_5("demos", VAR_5, VAR_4, FUNC_0(VAR_4));
                         VAR_6 = VAR_4;
                        }
                        else
                                break;
  }
 }

}
