
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

 unsigned int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,int,unsigned int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

void FUNC_10(char *VAR_12, unsigned int VAR_13, int VAR_14)
{
 unsigned long VAR_15;
 unsigned long VAR_16;
 int VAR_17 = 0;

 FUNC_5("rtasd: logging event\n");
 if (VAR_12 == ((void*)0))
  return;

 FUNC_7(&VAR_11, VAR_16);


 switch (VAR_13 & VAR_1) {
 case 128:
  VAR_17 = FUNC_2(VAR_12);
  if (!(VAR_13 & VAR_0))
   VAR_4++;
  break;
 case 129:
 default:
  FUNC_0(!FUNC_1());
  FUNC_8(&VAR_11, VAR_16);
  return;
 }
 if ((VAR_13 & VAR_1) == 128)
  FUNC_6(VAR_12, VAR_17);


 if (VAR_14 || !VAR_5) {
  VAR_5 = 0;
  FUNC_0(!FUNC_1());
  FUNC_8(&VAR_11, VAR_16);
  return;
 }


 switch (VAR_13 & VAR_1) {
 case 128:
  VAR_15 = VAR_6 *
   ((VAR_9+VAR_8) & VAR_3);


  FUNC_3(&VAR_7[VAR_15], (void *) &VAR_4, sizeof(int));


  VAR_15 += sizeof(int);
  FUNC_3(&VAR_7[VAR_15], VAR_12, VAR_17);

  if (VAR_8 < VAR_2)
   VAR_8 += 1;
  else
   VAR_9 += 1;

  FUNC_0(!FUNC_1());
  FUNC_8(&VAR_11, VAR_16);
  FUNC_9(&VAR_10);
  break;
 case 129:
 default:
  FUNC_0(!FUNC_1());
  FUNC_8(&VAR_11, VAR_16);
  return;
 }
}
