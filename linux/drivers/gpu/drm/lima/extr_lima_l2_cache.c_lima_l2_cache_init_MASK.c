
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int lock; } ;
struct lima_ip {scalar_t__ id; TYPE_2__ data; struct lima_device* dev; } ;
struct lima_device {int dev; TYPE_1__* ip; } ;
struct TYPE_3__ {scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct lima_ip*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct lima_ip *VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12;
 struct lima_device *VAR_13 = VAR_9->dev;


 if (VAR_9->id == VAR_6) {
  for (VAR_10 = VAR_7; VAR_10 <= VAR_8; VAR_10++) {
   if (VAR_13->ip[VAR_10].present)
    break;
  }
  if (VAR_10 > VAR_8)
   return -VAR_0;
 }

 FUNC_4(&VAR_9->data.lock);

 VAR_12 = FUNC_1(VAR_5);
 FUNC_0(VAR_13->dev, "l2 cache %uK, %u-way, %ubyte cache line, %ubit external bus\n",
   1 << (((VAR_12 >> 16) & 0xff) - 10),
   1 << ((VAR_12 >> 8) & 0xff),
   1 << (VAR_12 & 0xff),
   1 << ((VAR_12 >> 24) & 0xff));

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_1,
         VAR_2|VAR_3);
 FUNC_2(VAR_4, 0x1c);

 return 0;
}
