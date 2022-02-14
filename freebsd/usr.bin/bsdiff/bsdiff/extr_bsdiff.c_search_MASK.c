
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef size_t off_t ;


 int FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (int *,size_t,int *,size_t) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static off_t FUNC_3(off_t *VAR_0,u_char *VAR_1,off_t VAR_2,
  u_char *VAR_3,off_t VAR_4,off_t VAR_5,off_t VAR_6,off_t *VAR_7)
{
 off_t VAR_8,VAR_9;

 if(VAR_6-VAR_5<2) {
  VAR_8=FUNC_1(VAR_1+VAR_0[VAR_5],VAR_2-VAR_0[VAR_5],VAR_3,VAR_4);
  VAR_9=FUNC_1(VAR_1+VAR_0[VAR_6],VAR_2-VAR_0[VAR_6],VAR_3,VAR_4);

  if(VAR_8>VAR_9) {
   *VAR_7=VAR_0[VAR_5];
   return VAR_8;
  } else {
   *VAR_7=VAR_0[VAR_6];
   return VAR_9;
  }
 }

 VAR_8=VAR_5+(VAR_6-VAR_5)/2;
 if(FUNC_2(VAR_1+VAR_0[VAR_8],VAR_3,FUNC_0(VAR_2-VAR_0[VAR_8],VAR_4))<0) {
  return FUNC_3(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,VAR_8,VAR_6,VAR_7);
 } else {
  return FUNC_3(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,VAR_5,VAR_8,VAR_7);
 };
}
