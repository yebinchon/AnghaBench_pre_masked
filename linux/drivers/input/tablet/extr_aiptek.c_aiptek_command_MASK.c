
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct aiptek {TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aiptek*,int,int,int*,int const) ;
 int FUNC_1 (int *,char*,unsigned char,unsigned char) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int const,int ) ;

__attribute__((used)) static int
FUNC_4(struct aiptek *VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
 const int VAR_5 = 3 * sizeof(u8);
 int VAR_6;
 u8 *VAR_7;

 VAR_7 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7[0] = 2;
 VAR_7[1] = VAR_3;
 VAR_7[2] = VAR_4;

 if ((VAR_6 =
      FUNC_0(VAR_2, 3, 2, VAR_7, VAR_5)) != VAR_5) {
  FUNC_1(&VAR_2->intf->dev,
   "aiptek_program: failed, tried to send: 0x%02x 0x%02x\n",
   VAR_3, VAR_4);
 }
 FUNC_2(VAR_7);
 return VAR_6 < 0 ? VAR_6 : 0;
}
