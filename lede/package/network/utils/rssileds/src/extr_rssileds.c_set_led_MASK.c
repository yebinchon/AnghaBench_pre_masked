
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led {unsigned char state; int controlfd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,unsigned char) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct led *VAR_0, unsigned char VAR_1)
{
 char VAR_2[8];

 if ( ! VAR_0 )
  return -1;

 if ( ! VAR_0->controlfd )
  return -1;

 if ( VAR_0->state == VAR_1 )
  return 0;

 FUNC_3(VAR_2, 8, "%d", VAR_1);

 FUNC_2(VAR_0->controlfd);

 if ( ! FUNC_1(VAR_2, sizeof(char), FUNC_4(VAR_2), VAR_0->controlfd) )
  return -2;

 FUNC_0(VAR_0->controlfd);
 VAR_0->state=VAR_1;

 return 0;
}
