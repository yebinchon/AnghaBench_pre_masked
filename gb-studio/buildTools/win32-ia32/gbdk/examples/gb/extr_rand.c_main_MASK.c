
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

int FUNC_7(void)
{
  UBYTE VAR_7, VAR_8, VAR_9, VAR_10;

  for(VAR_7 = 0; VAR_7 != 80; VAR_7++) {
    VAR_4[VAR_7] = 0;
    VAR_5[VAR_7] = 0;
  }


  FUNC_3("Getting seed");
  FUNC_3("Push any key (1)");
  FUNC_5(0xFF);
  FUNC_6();
  VAR_6 = VAR_0;
  FUNC_3("Push any key (2)");
  FUNC_5(0xFF);
  FUNC_6();
  VAR_6 |= (UWORD)VAR_0 << 8;


  FUNC_1(VAR_6);

  do {
    VAR_7 = FUNC_4();
    VAR_8 = FUNC_0();

    if(VAR_7 < 80) {
      VAR_9 = ++VAR_4[VAR_7];
      FUNC_2(VAR_7, 144-VAR_9, VAR_2, VAR_3);
    }
    if(VAR_8 < 80) {
      VAR_10 = ++VAR_5[VAR_8];
      FUNC_2(VAR_8+80, 144-VAR_10, VAR_1, VAR_3);
    }
  }
  while(VAR_9 != 144 && VAR_10 != 144);
}
