
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sbefifo {int async_ffdc; TYPE_1__* fsi_dev; } ;
typedef int raw_word ;
typedef int __be32 ;
struct TYPE_2__ {int slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct sbefifo *VAR_7)
{
 __be32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7->fsi_dev->slave, VAR_0,
       &VAR_8, sizeof(VAR_8));
 if (VAR_10)
  return VAR_10;
 VAR_9 = FUNC_0(VAR_8);


 if (!(VAR_9 & VAR_2))
  return -VAR_6;


 switch ((VAR_9 & VAR_3) >> VAR_4) {
 case 128:
  return -VAR_6;
 case 136:
  return -VAR_5;
 case 133:
 case 132:
 case 131:
 case 129:
 case 135:
  break;
 case 134:
 case 130:
  return -VAR_6;
 }


 if (VAR_9 & VAR_1)
  VAR_7->async_ffdc = 1;

 return 0;
}
