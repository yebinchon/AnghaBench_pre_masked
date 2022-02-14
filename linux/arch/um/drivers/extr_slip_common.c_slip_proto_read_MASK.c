
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip_proto {int more; size_t pos; int * ibuf; int esc; } ;


 int FUNC_0 (void*,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int *,int) ;
 int FUNC_3 (int ,int *,size_t*,int *) ;

int FUNC_4(int VAR_0, void *VAR_1, int VAR_2, struct slip_proto *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if(VAR_3->more > 0){
  VAR_4 = 0;
  while(VAR_4 < VAR_3->more){
   VAR_6 = FUNC_3(VAR_3->ibuf[VAR_4++], VAR_3->ibuf,
       &VAR_3->pos, &VAR_3->esc);
   if(VAR_6){
    FUNC_0(VAR_1, VAR_3->ibuf, VAR_6);
    FUNC_1(VAR_3->ibuf, &VAR_3->ibuf[VAR_4],
     VAR_3->more - VAR_4);
    VAR_3->more = VAR_3->more - VAR_4;
    return VAR_6;
   }
  }
  VAR_3->more = 0;
 }

 VAR_5 = FUNC_2(VAR_0, &VAR_3->ibuf[VAR_3->pos],
       sizeof(VAR_3->ibuf) - VAR_3->pos);
 if(VAR_5 <= 0)
  return VAR_5;

 VAR_7 = VAR_3->pos;
 for(VAR_4 = 0; VAR_4 < VAR_5; VAR_4++){
  VAR_6 = FUNC_3(VAR_3->ibuf[VAR_7 + VAR_4], VAR_3->ibuf,&VAR_3->pos,
      &VAR_3->esc);
  if(VAR_6){
   FUNC_0(VAR_1, VAR_3->ibuf, VAR_6);
   FUNC_1(VAR_3->ibuf, &VAR_3->ibuf[VAR_7+VAR_4+1],
    VAR_5 - (VAR_4 + 1));
   VAR_3->more = VAR_5 - (VAR_4 + 1);
   return VAR_6;
  }
 }
 return 0;
}
