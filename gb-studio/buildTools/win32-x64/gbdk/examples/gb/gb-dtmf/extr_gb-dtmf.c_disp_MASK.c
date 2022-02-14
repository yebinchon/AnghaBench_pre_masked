
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UBYTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (size_t,char*) ;
 int VAR_3 ;
 int FUNC_2 (size_t,int,size_t,int ,int ) ;

void FUNC_3(const char *VAR_4)
{
 UBYTE VAR_5, VAR_6;
 UBYTE VAR_7, VAR_8, VAR_9;
 char VAR_10[VAR_2];

 FUNC_0();

 VAR_5 = 0;
 while(VAR_4[VAR_5]){
  VAR_5++;
 }

 if(VAR_5 >= VAR_1){
  VAR_8 = VAR_5 - VAR_1;
  VAR_9 = VAR_1;
 }
 else{
  VAR_8 = 0;
  VAR_9 = VAR_5;
 }
 for(VAR_7 = 0;VAR_7 < VAR_9;VAR_7++){
  VAR_10[VAR_7] = VAR_4[VAR_7+VAR_8];
 }
 VAR_10[VAR_9] = 0x00;

 FUNC_1(VAR_9, VAR_10);

 VAR_6 = 19 - VAR_9;
 FUNC_2(VAR_6, 2, VAR_9, VAR_0, VAR_3);
}
